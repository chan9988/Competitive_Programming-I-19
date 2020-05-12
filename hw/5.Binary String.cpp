#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct li{
    int num;
    li *one;
    li *zero;
};

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,ch=0;
    int i,j,ia=0;
    string s;
    li *a;
    cin >> n;
    a=new li[100000005];
    li *c,*p;
    c->one=&a[ia];
    a[ia].num=0;
    a[ia].one=NULL;
    a[ia].zero=NULL;
    ia++;
    c->zero=&a[ia];
    a[ia].num=0;
    a[ia].one=NULL;
    a[ia].zero=NULL;
    ia++;
    for(i=0;i<n;i++){
        p=c;
        cin >> s;
        for(j=0;j<s.size();j++){
            if(s[j]=='0'){
                if(p->zero==NULL){
                    p->zero=&a[ia];
                    ia++;
                    p=p->zero;
                    p->num++;
                    p->one=NULL;
                    p->zero=NULL;
                }
                else{
                    p=p->zero;
                    p->num++;
                }
            }
            else if(s[j]=='1'){
                if(p->one==NULL){
                    p->one=&a[ia];
                    ia++;
                    p=p->one;
                    p->num++;
                    p->one=NULL;
                    p->zero=NULL;
                }
                else{
                    p=p->one;
                    p->num++;
                }
            }

        }
    }
    cin >> k;
    for(i=0;i<k;i++){
        cin >> s;
        p=c;
        ch=0;
        for(j=0;j<s.size();j++){
            if(s[j]=='0'){
                if(p->zero==NULL){
                    cout << 0 << '\n';
                    ch=1;
                    break;
                }
                else{
                    p=p->zero;
                }
            }
            else if(s[j]=='1'){
                if(p->one==NULL){
                    cout << 0 << '\n';
                    ch=1;
                    break;
                }
                else{
                    p=p->one;
                }
            }
        }
        if(ch==0){
            cout << p->num << '\n';
        }
    }
    return 0;
}

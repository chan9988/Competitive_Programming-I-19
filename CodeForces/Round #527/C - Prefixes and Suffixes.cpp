#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<string> s;
    string m,a1,a2,b1,b2,c1,c2;
    int n,i;
    cin >> n;
    bool a[n]={false};
    for(i=0;i<2*n-2;i++){
        cin >> m;
        s.push_back(m);
        if(m.size()==n-1&&a1.empty()){
            a1=m;
        }
        else if(m.size()==n-1){
            a2=m;
        }
        if(m.size()==1&&b1.empty()){
            b1=m;
        }
        else if(m.size()==1){
            b2=m;
        }
        if(m.size()==2&&c1.empty()){
            c1=m;
        }
        else if(m.size()==2){
            c2=m;
        }
    }
    if(a1+b1==b2+a2&&(c1.compare(0,c1.size(),a1+b1,0,c1.size())==0||c2.compare(0,c2.size(),a1+b1,0,c2.size())==0)){
        m=a1+b1;
    }
    else if(a1+b2==b1+a2&&(c1.compare(0,c1.size(),a1+b2,0,c1.size())==0||c2.compare(0,c2.size(),a1+b2,0,c2.size())==0)){
        m=a1+b2;
    }
    else if(b1+a1==a2+b2&&(c1.compare(0,c1.size(),b1+a1,0,c1.size())==0||c2.compare(0,c2.size(),b1+a1,0,c2.size())==0)){
        m=b1+a1;
    }
    else{
        m=b2+a1;
    }
    for(i=0;i<2*n-2;i++){
        if( m.compare(0,s[i].size(),s[i])==0 && a[s[i].size()]==false){
            cout << 'P' ;
            a[s[i].size()]=true;
        }
        else{
            cout << 'S' ;
        }
    }
    cout << '\n';
    return 0;
}

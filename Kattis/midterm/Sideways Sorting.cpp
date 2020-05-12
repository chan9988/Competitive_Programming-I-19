#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    int i,j;
    char c;
    int ch=0;
    while(cin >> a >> b){
        if(a==0&&b==0){
            return 0;
        }
        if(ch==1){
            cout << '\n';
        }
        string m[b];
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                cin >> c;
                    m[j]+=c;
            }
        }
        for(i=0;i<b;i++){
            string s;
            for(j=0;j<a;j++){
                s+=toupper(m[i][j]);
            }
            m[i]=s+m[i];
        }
        stable_sort(m,m+b);
        for(i=a;i<2*a;i++){
            for(j=0;j<b;j++){
                cout << m[j][i] ;
            }
            cout << '\n';
        }
        ch=1;
    }
    return 0;
}

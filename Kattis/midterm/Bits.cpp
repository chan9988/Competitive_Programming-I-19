#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,a,b;
    cin >> n;
    while(n--){
        int c=0,m=0;
        cin >> a;
        b=a;
        while(b>0){
            a=b;
            c=0;
            while(a>0){
                if(a%2==1){
                    c++;
                    a/=2;
                }
                else{
                    a/=2;
                }
            }
            if(c>m){
                m=c;
            }
            b/=10;
        }
        cout << m << endl;
    }
    return 0;
}

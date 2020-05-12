#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int q;
    int a,b;
    long long n;
    int i;
    cin >> q ;
    for(i=0;i<q;i++){
        cin >> n >> a >> b;
        if(a*2<=b){
            cout << n*a << endl;
        }
        else{
            if(n%2==0){
                cout << (n/2)*b << endl;
            }
            else{
                cout << (n/2)*b+a << endl;
            }
        }
    }
    return 0;
}

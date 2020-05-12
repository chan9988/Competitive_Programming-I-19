#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,m,c=0;
    cin >> n >> m;
    if(m%n!=0){
        cout << -1 << endl;
        return 0;
    }
    m=m/n;
    while(m>1){
        if(m%2==0){
            c++;
            m/=2;
        }
        else if(m%3==0){
            c++;
            m/=3;
        }
        else{
            cout << -1 << endl;
            return 0;
        }
    }
    cout << c << endl;
    return 0;
}

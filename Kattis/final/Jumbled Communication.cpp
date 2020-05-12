#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,k,k1;
    int i,j;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> m;
        for(j=0;j<=255;j++){
            k1=(j<<1)%256;
            k=j^k1;
            if(k==m){
                cout << j << " ";
                break;
            }
        }
    }

    return 0;
}



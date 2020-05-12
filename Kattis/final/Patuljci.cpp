#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int a[9];
    int i,j,k;
    int sum=0;
    bool c=false;
    for(i=0;i<9;i++){
        cin >> a[i];
        sum+=a[i];
    }
    for(i=0;i<8;i++){
        for(j=i+1;j<9;j++){
            if(sum-a[i]-a[j]==100){
                c=true;
                break;
            }
        }
        if(c){
            break;
        }
    }
    for(k=0;k<9;k++){
        if(k!=i&&k!=j){
            cout << a[k] << endl;
        }
    }
    return 0;
}



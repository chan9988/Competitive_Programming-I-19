#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b,k;
        cin >> a >> b;
        int i;
        int max1=0,max2=0;
        for(i=0;i<a;i++){
            cin >> k;
            if(k>max1){
                max1=k;
            }
        }
        for(i=0;i<b;i++){
            cin >> k;
            if(k>max2){
                max2=k;
            }
        }
        if(max1>=max2){
            cout << "Godzilla" << endl;
        }
        else{
            cout << "MechaGodzilla" <<endl;
        }
    }

    return 0;
}



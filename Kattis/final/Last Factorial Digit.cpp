#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        int sum=1;
        cin >> n;
        int i;
        for(i=1;i<=n;i++){
            sum*=i;
            sum%=10;
        }
        cout << sum << endl;
    }
    return 0;
}



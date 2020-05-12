#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int l1,l2,r1,r2;
    int n;
    int i;
    cin >> n ;
    for(i=0;i<n;i++){
        cin >> l1 >> r1 >> l2 >> r2;
        int ans1,ans2;
        ans1=l1+1;
        ans2=l2+1;
        cout << ans1 << " ";
        if(ans2==ans1){
            cout << ans2-1 <<'\n';
        }
        else{
            cout << ans2 <<'\n';
        }
    }
    return 0;
}


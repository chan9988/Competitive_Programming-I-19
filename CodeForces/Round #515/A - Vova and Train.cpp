#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int l1,l2,v,r;
    int i;
    int sum=0;
    for(i=0;i<n;i++){
        cin >> l1 >> v >> l2 >> r;
        sum=l1/v-r/v+(l2-1)/v;
        cout << sum << endl;
    }
    return 0;
}

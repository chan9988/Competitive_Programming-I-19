#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> a;
    int t,m;
    cin >> t;
    while(t--){
        cin >> m;
        a.push_back(m);
    }
    stable_sort(a.begin(),a.end());
    long long sum=0;
    int i;
    for(i=a.size()-1;i>=0;i--){
        sum++;
        if(sum>=a[i]){
            cout << a[i] << '\n';
            return 0;
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int s,c;
    long long k,t;
    cin >> s >> c >> k;
    int i;
    vector<long long> a;
    for(i=0;i<s;i++){
        cin >> t;
        a.push_back(t);
    }
    stable_sort(a.begin(),a.end());
    long long co=0,ans=1,now;
    now=a[0];
    for(i=0;i<a.size();i++){
        if(co<c&&a[i]-now<=k){
            co++;
        }
        else{
            ans++;
            now=a[i];
            co=1;
        }
    }

    cout << ans << endl;
    return 0;
}

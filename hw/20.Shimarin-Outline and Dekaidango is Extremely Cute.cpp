#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T,t,k;
    long long n;
    int i;
    cin >> T;
    while(T--){
        cin >> n;
        multimap<long long,long long> a;
        multimap<long long,long long>::iterator it;
        for(i=0;i<n;i++){
            cin >> t >> k;
            a.insert(pair<long long,long long>(t,k));
        }
        vector<int> ans,b;
        long long ch=0;
        vector<int>::iterator it1;
        for(it=a.begin();it!=a.end();it++){
            if(ch==it->first){
                b.push_back(it->second);
            }
            else{
                stable_sort(b.begin(),b.end());
                for(i=0;i<b.size();i++){
                    it1=upper_bound(ans.begin(),ans.end(),b[i]);
                    if(it1==ans.end()){
                        ans.push_back(b[i]);
                    }
                    else{
                        *it1=b[i];
                    }
                }
                b.clear();
                ch=it->first;
                b.push_back(it->second);
            }

        }
        stable_sort(b.begin(),b.end());
        for(i=0;i<b.size();i++){
            it1=upper_bound(ans.begin(),ans.end(),b[i]);
            if(it1==ans.end()){
                ans.push_back(b[i]);
            }
            else{
                *it1=b[i];
            }
        }
        cout << ans.size() << '\n';
    }
    return 0;
}

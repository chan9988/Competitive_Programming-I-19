#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,i,m,x;
    while(cin >> n ){
        if(n==0){
            return 0;
        }
        vector<int> a,b,c;
        for(i=0;i<n;i++){
            cin >> m;
            a.push_back(m);
            c.push_back(m);
        }
        for(i=0;i<n;i++){
            cin >> m;
            b.push_back(m);
        }
        stable_sort(a.begin(),a.end());
        stable_sort(b.begin(),b.end());
        map<int,int> ans;
        for(i=0;i<a.size();i++){
            ans.insert(pair<int,int>(a[i],b[i]));
        }
        for(i=0;i<c.size();i++){
            x=c[i];
            cout << ans[x] << endl << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n;
    int i;
    int k;
    while(cin >> n){
        vector<int> a,b,t;
        vector<int>::iterator it;
        for(i=0;i<n;i++){
            cin >> k;
            a.push_back(k);
        }
        for(i=0;i<a.size();i++){
            it=lower_bound(b.begin(),b.end(),a[i]);
            if(it==b.end()){
                b.push_back(a[i]);
                t.push_back(b.size());
            }
            else{
                *it=a[i];
                t.push_back(it-b.begin()+1);
            }
        }
        cout << b.size() << endl;
        k=b.size();
        bool f=false;
        int large;
        vector<int> ans;
        for(i=t.size()-1;i>=0;i--){
            if(f==false&&t[i]==k){
                ans.push_back(i);
                k--;
                large=a[i];
                f=true;
            }
            else if(f==true&&t[i]==k&&a[i]<large){
                ans.push_back(i);
                k--;
                large=a[i];
            }
            if(k==0){
                break;
            }
        }
        reverse(ans.begin(),ans.end());
        for(i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout <<endl;
/*
        for(i=0;i<b.size();i++){
            cout << b[i] << " ";
        }
        cout << endl;
        for(i=0;i<t.size();i++){
            cout << t[i] << " ";
        }
        cout << endl;
*/
    }
    return 0;
}

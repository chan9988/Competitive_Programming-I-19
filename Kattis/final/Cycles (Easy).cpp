#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int T;
    int T1;
    cin >> T;
    T1=T;
    int k,n;
    int i;
    int n1,n2;
    while(T--){
        cin >> k >> n;
        bool ch[k+2][k+2]={false};
        for(i=0;i<n;i++){
            cin >> n1 >> n2;
            ch[n1][n2]=true;
            ch[n2][n1]=true;
        }
        vector<int> ans;
        int co=0;
        bool p=true;
        for(i=1;i<=k;i++){
            ans.push_back(i);
        }
        ans.push_back(1);
        for(i=0;i<ans.size()-1;i++){
            if(ch[ans[i]][ans[i+1]]==true){
                p=false;
                break;
            }
        }
        if(p){
            co++;
        }
        while(next_permutation(ans.begin()+1,ans.end()-1)){
            p=true;
            for(i=0;i<ans.size()-1;i++){
                if(ch[ans[i]][ans[i+1]]==true){
                    p=false;
                    break;
                }
            }
            if(p){
                co++;
            }
        }
        co/=2;
        co%=9901;
        cout << "Case #" << T1-T << ": " << co << endl;
    }
    return 0;
}

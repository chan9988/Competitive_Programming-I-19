#include <iostream>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin >> testcase;
    while(testcase--){
        int n,i,j,t;
        int m,k;
        cin >> n;
        static int a[1000005];
        for(i=0;i<n;i++){
            cin >> a[i] ;
        }
        vector<int> s,ans;
        for(i=0;i<n;i++){
            if(i!=0){
                if(a[i]<=s.back()){
                    s.push_back(a[i]);
                    ans.push_back(1);
                }
                else{
                    t=0;
                    while(a[i]>s.back()&&!(s.empty())){
                        t++;
                        s.pop_back();
                    }
                    s.push_back(a[i]);
                    m=ans.back()+1;
                    ans.pop_back();
                    for(j=0;j<t-1;j++){
                        k=ans.back()+1;
                        ans.pop_back();
                        if(k>m){
                            m=k;
                        }
                    }
                    ans.push_back(m);
                }
            }
            else{
                s.push_back(a[0]);
                ans.push_back(1);
            }
        }
        m=0;
        t=ans.size();
        for(i=0;i<t;i++){
            if(m<ans[i]){
                m=ans[i];
            }
        }
        cout << m << '\n';
    }
    return 0;
}

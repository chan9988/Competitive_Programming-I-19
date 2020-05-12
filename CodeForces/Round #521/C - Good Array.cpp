#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a,ans;
    long long m,m1=0,m2=0,sum=0;
    int i,j,c=0;
    for(i=0;i<n;i++){
        cin >> m;
        a.push_back(m);
        sum+=m;
    }
    for(j=0;j<a.size();j++){
        if(m1<a[j]){
            m2=m1;
            m1=a[j];
        }
        else if(m2==0||m2<a[j]){
            m2=a[j];
        }
    }
    for(i=0;i<a.size();i++){
        if(a[i]!=m1){
            if(sum-a[i]-m1==m1){
                ans.push_back(i);
                c++;
            }
        }
        else{
            if(sum-a[i]-m2==m2){
                ans.push_back(i);
                c++;
            }
        }

    }
    if(c==0){
        cout << c << '\n' << '\n';
    }
    else{
        cout << c << '\n';
        for(i=0;i<ans.size();i++){
            cout << ans[i]+1 << " ";
        }
        cout << '\n';
    }
    return 0;
}

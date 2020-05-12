#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    int *a,*ans;
    a=new int[n];
    ans=new int[n];
    int i,j;
    for(i=0;i<n;i++){
        cin >> a[i];
        if(i==0){
            ans[i]=a[i];
        }
        else{
            ans[i]=ans[i-1]^a[i];
        }
    }
    int t1,t2;
    int b;
    for(i=0;i<q;i++){
        cin >> t1 >> t2;
        if(t1>=2){
            b=ans[t2-1]^ans[t1-2];
        }
        else{
            b=ans[t2-1];
        }
        cout << b << '\n';
    }
    return 0;
}


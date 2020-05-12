#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n;
    long long a[n],mi;
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    long long b[m];
    for(i=0;i<m;i++){
        cin >> b[i];
    }
    int t,k;
    for(i=0;i<n;i++){
        cin >> t;
        cin >> k;
        mi=b[k-1];
        t--;
        while(t--){
            cin >> k;
            if(mi>b[k-1]){
                mi=b[k-1];
            }
        }
        a[i]+=mi;
    }
    mi=a[0];
    for(i=1;i<n;i++){
        if(a[i]<mi){
            mi=a[i];
        }
    }
    cin >> k;
    if(k/mi-1<0){
        cout << 0;
    }
    else{
        cout << k/mi-1;
    }
    return 0;
}



#include <iostream>
#include <iomanip>

using namespace std;

long long power(long long a,long long n,long long p){
    if(n==1){
        return a;
    }
    if(n%2==0){
        long long c;
        c=power(a,n/2,p)%p;
        return c*c%p;
    }
    else{
        long long c;
        c=power(a,n/2,p)%p;
        return (c*c%p)*a%p;
    }
}

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int i;
    long long a,b,ans;
    for(i=0;i<n;i++){
        cin >> a >> b;
        ans=power(a,b-2,b);
        cout << ans << endl;;
    }
    return 0;
}

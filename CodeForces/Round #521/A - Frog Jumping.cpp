#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int i,j;
    long long a,b,k,t;
    long long sum;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b >> k;
        sum=0;
        if(k%2==0){
            t=k/2;
            sum=(a-b)*t;
        }
        else{
            t=k/2;
            sum=(a-b)*t+a;
        }
        cout << sum << endl;
    }
    return 0;
}

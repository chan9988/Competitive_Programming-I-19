#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    long long n,t;
    cin >> n >> t;
    long long a,b,c,t0;
    cin >> a >> b >> c >> t0;
    vector<int> s;
    s.push_back(t0);
    long long i;
    long long k;
    for(i=0;i<n-1;i++){
        k=(a*t0+b)%c+1;
        t0=k;
        s.push_back(k);
    }
    stable_sort(s.begin(),s.end());
    long long p=0,co=0,t1=0;
    for(i=0;i<s.size();i++){
        t1+=s[i];
        if(t1<=t){
            co++;
            p+=t1;
            p%=1000000007;
        }
        else{
            break;
        }
    }
    cout << co << " " << p;
    return 0;
}

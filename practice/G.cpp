#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long m,n;
    cin >> m >> n;
    if(n==0){
        cout << 0 ;
        return 0;
    }
    long long sum;
    sum=m*(m-1)/2+m;
    long long  i,t;
    vector<int> a;

    for(i=0;i<n;i++){
        cin >> t;
        a.push_back(t);
    }
    for(i=1;i<a.size();i++){
        t=a[i]-a[i-1]-1;
        sum=sum-(t*(t-1)/2+t);
    }
    if(a.size()!=0){
        t=a[0]-1;
        sum=sum-(t*(t-1)/2+t);
        t=m-a[a.size()-1];
        sum=sum-(t*(t-1)/2+t);
    }
    else{
        sum=0;
    }
    cout << sum ;
    return 0;
}

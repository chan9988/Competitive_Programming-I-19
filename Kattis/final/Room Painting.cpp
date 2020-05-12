#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    cin >> a >> b;
    int i,j;
    set<long long> l;
    set<long long>::iterator it;
    long long k;
    for(i=0;i<a;i++){
        cin >> k;
        l.insert(k);
    }
    long long sum=0,m;
    for(i=0;i<b;i++){
        cin >> k;
        if(l.find(k)==l.end()){
            it=l.upper_bound(k);
            m=*it-k;
            sum+=m;
        }
    }
    cout << sum ;
    return 0;
}



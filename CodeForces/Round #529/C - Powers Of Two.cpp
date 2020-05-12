#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    multiset<int> a;
    multiset<int>::iterator it;
    int n,k,m;
    cin >> n >> k;
    int i=1,j;
    while(i<=n){
        i*=2;
    }
    m=n;
    j=i/2;
    for(;j>=1;j/=2){
        if(m/j>=1){
            m%=j;
            a.insert(j);
        }

        if(m==0){
            break;
        }
    }
    int b;
    while(a.size()<k){
        it=a.end();
        it--;
        if(*it==1){
            cout << "NO" << endl;
            return 0;
        }
        b=*it/2;
        a.erase(it);
        a.insert(b);
        a.insert(b);
    }
    if(a.size()==k){
        cout << "YES" <<endl;
        for(it=a.begin();it!=a.end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}


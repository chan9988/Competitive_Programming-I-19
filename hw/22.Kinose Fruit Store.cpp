#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <bitset>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,t1;
    cin >> t;
    int n,k;
    int i;
    long long sum,k1;
    vector<int> a;
    while(t--){
        a.clear();
        sum=0;
        cin >> n >> k;
        for(i=0;i<n;i++){
            cin >> t1;
            a.push_back(t1);
            sum+=t1;
        }
        if((sum*k)%(100+k)==0){
            k1=(sum*k)/(100+k);
            bitset<3000000> b;
            b.reset();
            b[0]=true;
            for(i=0;i<n;i++){
                b=b|(b<<a[i]);
            }
            if(b[k1]==1){
                cout << "Yes" << '\n';
            }
            else{
                cout << "No" << '\n';
            }
        }
        else{
            cout << "No" << '\n';
        }

    }
    return 0;
}
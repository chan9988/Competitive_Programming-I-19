#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,k;
    int i,m,t=0;
    cin >> n >> k;
    int b[k]={0};
    vector<int> a;
    for(i=0;i<n;i++){
        cin >> m;
        a.push_back(m);
    }
    for(i=0;i<a.size();i++){
        b[a[i]%k]++;
    }
    if(k%2==0){
        for(i=0;i<=k/2;i++){
            if(i==0||i==k/2){
                t+=b[i]/2;
            }
            else{
                if(b[i]<=b[k-i]){
                    t+=b[i];
                }
                else{
                    t+=b[k-i];
                }
            }
        }
    }
    else{
        for(i=0;i<=k/2;i++){
            if(i==0){
                t+=b[i]/2;
            }
            else{
                if(b[i]<=b[k-i]){
                    t+=b[i];
                }
                else{
                    t+=b[k-i];
                }
            }
        }
    }
    cout << t*2 << endl;
    return 0;
}

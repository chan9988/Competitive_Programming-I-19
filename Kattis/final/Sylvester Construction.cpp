#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <bitset>

using namespace std;

int cal_val(long long n,long long x,long long y){
    int v=1;
    while(n%2==0){
        n/=2;
        if(x<n){
            if(y>=n){
                y-=n;
            }
        }
        else{
            x-=n;
            if(y>=n){
                y-=n;
                v*=-1;
            }
        }
    }
    return v;
}

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int t;
    cin >> t;
    long long n,x,y,w,h;
    int i,j;
    while(t--){
        cin >> n >> x >> y >> w >> h;
        for(i=y;i<y+h;i++){
            for(j=x;j<x+w;j++){
                cout << cal_val(n,i,j) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

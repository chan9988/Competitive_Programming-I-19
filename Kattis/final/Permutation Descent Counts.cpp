#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool ch[101][101]={false};
long long c[101][101]={0};

long long f(long long a,long long b){
    if(b==0){
        c[a][b]=1;
        c[a][b]=true;
        return 1;
    }
    else if(a==1&&b==1){
        c[a][b]=0;
        ch[a][b]=true;
        return 0;
    }
    else if(b>=a){
        c[a][b]=0;
        ch[a][b]=true;
        return 0;
    }
    else{
        long long ans1,ans2;
        if(ch[a-1][b-1]==true){
            ans1=c[a-1][b-1];
        }
        else{
            c[a-1][b-1]=f(a-1,b-1)%1001113;
            ch[a-1][b-1]=true;
            ans1=c[a-1][b-1];
        }
        if(ch[a-1][b]==true){
            ans2=c[a-1][b];
        }
        else{
            c[a-1][b]=f(a-1,b)%1001113;
            ch[a-1][b]=true;
            ans2=c[a-1][b];
        }
        return ((a-b)*ans1%1001113+(b+1)*ans2%1001113)%1001113;
    }
}

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int T;
    cin >> T;
    int k;
    long long a,b;
    while(T--){
        cin >> k >> a >> b;
        cout << k << " " << f(a,b) << '\n';
    }
    return 0;
}

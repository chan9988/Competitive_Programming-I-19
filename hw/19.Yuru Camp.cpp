#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void find_x_y(long long c,long long m,int n){
    long long x=0,y=0;
    long long m1;
    m1=m;
    m=m<<n;
    while(n>0){
        n-=1;
        m=m>>2;
        m1=m1>>1;
        if(c<=4*m&&c>3*m){
            x+=m1;
            y+=m1;
            c-=3*m;
        }
        else if(c<=3*m&&c>2*m){
            y+=m1;
            c-=2*m;
        }
        else if(c<=2*m&&c>m){
            x+=m1;
            c-=m;
        }
    }
    x++;
    y++;
    cout << y << " " << x << '\n';
}

void find_value(long long y,long long x,long long m,int n){
    long long ans=0;
    long long m1;
    m1=m;
    m1=m1<<n;
    while(n>0){
        n-=1;
        m=m>>1;
        m1=m1>>2;
        if(x<=m){
            if(y>m){
                y-=m;
                ans+=m1*2;
            }
        }
        else{
            x-=m;
            ans+=m1;
            if(y>m){
                y-=m;
                ans+=m1*2;
            }
        }
    }
    ans++;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long T,n,t;
    cin >> T;
    long long k,r,c;
    while(T--){
        cin >> n >> t;
        long long m;
        m=(long long)(1<<n);
        while(t--){
            cin >> k ;
            if(k==1){
                cin >> r >> c;
                find_value(r,c,m,n);
            }
            else if(k==2){
                cin >> c;
               find_x_y(c,m,n);
            }
        }
    }
    return 0;
}


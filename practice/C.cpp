#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long x,y,i;
    cin >> x >> y;
    long long m,n,t,num;
    long long a,b,c,d,l1,l2;
    cin >> a >> b >> c >> d;
    if(x>y){
        m=x;
        n=y;
    }
    else{
        m=y;
        n=x;
    }
    while(n>0){
        t=m%n;
        m=n;
        n=t;
    }
    t=x/m;
    num=x/t;
    x/=m;
    y/=m;
    for(i=1;i<num;i++){
        if(x*i>=a&&x*i<=c&&y*i>=b&&y*i<=d){
            l1=c-x*i;
            l2=d-y*i;
            if(l1/x<l2/y){
                i+=l1/x;
            }
            else{
                i+=l2/y;
            }
        }
        else{
            cout << "No" << '\n';
            cout << x*i << " " << y*i ;
            return 0;
        }
    }
    cout << "Yes" ;

    return 0;
}

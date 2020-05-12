#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c,d,b1;
    cin >> a >> b >> c >> d;
    long long time=0;
    int m,n;
    m=d/b;
    time=m*a;
    d-=m*b;
    if(d>0){
        time+=a;
        b1=b-d;
        if(b1*a>=c){
            cout << time;
            return 0;
        }
        else{
            c-=b1*a;
            if(c%b==0){
                time+=c/b;
            }
            else{
                time+=c/b;
                time++;
            }
            cout << time;
            return 0;
        }
    }
    else{
        if(c%b==0){
                time+=c/b;
            }
            else{
                time+=c/b;
                time++;
            }
            cout << time;
    }

    return 0;
}

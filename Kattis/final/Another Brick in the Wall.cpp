#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int h,w,n,m=0;
    cin >> h >> w >> n;
    int a[n];
    int i,c;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    c=0;
    for(i=0;i<n;i++){
        c+=a[i];
        if(c>w&&m<=h){
            cout << "NO" ;
            return 0;
        }
        else if(c==w){
            c=0;
            m++;
            if(m==h){
                break;
            }
        }
    }
    cout << "YES" ;
    return 0;
}



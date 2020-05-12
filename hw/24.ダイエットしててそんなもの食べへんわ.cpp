#include <iostream>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    int r,c,x,y;
    int a[4];
    int i,ans;
    while(T--){
        cin >> r >> c >> x >> y;
        a[0]=r-x;
        a[1]=x-1;
        a[2]=c-y;
        a[3]=y-1;
        ans=a[0];
        for(i=1;i<4;i++){
            ans^=a[i];
        }
        if(ans!=0){
            cout << "Taberu" << '\n';
        }
        else{
            cout << "Tabehen" << '\n';
        }
    }
    return 0;
}

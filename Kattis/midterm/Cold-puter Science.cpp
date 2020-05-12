#include <iostream>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,i,t=0,a;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        if(a<0){
            t++;
        }
    }
    cout << t << endl;
    return 0;
}

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int i,c=-1;
    int a[n];
    for(i=0;i<n;i++){
        cin  >> a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<=m){
            c=i;
            break;
        }
    }
    if(c==-1){
        cout << "It had never snowed this early!" << endl;
    }
    else{
        cout << "It hadn't snowed this early in " << c << " years!" << endl;
    }
    return 0;
}

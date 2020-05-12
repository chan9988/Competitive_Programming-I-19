#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin >> a;
    if(a==1||a==2||a==3){
        cout << 1 ;
    }
    else{
        cout << a-2;
    }

    return 0;
}



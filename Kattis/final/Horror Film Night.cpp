#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int i;
    int k,t;
    bool a[1000020]={false},b[1000020]={false};
    cin >> k;
    for(i=0;i<k;i++){
        cin >> t;
        a[t]=true;
    }
    cin >> k;
    for(i=0;i<k;i++){
        cin >> t;
        b[t]=true;
    }
    int sum=0;
    bool ch1=true,ch2=true;
    for(i=0;i<1000000;i++){
        if(a[i]==true&&b[i]==true){
            sum++;
            ch1=true;
            ch2=true;
        }
        else if(a[i]==true&&b[i]==false&&ch1==true){
            sum++;
            ch1=false;
            ch2=true;
        }
        else if(a[i]==false&&b[i]==true&&ch2==true){
            sum++;
            ch1=true;
            ch2=false;
        }
    }
    cout << sum;
    return 0;
}

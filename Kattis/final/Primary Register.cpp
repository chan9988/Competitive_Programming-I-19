#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    long long sum=0,sum1=0;
    sum=(((((((18*17)+16)*13+12)*11+10)*7+6)*5+4)*3+2)*2+1;
    int a[8];
    int i;
    for(i=0;i<8;i++){
        cin >> a[i];
    }
    sum1=(((((((a[7]*17)+a[6])*13+a[5])*11+a[4])*7+a[3])*5+a[2])*3+a[1])*2+a[0];
    cout << sum-sum1;
    return 0;
}



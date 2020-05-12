#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,c;
    cin >> n;
    int i,j,j1;
    long long k,m=10000000;
    long long a[n],b[n];
    long long sum1,sum2;
    for(i=1;i<=n;i++){
        cin >> a[i] >> b[i];
    }
    for(i=1;i<pow(2,n);i++){
        sum1=1;
        sum2=0;
        for(j=i;j>0;j-=(j&-j)){
            j1=j&-j;
            c=0;
            while(j1>0){
                j1/=2;
                c++;
            }
            sum1*=a[c];
            sum2+=b[c];
        }
        if(sum1>=sum2){
            k=sum1-sum2;
        }
        else{
            k=sum2-sum1;
        }
        if(k<m){
            m=k;
        }
    }
    cout << m << endl;

    return 0;
}



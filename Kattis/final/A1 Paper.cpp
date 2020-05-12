#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n;
    cin >> n;
    int i,t;
    vector<int> a,b;
    for(i=0;i<n-1;i++){
        cin >> t;
        a.push_back(t);
    }
    int k=2;
    for(i=0;i<n-1;i++){
        if(a[i]>=k){
            b.push_back(k);
            break;
        }
        else{
            if(i==n-2){
                cout << "impossible" ;
                return 0;
            }
            b.push_back(a[i]);
            k-=a[i];
            k*=2;
        }
    }
    double m1,m2;
    m2=pow(2,-1.25);
    m1=pow(2,-0.75);
    double l=0;
/*
    for(i=0;i<b.size();i++){
        cout << b[i] << " ";
    }
*/
    for(i=b.size()-1;i>=1;i--){
        b[i-1]+=b[i]/2;
        t=i/2;
        if(i%2==0){
            l+=(b[i]/2)*(m1/pow(2,t));
        }
        else{
            l+=(b[i]/2)*(m2/pow(2,t));
        }
    }
    l+=(b[i]/2)*m1;
    cout << setprecision(10) << l ;
    return 0;
}

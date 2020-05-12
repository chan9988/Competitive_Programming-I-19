#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int n,n1;
    cin >> n;
    n1=n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    int m=0;
    for(i=0;i<n;i++){
        if(a[i]>=0){
            m+=a[i];
        }
        else if(a[i]==-1){
            n1--;
        }
    }
    double b;
    b=(double)m/n1;
    cout << b << endl;
    return 0;
}
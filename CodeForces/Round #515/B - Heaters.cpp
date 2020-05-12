#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,r,m;
    cin >> n >> r ;
    int i,j,c=0,k=0,t;
    int a[n]={0};
    for(i=0;i<n;i++){
        cin >> m;
        if(m==1){
            a[i]=2;
        }
    }
    i=0;
    while(i<n){
        t=0;
        for(j=r-1;j>=-r+1;j--){
            if(a[i+j]==2&&i+j<n&&i+j>=0){
                for(k=-r+1;k<=r-1;k++){
                    if(i+j+k<n&&i+j+k>=0&&a[i+j+k]==0){
                        a[i+j+k]=1;
                    }
                }
                t=1;
                c++;
                i=i+j+k;
                break;
            }
        }
        if(t==0){
            cout << -1 << endl;
            return 0;
        }
    }
        cout << c << endl;


    return 0;
}


#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int a[6];
    int i,j,k;
    int h1,h2;
    vector<int> b,c;
    for(i=0;i<6;i++){
        cin >> a[i];
    }
    cin >> h1 >> h2;
    bool ch=false;
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            for(k=j+1;k<6;k++){
                if(a[i]+a[j]+a[k]==h1){
                    ch=true;
                    break;
                }
            }
            if(ch){
                break;
            }
        }
        if(ch){
            break;
        }
    }
    int t;
    for(t=0;t<6;t++){
        if(t==i||t==j||t==k){
            b.push_back(a[t]);
        }
        else{
            c.push_back(a[t]);
        }
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for(i=2;i>=0;i--){
        cout << b[i] << " ";
    }
    for(i=2;i>=0;i--){
        cout << c[i] << " ";
    }
    return 0;
}



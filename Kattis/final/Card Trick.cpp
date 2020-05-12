#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int m,c;
        cin >> m;
        int a[m]={0};
        int i,j;
        j=-1;
        for(i=2;i<m+2;i++){
            c=0;
            while(c<i){
                j++;
                if(j>=m){
                    j-=m;
                }
                if(a[j]==0){
                    c++;
                    if(c==i){
                        a[j]=i-1;
                    }
                }
            }
        }
        for(i=0;i<m;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}



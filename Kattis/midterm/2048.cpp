#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int a[4][4];
    vector<int> b;
    int i,j,n;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin >> a[i][j];
        }
    }
    cin >> n;
    if(n==0){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(a[i][j]!=0){
                    b.push_back(a[i][j]);
                }
            }
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            for(j=0;j<4;j++){
                if(b[j]==0){
                    break;
                }
                if(b[j]==b[j+1]){
                    b[j]*=2;
                    b.erase(b.begin()+j+1);
                }
            }
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            for(j=0;j<4;j++){
                a[i][j]=b[j];
            }
            b.clear();
        }
    }
    else if(n==1){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(a[j][i]!=0){
                    b.push_back(a[j][i]);
                }
            }
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            for(j=0;j<4;j++){
                if(b[j]==0){
                    break;
                }
                if(b[j]==b[j+1]){
                    b[j]*=2;
                    b.erase(b.begin()+j+1);
                }
            }
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            for(j=0;j<4;j++){
                a[j][i]=b[j];
            }
            b.clear();
        }
    }
    else if(n==2){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(a[i][3-j]!=0){
                    b.push_back(a[i][3-j]);
                }
            }
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            for(j=0;j<4;j++){
                if(b[j]==0){
                    break;
                }
                if(b[j]==b[j+1]){
                    b[j]*=2;
                    b.erase(b.begin()+j+1);
                }
            }
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            for(j=0;j<4;j++){
                a[i][3-j]=b[j];
            }
            b.clear();
        }
    }
    else if(n==3){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(a[3-j][i]!=0){
                    b.push_back(a[3-j][i]);
                }
            }
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            for(j=0;j<4;j++){
                if(b[j]==0){
                    break;
                }
                if(b[j]==b[j+1]){
                    b[j]*=2;
                    b.erase(b.begin()+j+1);
                }
            }
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            b.push_back(0);
            for(j=0;j<4;j++){
                a[3-j][i]=b[j];
            }
            b.clear();
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

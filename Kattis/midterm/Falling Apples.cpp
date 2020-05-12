#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int r,c;
    cin >> r >> c;
    char a[50010][12];
    int i,j,k;
    vector<char> s;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    for(j=0;j<c;j++){
        int m=0,n=0,num=0;
        s.clear();
        for(i=r-1;i>=0;i--){
            if(a[i][j]=='a'){
                num++;
                n++;
            }
            else if(a[i][j]=='.'){
                n++;
            }
            else if(a[i][j]=='#'){
                while(num>0){
                    s.push_back('a');
                    num--;
                    m++;
                }
                for(k=0;k<n-m;k++){
                    s.push_back('.');
                }
                n++;
                m=n;
                s.push_back('#');
            }
            if(i==0){
                while(num>0){
                    s.push_back('a');
                    num--;
                    m++;
                }
                for(k=0;k<n-m;k++){
                    s.push_back('.');
                }
            }
        }
        for(i=r-1,k=0;i>=0;i--,k++){
            a[i][j]=s[k];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << a[i][j] ;
        }
        cout << endl;
    }
    return 0;
}

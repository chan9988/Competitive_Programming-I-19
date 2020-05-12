#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n;
    cin >> n ;
    int i,m=0,c=0,a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==1){
            c++;
            if(m<c){
                m=c;
            }
        }
        else{
            c=0;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==1){
            c++;
            if(m<c){
                m=c;
            }
        }
        else{
            c=0;
        }
    }
    cout << m << endl;
    return 0;
}

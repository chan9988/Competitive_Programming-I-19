#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n;
    string m1,m2;
    cin >> n >> m1 >> m2;
    int i;
    if(n%2==0){
        if(m1==m2){
            cout << "Deletion succeeded" << endl;
        }
        else{
            cout << "Deletion failed" << endl;
        }
    }
    else{
        for(i=0;i<m1.size();i++){
            if(m1[i]=='1'){
                m1[i]='0';
            }
            else{
                m1[i]='1';
            }
        }
        if(m1==m2){
            cout << "Deletion succeeded" << endl;
        }
        else{
            cout << "Deletion failed" << endl;
        }
    }


    return 0;
}

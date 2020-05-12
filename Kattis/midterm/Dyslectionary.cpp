#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    vector<string> a;
    string s;
    int m,i,t;
    int f=0;
    while(!cin.eof()){
        if(f==1){
            cout << endl;
        }
        else{
            f=1;
        }
        while(getline(cin,s)){
            if(s!=""){
                a.push_back(s);
            }
            else{
                break;
            }
        }
            for(i=0;i<a.size();i++){
                reverse(a[i].begin(),a[i].end());
            }
            sort(a.begin(),a.end());
            for(i=0;i<a.size();i++){
                reverse(a[i].begin(),a[i].end());
            }
            m=0;
            for(i=0;i<a.size();i++){
                if(m<=a[i].size()){
                    m=a[i].size();
                }
            }
            for(i=0;i<a.size();i++){
                t=m-a[i].size();
                while(t--){
                    cout << " ";
                }
                cout << a[i] << endl;
            }
            a.clear();
    }

    return 0;
}

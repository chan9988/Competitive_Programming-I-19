#include <iostream>
#include <cstdio>
#include <vector>


using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    string s;
    int i;
    while(getline(cin,s)){
        int o=0,l=0;
        int a,b;
        for(i=0;i<s.size();i++){
            b=0;
            a=static_cast<int>(s[i]);
            while(a>0){
                if(a%2==1){
                    b++;
                }
                a/=2;
            }
            l+=b;
            o+=(7-b);
        }
        if(l%2==0&&o%2==0){
            cout << "free" << endl;
        }
        else{
            cout << "trapped" << endl;
        }
    }

    return 0;
}

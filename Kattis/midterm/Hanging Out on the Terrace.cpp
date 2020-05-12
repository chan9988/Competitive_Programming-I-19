#include <iostream>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int l,x;
    int i;
    int a,b=0,c=0;
    string s;
    cin >> l >> x;
    for(i=0;i<x;i++){
        cin >> s >> a;
        if(s=="enter"){
            if(b+a<=l){
                b+=a;
            }
            else{
                c++;
            }

        }
        if(s=="leave"){
            b-=a;
        }
    }
    cout << c << '\n';
    return 0;
}

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    string s;
    double b;
    int n=0,a;
    double c=0;
    while(cin >> s){
        if(s=="buy"){
            cin >> a >> b;
            c=(n*c+a*b)/(a+n);
            n+=a;
        }
        else if(s=="split"){
            cin >> a;
            n*=a;
            c/=a;
        }
        else if(s=="sell"){
            cin >> a >> b;
            n-=a;
        }
        else if(s=="merge"){
            cin >> a;
            n/=a;
            c*=a;
        }
        else if(s=="die"){
            cin >> a;
            if(a>=c){
                cout << setprecision(10) << n*(a-(a-c)*0.3);
            }
            else{
                cout << setprecision(10)<< n*a ;
            }
            return 0;
        }
//        cout << n << " " << c<< endl;
    }
    return 0;
}



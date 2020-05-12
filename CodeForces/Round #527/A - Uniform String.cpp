#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> list;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    int i,j;
    cin >> t;
    int n,k,m;
    for(i=0;i<t;i++){
        cin >> n >> k;
        for(j=0;j<n;j++){
            if(j%k==0){
                cout << 'a' ;
            }
            else if(j%k==1){
                cout << 'b' ;
            }
            else if(j%k==2){
                cout << 'c' ;
            }
            else if(j%k==3){
                cout << 'd' ;
            }
            else if(j%k==4){
                cout << 'e' ;
            }
            else if(j%k==5){
                cout << 'f' ;
            }
            else if(j%k==6){
                cout << 'g' ;
            }
            else if(j%k==7){
                cout << 'h' ;
            }
            else if(j%k==8){
                cout << 'i' ;
            }
            else if(j%k==9){
                cout << 'j' ;
            }
            else if(j%k==10){
                cout << 'k' ;
            }
            else if(j%k==11){
                cout << 'l' ;
            }
            else if(j%k==12){
                cout << 'm' ;
            }
            else if(j%k==13){
                cout << 'n' ;
            }
            else if(j%k==14){
                cout << 'o' ;
            }
            else if(j%k==15){
                cout << 'p' ;
            }
            else if(j%k==16){
                cout << 'q' ;
            }
            else if(j%k==17){
                cout << 'r' ;
            }
            else if(j%k==18){
                cout << 's' ;
            }
            else if(j%k==19){
                cout << 't' ;
            }
            else if(j%k==20){
                cout << 'u' ;
            }
            else if(j%k==21){
                cout << 'v' ;
            }
            else if(j%k==22){
                cout << 'w' ;
            }
            else if(j%k==23){
                cout << 'x' ;
            }
            else if(j%k==24){
                cout << 'y' ;
            }
            else if(j%k==25){
                cout << 'z' ;
            }
        }
        cout << '\n';
    }
    return 0;
}

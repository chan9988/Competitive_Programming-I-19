#include <iostream>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int w,l;
    while(cin >> w >> l){
        if(w==0&&l==0){
            return 0;
        }
        int n,i;
        cin >> n;
        int tx=0,ty=0,rx=0,ry=0;
        char a;
        int b;
        for(i=0;i<n;i++){
            cin >> a >> b;
            if(a=='u'){
                tx+=b;
                if(rx+b<l){
                    rx+=b;
                }
                else{
                    rx=l-1;
                }
            }
            else if(a=='d'){
                tx-=b;
                if(rx-b>=0){
                    rx-=b;
                }
                else{
                    rx=0;
                }
            }
            else if(a=='r'){
                ty+=b;
                if(ry+b<w){
                    ry+=b;
                }
                else{
                    ry=w-1;
                }
            }
            else if(a=='l'){
                ty-=b;
                if(ry-b>=0){
                    ry-=b;
                }
                else{
                    ry=0;
                }
            }
        }
        cout << "Robot thinks " << ty << " " << tx << '\n';
        cout << "Actually at " << ry << " " << rx << '\n' ;
    }
    return 0;
}

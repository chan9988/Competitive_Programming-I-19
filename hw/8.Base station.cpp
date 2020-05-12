#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double x1,y1,x2,y2,x3,y3;
    double x,y,r,m,n;
    double r1,r2,r3;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
        r=0;
        if(x1==x2&&x1==x3&&y1==y2&&y1==y3){
            cout << fixed << setprecision(6) <<  x1 << " " << y1 << " ";
            cout << fixed << setprecision(6) << r << '\n';
        }
        else if(x1==x2&&y1==y2){
            r=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))/2;
            cout << fixed << setprecision(6) << (x1+x3)/2 << " " << (y1+y3)/2 << " " ;
            cout << fixed << setprecision(6) << r << '\n';
        }
        else if(x1==x3&&y1==y3){
            r=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/2;
            cout << fixed << setprecision(6) <<(x1+x2)/2 << " " << (y1+y2)/2 << " " ;
            cout << fixed << setprecision(6) << r << '\n';
        }
        else if(x2==x3&&y2==y3){
            r=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))/2;
            cout << fixed << setprecision(6) <<(x1+x3)/2 << " " << (y1+y3)/2 << " " ;
            cout << fixed << setprecision(6) << r << '\n';
        }
        else{
            if((y3-y2)/(x3-x2)==(y3-y1)/(x3-x1)){
                r1=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))/2;
                r2=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/2;
                r3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))/2;
                if(r1>=r3&&r1>=r2){
                    cout << fixed << setprecision(6) <<(x1+x3)/2 << " " << (y1+y3)/2 << " " ;
                    cout << fixed << setprecision(6) << r1 << '\n';
                }
                else if(r2>=r3&&r2>=r1){
                    cout << fixed << setprecision(6) <<(x1+x2)/2 << " " << (y1+y2)/2 << " " ;
                    cout << fixed << setprecision(6) << r2 << '\n';
                }
                else if(r3>=r1&&r3>=r2){
                    cout << fixed << setprecision(6) <<(x2+x3)/2 << " " << (y2+y3)/2 << " " ;
                    cout << fixed << setprecision(6) << r3 << '\n';
                }
            }
            else{
                r1=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))/2;
                r2=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/2;
                r3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3))/2;
                if(r1*r1>r2*r2+r3*r3){
                    cout << fixed << setprecision(6) <<(x1+x3)/2 << " " << (y1+y3)/2 << " " ;
                    cout << fixed << setprecision(6) << r1 << '\n';
                }
                else if(r2*r2>r1*r1+r3*r3){
                    cout << fixed << setprecision(6) <<(x1+x2)/2 << " " << (y1+y2)/2 << " " ;
                    cout << fixed << setprecision(6) << r2 << '\n';
                }
                else if(r3*r3>r1*r1+r2*r2){
                    cout << fixed << setprecision(6) <<(x2+x3)/2 << " " << (y2+y3)/2 << " " ;
                    cout << fixed << setprecision(6) << r3 << '\n';
                }
                else{
                    m=(x1*x1-x2*x2)/2+(y1*y1-y2*y2)/2;
                    n=(x1*x1-x3*x3)/2+(y1*y1-y3*y3)/2;
                    x=(m*(y1-y3)-n*(y1-y2))/((x1-x2)*(y1-y3)-(x1-x3)*(y1-y2));
                    y=(n*(x1-x2)-m*(x1-x3))/((x1-x2)*(y1-y3)-(x1-x3)*(y1-y2));
                    cout << fixed << setprecision(6) <<x << " " << y << " ";
                    r=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
                    cout << fixed << setprecision(6) << r << '\n';
                }
            }
        }
    }


    return 0;
}

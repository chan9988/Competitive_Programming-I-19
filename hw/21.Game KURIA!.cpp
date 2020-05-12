#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string s1,s2;
long long n,m;
long long x,y,z;

int f(long long *a,long long x1,long long y1,bool *ch){
    if(ch[x1*n+y1]==true){
//        cout << "f(" << x1 << "," << y1 << ")=" << a[x1*y+y1] << endl;
        return a[x1*n+y1];
    }
    else{
        if(x1==0){
            a[y1]=y1*x;
//            cout << "f(" << x1 << "," << y1 << ")=" << a[y1] << endl;
            ch[y1]=true;
            return a[y1];
        }
        else if(y1==0){
            a[x1*n]=x1*y;
//            cout << "f(" << x1 << "," << y1 << ")=" << a[x1*n] << endl;
//            ch[x1*n]=true;
            return a[x1*n];
        }
        else{
            ch[x1*n+y1]=true;
            long long m1,m2,m3;
            m1=f(a,x1-1,y1,ch)+y;
            m2=f(a,x1,y1-1,ch)+x;
            if(s2[x1-1]==s1[y1-1]){
                m3=f(a,x1-1,y1-1,ch);
            }
            else{
                m3=f(a,x1-1,y1-1,ch)+z;
            }
            if(m1<=m2&&m1<=m3){
                a[x1*n+y1]=m1;
//                cout << m1 << " " << m2 << " " << m3 << endl;
//                cout << "f(" << x1 << "," << y1 << ")=" << m1 << endl;
                return m1;
            }
            else if(m2<=m1&&m2<=m3){
//                cout << m1 << " " << m2 << " " << m3 << endl;
//                cout << "f(" << x1 << "," << y1 << ")=" << m2 << endl;
                a[x1*n+y1]=m2;
                return m2;
            }
            else if(m3<=m1&&m3<=m2){
                a[x1*n+y1]=m3;
//                cout << m1 << " " << m2 << " " << m3 << endl;
//                cout << "f(" << x1 << "," << y1 << ")=" << m3 << endl;
                return m3;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        cin >> n >> m >> x >> y >> z;
        cin >> s1 >> s2;
        n++;
        m++;
        long long a[(m)*(n)]={0};
        bool ch[(m)*(n)]={false};
        cout << f(a,m-1,n-1,ch) << '\n';
    }
    return 0;
}

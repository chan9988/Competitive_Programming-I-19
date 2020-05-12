#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int p,k,n,t;
    cin >> p;
    int i;
    while(p--){
        vector<int> a,b;
        cin >> k >> n;
        for(i=0;i<n;i++){
            cin >> t;
            a.push_back(t);
        }
        int c=0,m,m1;
        m=a[a.size()-1];
        b.push_back(m);
        m1=a[a.size()-1];
        for(i=a.size()-2;i>=0;i--){
            if(a[i]>m){
                c++;
                if(a[i]<m1){
                    m1=a[i];
                }
            }
            if(a[i]<m){
                m=a[i];
                b.push_back(a[i]);
            }
        }
        for(i=0;i<b.size();i++){
            if(b[i]>m1){
                c++;
            }
            else{
                break;
            }
        }
        cout << k << " " << c << endl;
    }
    return 0;
}

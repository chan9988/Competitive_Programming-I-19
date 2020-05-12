#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,t;
    int i,j;
    cin >> n;
    char c;
    vector<int> a;
    a.reserve(200020);
    int l=-1,r=0;
    for(i=0;i<n;i++){
        cin >> c >> m;
        if(c=='R'){
            a[m]=r;
            r++;
        }
        else if(c=='L'){
            a[m]=l;
            l--;
        }
        else if(c=='?'){
            t=a[m]-l-1;
            if(t>r-a[m]-1){
                t=r-a[m]-1;
            }
            cout << t << '\n';
        }
    }

    return 0;
}

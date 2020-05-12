#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,m;
    cin >> n >> k;
    vector<int> a;
    a.reserve(n);
    int i,j;
    for(i=0;i<n;i++){
        cin >> m;
        a.push_back(m);
    }
    int c=0;
    for(i=0;i<k;i++){
        if(next_permutation(a.begin(),a.end())==true){
            c=1;
            for(j=0;j<a.size();j++){
                cout << a[j] << " ";
            }
            cout << '\n';
        }
        else if(c==0){
            cout << "hello world!" << '\n';
            break;
        }
        else{
            break;
        }
    }
    return 0;
}

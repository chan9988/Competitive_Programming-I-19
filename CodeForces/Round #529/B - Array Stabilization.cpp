#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> a;
    int n,m;
    cin >> n;
    int i;
    for(i=0;i<n;i++){
        cin >> m ;
        a.push_back(m);
    }
    stable_sort(a.begin(),a.end());
    int b1,b2;
    b1=a.back()-a[1];
    a.pop_back();
    b2=a.back()-a[0];
    if(b1>b2){
        cout << b2 << endl;
    }
    else{
        cout << b1 << endl;
    }
    return 0;
}
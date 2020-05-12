#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> list;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    int i;
    vector<int> a;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> m;
        a.push_back(m);
    }
    stable_sort(a.begin(),a.end());
    int sum=0;
    for(i=0;i<a.size()-1;i=i+2){
        m=a[i+1];
        sum+=m-a[i];
    }
    cout << sum << endl;
    return 0;
}

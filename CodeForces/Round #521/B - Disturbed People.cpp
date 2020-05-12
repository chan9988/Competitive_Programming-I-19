#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a;
    int m,c=0;
    int i;
    for(i=0;i<n;i++){
        cin >> m;
        a.push_back(m);
    }
    for(i=0;i<a.size()-2;i++){
        if(a[i]==1&&a[i+1]==0&&a[i+2]==1){
            a[i+2]=0;
            c++;
        }
    }
    cout << c << endl;
    return 0;
}

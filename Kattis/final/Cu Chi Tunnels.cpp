#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,t;
    cin >> n;
    int i;
    vector<int> a;
    int c=0;
    for(i=0;i<n;i++){
        cin >> t;
        if(t<0){
            cout << "NO";
            return 0;
        }
        a.push_back(t);
    }
    for(i=0;i<a.size();i++){
        if(i==0){
            c+=a[i];
        }
        else if(a[i]>2){
            c+=a[i]-2;
        }
        else if(a[i]==1){
            c--;
        }
        if(c==0&&i!=a.size()-1){
            cout << "NO";
            return 0;
        }
    }
    if(c==0){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
    return 0;
}

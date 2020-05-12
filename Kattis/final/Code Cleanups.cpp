#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n;
    cin >> n;
    int i,t;
    vector<int> a;
    for(i=0;i<n;i++){
        cin >> t;
        a.push_back(t);
    }
    reverse(a.begin(),a.end());
    int c=0;
    int sum=0;
    int m=0;
    for(i=1;i<=400;i++){
        if(i==a.back()){
            c++;
            a.pop_back();
        }
        sum+=c;
        if(sum>=20){
            sum=0;
            c=0;
            m++;
        }
    }
    cout << m ;
    return 0;
}



#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,m;
    int i,j,t=0,c,d=0;
    vector<int> a;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> m ;
        a.push_back(m);
    }
    stable_sort(a.begin(),a.end());
    for(i=0;i<a.size();i++){
        c=1;
        if(d==1){
            break;
        }
        if(i==0||a[i]!=a[i-1]){
            for(j=i+1;j<a.size();j++){
                if(a[j]-5<=a[i]){
                    c++;
                    if(j==a.size()-1){
                        d=1;
                    }
                }
                else{
                    break;
                }
            }
            if(t<c){
                t=c;
            }
        }
    }
    cout << t << endl;
    return 0;
}

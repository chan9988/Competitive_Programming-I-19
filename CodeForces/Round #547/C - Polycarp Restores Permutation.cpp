#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,m;
    int i;
    cin >> n ;
    vector<int> a;
    for(i=0;i<n-1;i++){
        cin >> m ;
        a.push_back(m);
    }
    for(i=1;i<a.size();i++){
        a[i]+=a[i-1];
        if(a[i]>n+10){
            cout << -1 << endl;
            return 0;
        }
        if(a[i]<-1*n-10){
            cout << -1 <<endl;
            return 0;
        }
    }
    int b=0;
    for(i=0;i<a.size();i++){
        if(b>a[i]){
            b=a[i];
        }
    }
    for(i=0;i<a.size();i++){
        a[i]-=b;
    }
    a.insert(a.begin(),-1*b);
    bool c[n]={false};
    for(i=0;i<a.size();i++){
        c[a[i]]=true;
    }
    for(i=0;i<n;i++){
        if(c[i]==false){
            cout << -1 <<endl;
            return 0;
        }
    }
    for(i=0;i<a.size();i++){
        cout << a[i]+1 << " ";
    }
    cout << endl;
    return 0;
}

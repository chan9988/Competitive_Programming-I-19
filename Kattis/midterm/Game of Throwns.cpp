#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,k;
    int i;
    cin >> n >> k;
    string s;
    int l=1,c,t;
    vector<int> a;
    a.push_back(0);
    for(i=0;i<k;i++){
        cin >> s;
        if(s=="undo"){
            cin >> s;
            sscanf(s.c_str(),"%d",&c);
            for(t=0;t<c;t++){
                a.pop_back();
            }
        }
        else{
            sscanf(s.c_str(),"%d",&c);
            t=a.back()+c;
            t%=n;
            a.push_back(t);
        }
    }
    if(a.back()<0){
        a.back()+=n;
    }
    cout << a.back() << endl;

    return 0;
}

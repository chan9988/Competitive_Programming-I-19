#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    int i;
    cin >> n ;
    vector<int> a;
    for(i=0;i<n;i++){
        cin >> m;
        a.push_back(m);
    }
    stable_sort(a.begin(),a.end());
    m=a.back();
    a.pop_back();
    int rem=m;
    for(i=a.size()-1;i>=0;i--){
        if(m%a[i]!=0){
            cout << m << " " << a[i] << endl;
            return 0;
        }
        else{
            if(a[i]==rem){
                cout <<  m << " " << a[i] << endl;
                return 0;
            }
            else{
                rem=a[i];
            }
        }
    }


    return 0;
}


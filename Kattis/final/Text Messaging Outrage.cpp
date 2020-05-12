#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int T;
    cin >> T;
    int c=0;
    while(T--){
        int p,k,l,t;
        cin >> p >> k >> l;
        int i,j;
        long long sum=0;
        vector<int> a;
        for(i=0;i<l;i++){
            cin >> t;
            a.push_back(t);
        }
        stable_sort(a.begin(),a.end());
         j=a.size()-1;
        for(i=0;i<a.size();i++){
            sum+=(i/k+1)*a[j];
            j--;
        }
        c++;
        cout << "Case #" << c <<": " << sum << endl;
    }
    return 0;
}

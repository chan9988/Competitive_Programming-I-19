#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n,i,m;
    int c=0;
    int sum1=0,sum2=0;
    cin >> n;
    vector<int> even,odd;
    for(i=1;i<n+1;i++){
        cin >> m;
        if(i==1){
            odd.push_back(m);
        }
        else if(i==2){
            even.push_back(m);
        }
        else if(i%2==1){
            m+=odd.back();
            odd.push_back(m);
        }
        else if(i%2==0){
            m+=even.back();
            even.push_back(m);
        }
        if(n==1){
            even.push_back(0);
        }
    }
    for(i=0;i<n;i++){
        if(i==0){
            sum1=odd.back()-odd[0];
            sum2=even.back();
        }
        else if(i==1){
            sum1=even.back()-even[0]+odd[0];
            sum2=odd.back()-odd[0];
        }
        else if(i%2==1){
            sum1=even.back()-even[i/2]+odd[i/2];
            sum2=odd.back()-odd[i/2]+even[i/2-1];
        }
        else if(i%2==0){
            sum1=odd.back()-odd[i/2]+even[i/2-1];
            sum2=even.back()-even[i/2-1]+odd[i/2-1];
        }
        if(sum1==sum2){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}

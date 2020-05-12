#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n1,n2;
    int i,j;
    int k,m;
    int a1[100005]={0};
    int b1[100005]={0};
    bitset<100005> a,b;
    a.reset();
    a[0]=true;
    cin >> n1;
    for(i=0;i<n1;i++){
        cin >> k;
        for(j=a.size()-1;j>=0;j--){
            if(a[j]==true){
                if(a1[j+k]==0){
                    a1[j+k]=a1[j]+1;
                }
                else if(a1[j+k]>a1[j]+1){
                    a1[j+k]=a1[j]+1;
                }
            }
        }
        a=a|(a<<k);
    }
    b.reset();
    b[0]=true;
    cin >> n2;
    for(i=0;i<n2;i++){
        cin >> k;
        for(j=b.size()-1;j>=0;j--){
            if(b[j]==true){
                if(b1[j+k]==0){
                    b1[j+k]=b1[j]+1;
                }
                else if(b1[j+k]>b1[j]+1){
                    b1[j+k]=b1[j]+1;
                }
            }
        }
        b=b|(b<<k);
    }
    m=1000;
    int ans;
    for(i=1;i<a.size();i++){
        if(a[i]==true&&b[i]==true){
            ans=a1[i]+b1[i];
            if(ans<m){
                m=ans;
            }
        }
    }
    if(m==1000){
        cout << "impossible";
    }
    else{
        cout << m ;
    }
    return 0;
}

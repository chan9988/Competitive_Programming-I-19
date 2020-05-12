#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    int i;
    long long *a;
    a=new long long[n];
    long long m=0;
    long long ans1,ans2,c,now,num;
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>m){
            m=a[i];
        }
    }
    ans1=m-1;
    ans2=m*n;
    while(ans1<ans2-1){
        c=0;
        num=0;
        m=0;
        now=(ans1+ans2)/2;
        for(i=0;i<n;i++){
            if(a[i]>m){
                m=a[i];
                num++;
                if(num*m<=now){

                }
                else{
                    m=a[i];
                    num=1;
                    c++;
                    if(i==n-1){
                        if(a[i]>now){
                            c++;
                        }
                    }
                }
            }
            else{
                num++;
                if(num*m<=now){

                }
                else{
                    m=a[i];
                    num=1;
                    c++;
                    if(i==n-1){
                        if(a[i]>now){
                            c++;
                        }
                    }
                }
            }
        }
/*
        cout << ans1 << endl;
        cout << ans2 << endl;
*/
        c++;
        if(c<=k){
            ans2=now;
        }
        else{
            ans1=now;
        }
    }
    cout << ans2 << '\n';

    return 0;
}


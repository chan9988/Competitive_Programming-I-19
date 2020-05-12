#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,k,i,j,k1,y,ans,ans1,ans2,now;
    cin >> t;
    long long x;
    while(t--){
        cin >> k >> x;
        int a[k+1]={0};
        int s[k+1]={0};
        for(i=1;i<=k;i++){
            a[i]=1;
            for(j=i;j<=k;j+=(j&-j)){
                s[j]+=1;
            }
        }
        while(x--){
            cin >> k1 >> y;
            if(k1==1){
                if(a[y]>0){
                    a[y]++;
                    for(j=y;j<=k;j+=(j&-j)){
                        s[j]+=1;
                    }
                }
            }
            else if(k1==2){
                int m;
                if(a[y]>1){
                    m=a[y]-1;
                    a[y]=1;
                    for(j=y;j<=k;j+=(j&-j)){
                        s[j]+=(-1*m);
                    }
                }
            }
            else if(k1==3){
                ans1=0;
                ans2=k;
                while(ans1<ans2-1){
                    now=(ans1+ans2)/2;
                    ans=0;
                    for(i=now;i>0;i-=i&(-i)){
                        ans+=s[i];
                    }
                    if(ans<y){
                        ans1=now;
                    }
                    else{
                        ans2=now;
                    }
                }
                ans=0;
                for(i=ans2;i>0;i-=i&(-i)){
                    ans+=s[i];
                }
                if(ans>=y){
                    cout << ans2 << '\n';
                    a[ans2]--;
                    for(j=ans2;j<=k;j+=(j&-j)){
                        s[j]+=(-1);
                    }
                }
                else{
                    cout << "endro~!" << '\n';
                }
            }
        }
    }
    return 0;
}



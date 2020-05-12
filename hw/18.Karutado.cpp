#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> a[20];
vector<int>::iterator it,it1;

int find_divisor(int a1,int b1){
    int m,n,t;
    if(a1>b1){
        m=a1;
        n=b1;
    }
    else{
        m=b1;
        n=a1;
    }
    while(n>0){
        t=m%n;
        m=n;
        n=t;
    }
    return m;
}

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int n,n1,q;
    int i,j,k;
    int c=0,m,th,v;
    int now,ans,tr;
    bool ch;
    while(t--){
        cin >> n >> q;
        n1=n;
        if(n==1){
            c=1;
        }
        else{
            c=0;
            n-=1;
            while(n>0){
                c++;
                n/=2;
            }
        }
        for(i=0;i<n1;i++){
            a[0].push_back(1);
        }
        for(i=1;i<=c;i++){
            it=a[i-1].begin();
            while(it!=a[i-1].end()){
                it1=it;
                it++;
                if(it==a[i-1].end()){
                    break;
                }
                else{
                    a[i].push_back(find_divisor(*it1,*it));
                }
                it++;
            }
        }
        while(q--){
            cin >> m >> th >> v;
            if(m==1){
                th--;
                for(i=0;i<=c;i++){
                    if(i==0){
                        a[0][th]=v;
                    }
                    else{
                        if(th%2==0){
                            it=a[i-1].begin()+th;
                            it++;
                            if(it==a[i-1].end()){
                                break;
                            }
                            a[i][th/2]=find_divisor(a[i-1][th],a[i-1][th+1]);
                            th/=2;
                        }
                        else if(th%2==1){
                            a[i][th/2]=find_divisor(a[i-1][th-1],a[i-1][th]);
                            th/=2;
                        }
                    }
                }
            }
            else if(m==2){
                if(a[0][th-1]<=v){
                    cout << th << '\n';
                }
                else{
                    th--;
                    now=a[0][th];
                    i=0;
                    ch=true;
                    while(ch){
                        if(th%2==0){
                            i++;
                            th/=2;
                            if(th>=a[i].size()){
                                i--;
                                th*=2;
                                ch=false;
                            }
                            else{
                                tr=find_divisor(a[i][th],now);
                                if(tr<=v){
                                    i--;
                                    th*=2;
                                    now=find_divisor(now,a[i][th]);
                                    th++;
                                    ch=false;
                                }
                            }
                        }
                        else{
                            now=find_divisor(a[i][th],now);
                            th++;
                            if(th>=a[i].size()){
                                th--;
                                ch=false;
                            }
                            else{
                                tr=find_divisor(a[i][th],now);
                                if(tr<=v){
                                    ch=false;
                                }
                            }
                        }
                    }

                    while(i>0){
                        tr=find_divisor(a[i][th],now);
                        if(tr<=v){
                            i--;
                            th*=2;
                        }
                        else{
                            now=tr;
                            ch=true;
                            while(ch&&i>0){
                                th++;
                                if(th<a[i].size()){
                                    break;
                                }
                                else{
                                    th--;
                                    i--;
                                    th=2*th+1;
                                    break;
                                }
                            }
                        }
                    }
                    if(find_divisor(a[i][th],now)>v){
                        now=find_divisor(a[i][th],now);
                        if(th+1>=a[i].size()){
                            cout << "DOYA!" << '\n';
                        }
                        else if(find_divisor(a[i][th+1],now)>v){
                            cout << "DOYA!" << '\n';
                        }
                        else{
                            cout << th+2 << '\n';
                        }
                    }
                    else{
                        th--;
                        if(find_divisor(a[i][th],now)>v){
                            th++;
                            cout << th+1 << '\n';
                        }
                        else{
                            cout << th+1 << '\n';
                        }
                    }
                }

            }
        }
        for(i=0;i<=c;i++){
            a[i].clear();
        }
    }
    return 0;
}

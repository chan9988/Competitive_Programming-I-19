#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    int n,m;
    cin >> n ;
    map<int,int> a;
    map<int,int>::iterator it,it1;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> m;
            it=a.find(m);
            if(it==a.end()){
                a[m]=1;
            }
            else{
                a[m]++;
            }
        }
    }
    int c=0,c1=0;
    if(n==1){
        cout << "YES" << endl;
        cout << m << endl;
    }
    else if(n%2==0){
        for(it=a.begin();it!=a.end();it++){
            if(it->second%4!=0){
                cout << "NO" << endl;
                return 0;
            }
        }
        vector<int> s[n/2];
        it=a.begin();
        for(i=0;i<n/2;i++){
            for(j=0;j<n/2;j++){
                s[i].push_back((it->first));
                it->second-=4;
                if(it->second==0){
                    it++;
                }
            }
        }
        cout << "YES" << endl;
        for(i=0;i<n/2;i++){
            for(j=0;j<s[i].size();j++){
                cout << s[i][j] << " ";
            }
            for(j=s[i].size()-1;j>=0;j--){
                cout << s[i][j] << " ";
            }
            cout << endl;
        }
        for(i=n/2-1;i>=0;i--){
            for(j=0;j<s[i].size();j++){
                cout << s[i][j] << " ";
            }
            for(j=s[i].size()-1;j>=0;j--){
                cout << s[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        int center;
        vector<int> s[n/2],col,row;
        for(it=a.begin();it!=a.end();it++){
            if(it->second%4==0){

            }
            else if(it->second%2!=0){
                center=it->first;
                it->second--;
                if(it->second%4!=0){
                    c1++;
                }
                c++;
                if(c>1){
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else{
                c1++;
            }

        }
        if(c==0||c1%2!=0||c1>=n){
            cout << "NO" <<endl;
            return 0;
        }
        it=a.begin();
        for(i=0;i<n/2;i++){
            for(j=0;j<n/2;j++){
                while(it->second<4){
                    it++;
                }
                s[i].push_back((it->first));
                it->second-=4;
            }
        }
        for(it=a.begin();it!=a.end();){
            if(it->second>=4&&it->second!=0){
                col.push_back(it->first);
                row.push_back(it->first);
                it->second-=4;
            }
            else{
                it++;
            }
        }
        for(it=a.begin();it!=a.end();it++){
            if(col.size()<n/2&&it->second!=0){
                col.push_back(it->first);
            }
            else if(it->second!=0){
                row.push_back(it->first);
            }
        }
        cout << "YES" << endl;
        for(i=0;i<n/2;i++){
            for(j=0;j<s[i].size();j++){
                cout << s[i][j] << " ";
            }
            cout << col[i] << " ";
            for(j=s[i].size()-1;j>=0;j--){
                cout << s[i][j] << " ";
            }
            cout << endl;
        }
        for(i=0;i<row.size();i++){
            cout << row[i] << " ";
        }
        cout  << center << " ";
        for(i=row.size()-1;i>=0;i--){
            cout << row[i] << " ";
        }
        cout << endl;
        for(i=n/2-1;i>=0;i--){
            for(j=0;j<s[i].size();j++){
                cout << s[i][j] << " ";
            }
            cout << col[i] << " ";
            for(j=s[i].size()-1;j>=0;j--){
                cout << s[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}


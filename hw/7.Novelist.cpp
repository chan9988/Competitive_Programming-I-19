#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string c,c1;
    long long int i;
    map<string,long long int> a;
    map<string,long long int>::iterator it;
    vector<string> b;
    while(cin >> c1){
        for(i=0;i<c1.size();i++){
            if((c1[i]>='a'&&c1[i]<='z')||(c1[i]>='A'&&c1[i]<='Z'))
            c+=c1[i];
        }
        if(c.empty()==false){
            for(i=0;i<c.size();i++){
                c[i]=tolower(c[i]);
            }
            it=a.find(c);
            if(it==a.end()){
                a[c]=1;
                b.push_back(c);
            }
            else{
                it->second++;
            }
        }
        c.clear();
    }
    for(i=0;i<b.size();i++){
        cout << b[i] << " ";
        cout << a[b[i]] << '\n';
    }

    return 0;
}

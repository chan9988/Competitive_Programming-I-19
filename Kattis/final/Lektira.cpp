#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    string s;
    cin >> s ;
    reverse(s.begin(),s.end());
    string s1,s2,ans;
    int i;
    i=s.size()-1;
    s1=s[s.size()-1];
    s2=s1;
    while(i>2){
        i--;
        s2=s[i]+s2;
        if(s2<s1){
            s1=s2;
        }
    }
    ans=s1;
    s.erase(s.end()-s1.size(),s.end());
    i=s.size()-1;
    s1=s[s.size()-1];
    s2=s1;
    while(i>1){
        i--;
        s2=s[i]+s2;
        if(s2<s1){
            s1=s2;
        }
    }
    ans+=s1;
    s.erase(s.end()-s1.size(),s.end());
    ans+=s;
    cout << ans;
    return 0;
}



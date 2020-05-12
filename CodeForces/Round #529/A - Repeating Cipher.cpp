#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<char> s1,s2;
    char ch;
    int n;
    int i;
    cin >> n ;
    for(i=0;i<n;i++){
        cin >> ch;
        s1.push_back(ch);
    }
    for(i=1;i<=sqrt(n*2);i++){
        ch=s1[i*(i+1)/2-1];
        s2.push_back(ch);
    }
    for(i=0;i<s2.size();i++){
        cout << s2[i];
    }
    cout << endl;
    return 0;
}


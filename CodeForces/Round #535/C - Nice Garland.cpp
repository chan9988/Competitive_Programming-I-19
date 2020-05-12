#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<char> s;
    char ch;
    int n;
    int i;
    cin >> n ;
    for(i=0;i<n;i++){
        cin >> ch;
        s.push_back(ch);
    }
    int m=n,t=0;
    int c=0;
    for(i=0;i<s.size();i++){
        if(i%3==0){
            if(s[i]!='R'){
                c++;
            }
        }
        else if(i%3==1){
            if(s[i]!='B'){
                c++;
            }
        }
        else{
            if(s[i]!='G'){
                c++;
            }
        }
    }
    if(c<m){
        m=c;
        t=1;
    }
    c=0;
    for(i=0;i<s.size();i++){
        if(i%3==0){
            if(s[i]!='R'){
                c++;
            }
        }
        else if(i%3==1){
            if(s[i]!='G'){
                c++;
            }
        }
        else{
            if(s[i]!='B'){
                c++;
            }
        }
    }
    if(c<m){
        m=c;
        t=2;
    }
    c=0;
    for(i=0;i<s.size();i++){
        if(i%3==0){
            if(s[i]!='G'){
                c++;
            }
        }
        else if(i%3==1){
            if(s[i]!='R'){
                c++;
            }
        }
        else{
            if(s[i]!='B'){
                c++;
            }
        }
    }
    if(c<m){
        m=c;
        t=3;
    }
    c=0;
    for(i=0;i<s.size();i++){
        if(i%3==0){
            if(s[i]!='G'){
                c++;
            }
        }
        else if(i%3==1){
            if(s[i]!='B'){
                c++;
            }
        }
        else{
            if(s[i]!='R'){
                c++;
            }
        }
    }
    if(c<m){
        m=c;
        t=4;
    }
    c=0;
    for(i=0;i<s.size();i++){
        if(i%3==0){
            if(s[i]!='B'){
                c++;
            }
        }
        else if(i%3==1){
            if(s[i]!='G'){
                c++;
            }
        }
        else{
            if(s[i]!='R'){
                c++;
            }
        }
    }
    if(c<m){
        m=c;
        t=5;
    }
    c=0;
    for(i=0;i<s.size();i++){
        if(i%3==0){
            if(s[i]!='B'){
                c++;
            }
        }
        else if(i%3==1){
            if(s[i]!='R'){
                c++;
            }
        }
        else{
            if(s[i]!='G'){
                c++;
            }
        }
    }
    if(c<m){
        m=c;
        t=6;
    }
    if(t==0){
        cout << 0 << endl;
        for(i=0;i<s.size();i++){
            cout << s[i];
        }
        cout << endl;
    }
    else if(t==1){
        cout << m << endl;
        for(i=0;i<s.size();i++){
            if(i%3==0){
                cout << 'R';
            }
            else if(i%3==1){
                cout << 'B';
            }
            else{
                cout << 'G';
            }
        }
        cout << endl;
    }
    else if(t==2){
        cout << m << endl;
        for(i=0;i<s.size();i++){
            if(i%3==0){
                cout << 'R';
            }
            else if(i%3==1){
                cout << 'G';
            }
            else{
                cout << 'B';
            }
        }
        cout << endl;
    }
    else if(t==3){
        cout << m << endl;
        for(i=0;i<s.size();i++){
            if(i%3==0){
                cout << 'G';
            }
            else if(i%3==1){
                cout << 'R';
            }
            else{
                cout << 'B';
            }
        }
        cout << endl;
    }
    else if(t==4){
        cout << m << endl;
        for(i=0;i<s.size();i++){
            if(i%3==0){
                cout << 'G';
            }
            else if(i%3==1){
                cout << 'B';
            }
            else{
                cout << 'R';
            }
        }
        cout << endl;
    }
    else if(t==5){
        cout << m << endl;
        for(i=0;i<s.size();i++){
            if(i%3==0){
                cout << 'B';
            }
            else if(i%3==1){
                cout << 'G';
            }
            else{
                cout << 'R';
            }
        }
        cout << endl;
    }
    else if(t==6){
        cout << m << endl;
        for(i=0;i<s.size();i++){
            if(i%3==0){
                cout << 'B';
            }
            else if(i%3==1){
                cout << 'R';
            }
            else{
                cout << 'G';
            }
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int **a;
bool **ch;
string s1,s2;

int LCD(int x,int y){
    if(ch[x][y]==true){
        return a[x][y];
    }
    else{
        ch[x][y]=true;
        if(x==0||y==0){
            a[x][y]=0;
            return 0;
        }
        else if(s1[x-1]==s2[y-1]){
            a[x][y]=LCD(x-1,y-1)+1;
            return a[x][y];
        }
        else{
            int m1,m2;
            m1=LCD(x-1,y);
            m2=LCD(x,y-1);
            if(m1>=m2){
                a[x][y]=m1;
            }
            else{
                a[x][y]=m2;
            }
            return a[x][y];
        }
    }
}

string f_LCD(int x,int y){
    string s;
    while(a[x][y]!=0){
        if(s1[x-1]==s2[y-1]){
            s+=s1[x-1];
            x--;
            y--;
        }
        else{
            int m1,m2;
            m1=a[x-1][y];
            m2=a[x][y-1];
            if(m1>=m2){
                x--;
            }
            else{
                y--;
            }
        }
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    cin >> s1 >> s2;
    int n1,n2;
    int i,j;
    n1=s1.size();
    n2=s2.size();
    a=new int*[n1+1];
    ch=new bool*[n1+1];
    for(i=0;i<n1+1;i++){
        a[i]=new int[n2+1];
        ch[i]=new bool[n2+1];
    }
    for(i=0;i<n1+1;i++){
        for(j=0;j<n2+1;j++){
            ch[i][j]=false;
        }
    }
    cout << LCD(n1,n2) << endl;
    cout << f_LCD(n1,n2) << endl;
    return 0;
}

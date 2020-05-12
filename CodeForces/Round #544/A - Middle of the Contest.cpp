#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    int n1,m1,a;
    int n2,m2,b;
    scanf("%d:%d",&n1,&m1);
    scanf("%d:%d",&n2,&m2);
    a=n1*60+m1;
    b=n2*60+m2;
    a=(a+b)/2;
    n1=a/60;
    m1=a%60;
    printf("%02d:%02d\n",n1,m1);
    return 0;
}

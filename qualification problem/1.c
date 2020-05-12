#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int n,m,t;
    scanf("%d%d",&n,&m);
    if(n<0){
        n=-n;
    }
    if(m<0){
        m=-m;
    }
    if(n>m){
        t=m;
        m=n;
        n=t;
    }
    if(n==0){
        printf("%d",m);
        return 0;
    }
    while(n>0){
        t=m%n;
        m=n;
        n=t;
    }
    printf("%d",m);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100

int minus(char t[],int m){
    int p=0,i=1;
    t[0]=t[0]-1;
    if(t[0]<'0'){
        t[0]+=10;
        p=1;
        while(p!=0){
            t[i]=t[i]-1;
            if(t[i]<'0'){
                t[i]+=10;
                p=1;
                i++;
            }
            else{
                p=0;
            }
        }
    }
    if(t[m-1]=='0'){
        return m-1;
    }
    else{
        return m;
    }
}

int main(int argc,char *argv[]){
    char t[MAX],t1[MAX];
    int m,i,j;
    scanf("%s",&t);
    m=strlen(t);
    for(i=m-1,j=0;i>=0;i--,j++){
        t1[j]=t[i];
    }
    if(m==1&&t1[0]=='0'){
        m--;
    }
    while(m!=0||t1[0]!='0'){
        int n;
        long long l,r;
        long long b;
        scanf("%d%lld%lld",&n,&l,&r);
        if(n==0){
            printf("%lld\n",l);
        }
        else if(n<=r-l){
            bool *a=calloc(n,sizeof(bool));
            for(i=0;i<n;i++){
                a[n]=false;
            }
            for(i=0;i<n;i++){
                scanf("%lld",&b);
                if(b-l>=0&&b-l<n){
                    a[b-l]=true;
                }
            }
            int c=0;
            for(i=0;i<n;i++){
                if(a[i]==false){
                    printf("%lld\n",l+(long long)i);
                    c=1;
                    break;
                }
            }
            if(c==0){
                printf("%lld\n",l+(long long)n);
            }
        }
        else{
            bool *a=calloc(r-l+1,sizeof(bool));
            for(i=0;i<r-l+1;i++){
                a[i]=false;
            }
            for(i=0;i<n;i++){
                scanf("%lld",&b);
                if(r-b>=0&&b>=l){
                    a[b-l]=true;
                }
            }
            int c=0;
            for(i=0;i<r-l+1;i++){
                if(a[i]==false){
                    printf("%lld\n",l+(long long)i);
                    c=1;
                    break;
                }
            }
            if(c==0){
                printf("^v^\n");
            }
        }
        m=minus(t1,m);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int n,m=-1024,sum;
    scanf("%d",&n);
    int i,j,a[n],k;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    j=0;
    while(i!=n){
        sum=0;
        for(k=i;k<=j;k++){
            sum+=a[k];
        }
        if(sum>m){
            m=sum;
        }
        if(j<n-1){
            j++;
        }
        else{
            i++;
            j=i;
        }
    }
    printf("%d",m);
    return 0;
}

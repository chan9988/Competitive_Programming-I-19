#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int n,q,i,j;
    scanf("%d%d",&n,&q);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++){
        int l,r,k,m;
        scanf("%d%d%d",&l,&r,&k);
        int b[r-l+1];
        for(j=l;j<=r;j++){
            b[j-l]=a[j-1];
        }
        for(m=0;m<r-l+1;m++){
            for(j=m;j<r-l+1;j++){
                if(b[m]>b[j]){
                    int t;
                    t=b[m];
                    b[m]=b[j];
                    b[j]=t;
                }
            }
        }
        printf("%d\n",b[k-1]);
    }
    return 0;
}

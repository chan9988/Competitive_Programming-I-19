#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX1 10000000

int add(long long a[],long long b[],int n){
    int i,p=0;
    for(i=0;i<n;i++){
        a[i]=a[i]+b[i]+p;
        if(a[i]>=100000000){
            p=a[i]/100000000;
            a[i]%=100000000;
        }
        else{
            p=0;
        }
    }
    while(p!=0){
        a[i]=a[i]+p;
        if(a[i]>=100000000){
            p=a[i]/100000000;
            a[i]=a[i]%100000000;
        }
        else{
            p=0;
        }
        i++;
        if(i==26){
            break;
        }
    }
    return i;
}

int product(long long a[],long long b[],int n,int m){
    int i,j,k,p;
    int s=1,ss;
    long long a1[26]={0},a2[26]={0};
    for(i=0;i<26;i++){
        a1[i]=a[i];
        a[i]=0;
    }
    for(i=0;i<n;i++){
        p=0;
        if(b[i]!=0){
            for(j=0;j<m;j++){
                a2[j]=(a1[j])*(b[i])+p;
                if(a2[j]>=100000000){
                    p=(a2[j])/100000000;
                    a2[j]=a2[j]%100000000;
                }
                else{
                    p=0;
                }
            }
            if(p!=0){
                a2[j]+=p;
                j++;
            }
            if(a2[j-1]!=0){
                ss=add(a+i,a2,j)+i;
                s=ss>s?ss:s;
            }
            for(k=j-1;k>=0;k--){
                a2[k]=0;
            }
        }
    }
    return s;
}



int main(int argc,char *argv[]){
    char s[MAX1],c[MAX1],a[201];
    while(fgets(s,MAX1,stdin)!=NULL){
        char *tok;
        long long  b[26]={0},sum[26]={0};
        int n=0,i,j=0,k,sl,sll,m,p;
        n=strlen(s);
        for(i=0;i<n;i++){
            if(s[i]=='+'){
                c[j]='1';
                j++;
            }
            else if(s[i]=='*'){
                c[j]='2';
                j++;
            }
            else if(i==n-1){
                s[i]='\n';
                break;
            }
        }
        tok=strtok(s,"+*");
        sscanf(tok,"%s",&a);
        n=strlen(a);
        m=n/8;
        n%=8;
        switch(n){
            case 1: sscanf(a,"%1lld",&b[m]); break;
            case 2: sscanf(a,"%2lld",&b[m]); break;
            case 3: sscanf(a,"%3lld",&b[m]); break;
            case 4: sscanf(a,"%4lld",&b[m]); break;
            case 5: sscanf(a,"%5lld",&b[m]); break;
            case 6: sscanf(a,"%6lld",&b[m]); break;
            case 7: sscanf(a,"%7lld",&b[m]); break;
        }
        k=0;
        for(i=1;i<=m;i++){
            sscanf(a+n+8*k,"%8lld",&b[m-i]);
            k++;
        }
        if(n!=0){
            sl=add(sum,b,m+1);
        }
        else{
            sl=add(sum,b,m);
        }
        tok=strtok(NULL,"+*");
        k=0;
        while(tok){
            sscanf(tok,"%s",a);
            n=strlen(a);
            m=n/8;
            n%=8;
            switch(n){
                case 1: sscanf(a,"%1lld",&b[m]); break;
                case 2: sscanf(a,"%2lld",&b[m]); break;
                case 3: sscanf(a,"%3lld",&b[m]); break;
                case 4: sscanf(a,"%4lld",&b[m]); break;
                case 5: sscanf(a,"%5lld",&b[m]); break;
                case 6: sscanf(a,"%6lld",&b[m]); break;
                case 7: sscanf(a,"%7lld",&b[m]); break;
            }
            p=0;
            for(i=1;i<=m;i++){
                sscanf(a+n+8*p,"%8lld",&b[m-i]);
                p++;
            }
            if(c[k]=='1'){
                if(n!=0){
                    sll=add(sum,b,m+1);
                    sl=sll>sl?sll:sl;
                }
                else{
                    sll=add(sum,b,m);
                    sl=sll>sl?sll:sl;
                }
            }
            else if(c[k]=='2'&&n==1&&m==0&&b[0]==0){
                for(i=0;i<sl;i++){
                    sum[i]=0;
                }
                sl=1;
            }
            else if(c[k]=='2'){
                if(n!=0){
                    sll=product(sum,b,m+1,sl);
                    sl=sll>sl?sll:sl;
                }
                else{
                    sll=product(sum,b,m,sl);
                    sl=sll>sl?sll:sl;
                }
            }
            k++;
            tok=strtok(NULL,"+*");
        }
        printf("%lld",sum[sl-1]);
        for(i=sl-2;i>=0;i--){
            printf("%08lld",sum[i]);
        }
        printf("\n");

    }
    return 0;
}

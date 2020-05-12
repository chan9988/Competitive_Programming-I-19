#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    char c[101];
    int a=0,b=0,i;
    scanf("%s",c);
    for(i=0;c[i]!='\0';i++){
        if(c[i]=='0'){
            a++;
        }
        else{
            b++;
        }
    }
    printf("%d %d",a,b);
    return 0;
}

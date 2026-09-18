#include <stdio.h>

int main(void){
    int m,t,s,num;
    scanf("%d %d %d",&m,&t,&s);
    getchar();
    
    if(t==0){
        num=0;
    }
    else if((s+t-1)/t<=m){
        num=m-(s+t-1)/t;
    }
    else {
        num=0;
    }
   printf("%d\n",num);


    return 0;
}  
#include <stdio.h>

int main(void){

   int x,count=0;
   scanf("%d",&x);
    if (x%2==0){
        count++;
    }
    if(x>4&&x<=12){
        count++;
    }
    // printf(count==2 );
    // printf(count!=0 );
    // printf(count==1 );
    // printf(count==0\n );
    /*printf第一个参数一定是格式字符串*/
    printf("%d %d %d %d\n",count==2,count!=0,count==1,count==0);



    return 0;
}
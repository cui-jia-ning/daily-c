#include <stdio.h>

int main(void){
//     int n,cont;
//     scanf("%d",&n);
//     if(n%4==0){
//          cont=1;
//     }
//    if(n%100==0){
//     cont--;
//    }
//    printf("%d",cont);
/*有问题，应该先把一百拿掉*/
    int n;
    scanf("%d",&n);
    int cont=0;
    if ((n%4==0&&n%100!=0)||n%400==0){
        cont =1;
    }
    printf("%d",cont );

   


    return 0;
}
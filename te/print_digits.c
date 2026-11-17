#include<stdio.h>
int main(){

    int a,a1,b,n = 1;
    scanf("%d",&a);
    a1 = a;

    while(a> 9){
        a /=10;
        n*=10;
    }

    do{
        b = a1/n;
        a1 %= n;
        n /= 10;
        printf("%d",b);

        if(n>0){
            printf(" ");
        }
    }while(n>0);
    printf("\n");
    
    return 0;
}
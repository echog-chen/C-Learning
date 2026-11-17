#include<stdio.h>
int main(){

    int a;
    double c = 0.0;

    scanf("%d",&a);

    for(int b = 1;b<=a ;b++){
        if (b%2 == 0){
            c -= 1.0/b;
        }else{
            c += 1.0/b;
        }
    }
    printf("%f\n",c);

    return 0;
}
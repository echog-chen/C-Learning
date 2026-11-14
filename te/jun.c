#include<stdio.h>
int main(){

    int number;
    int count = 0;
    int sum = 0;

    scanf("%d", &number);
    while(number != -1){
        sum = sum + number;
        count++;
        scanf("%d",&number);
    }printf("%f\n",sum*1.0/count);

    return 0;
}
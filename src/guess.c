#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

srand(time(0));
int number = rand()%100+1;
int count = 0;
int a  =0;

do{
    scanf("%d",&a);
    count++;
    if(a>number){
    }else if(a<number){
        printf("小了\n");
    }
} while(a != number);
    printf("用了%d次,就猜中\n",count);
    return 0;
}
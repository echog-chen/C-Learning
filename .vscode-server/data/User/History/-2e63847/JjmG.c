#include<stdio.h>
int main(){

    const int REDAY = 24;
    int code,count;

    scanf("%d %d",&code,&count);
    if (code == REDAY)
        if(count < 20)
           printf("一切正常\n");
           else
            printf("继续等待\n");

    return 0;
}
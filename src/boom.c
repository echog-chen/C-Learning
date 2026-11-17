#include<stdio.h>
int main(){
    int num = 1;

    while(1){

        int huge_array[1000000];
        huge_array[0] = num;

        printf("我已经吞噬了%d兆内存...\n",num);
        num++;
    }
    return 0;
}
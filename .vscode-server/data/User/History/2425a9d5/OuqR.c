#include <stdio.h>

int main(){
    int a = 0;

    printf("请输入金额(元):");
    scanf("%d", &a);

    int b = 100 - a;
    printf("找您%d元.\n",b);
    return 0;
}
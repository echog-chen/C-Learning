#include <stdio.h>

int main(){
    int amount = 0;
    int a = 0;

    printf("请输入金额(元):");
    scanf("%d", &a);

    printf("请输入票面");
    scanf("%d",& amount);
    int b = 100 - a;
    printf("找您%d元.\n",b);
    return 0;
}
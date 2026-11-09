#include <stdio.h>

int main() {
    // 1. 声明一个字符变量和一个整数变量
    char ch = 'A';
    int num = 66;

    printf("========== 实验 1：用不同的格式符打印字符 ==========\n");
    // 对同一个变量 ch，分别用 %c 和 %d 打印
    printf("变量 ch 是字符 'A'：\n");
    printf("用 %%c 打印出来是：%c\n", ch); 
    printf("用 %%d 打印出来是：%d\n\n", ch); 

    
    printf("========== 实验 2：用不同的格式符打印整数 ==========\n");
    // 对同一个变量 num，分别用 %c 和 %d 打印
    printf("变量 num 是整数 66：\n");
    printf("用 %%d 打印出来是：%d\n", num);
    printf("用 %%c 打印出来是：%c\n\n", num);


    printf("========== 实验 3：字符的算术运算 ==========\n");
    // 我们可以直接对字符进行加减法
    char next_ch = ch + 1; // 'A' 的 ASCII 码加 1 就是 'B'
    printf("字符 'A' 加上 1 变成了：%c\n", next_ch);
    printf("你可以看到，它自动变成了下一个字母！\n");

    return 0;
}
#include <stdio.h>

int main(){
    
    printf("请分别输入身高的英尺和英寸，"
    "如输入\"5 7\"表示5英尺7英寸;");
    
    int a;
    int b;

    scanf("%d %d", &a,&b);
    printf("您的身高是%f.\n",
    ((a + b/12)*0.3048));

    return  0;
}

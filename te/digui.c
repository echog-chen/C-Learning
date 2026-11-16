/*#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int x = 1;

    for(int i = 1;n >= i;i++){
        x *= i;
    }printf("%d\n",x);

    return 0;
}*/

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int x = 1;

    for(int i = n;i >= 1;i--){
        x *=i ;
    }printf("%d\n",x);

    return 0;
}
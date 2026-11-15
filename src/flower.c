#include <stdio.h>
int main(){
    
    int x = 100;
    
    while(x <= 999){

        int bai = x/100;
        int shi = x/10%10;
        int ge = x%10;

        if(x == bai*bai*bai+shi*shi*shi+ge*ge*ge){
        printf("%d\n",x);
        }x++;
    }
    return 0;
}
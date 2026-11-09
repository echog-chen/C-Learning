#include <stdio.h>
int main(){
    
    double price,bill;

    scanf("%lf %lf",&price,&bill);

    if(bill>=price){
        printf("找您%.2f元\n",bill-price);
    }else{
        printf("您的钱不够\n");
    }
    return 0;

}
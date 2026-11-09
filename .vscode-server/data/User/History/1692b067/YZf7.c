#include<stdio.h>
int main(){
    
    int a = 0;
    double b = 0.0;
    
    scanf("%d",&a);
    
    if(a<=150){
        b = b * 0.4463;
    }else if(150<a<=400){
        b = 150*0.4463+(a-150)*0.4663;
    }else{b = 150*0.4463+250*0.4663+(a-400)*0.5663;}

    printf("%.1lf",b);
    
    return 0;
}
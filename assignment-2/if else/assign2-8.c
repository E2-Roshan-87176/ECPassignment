#include<stdio.h>

int main(){
    double price=5,amount,no_discount;
    double discount_10,discount_15;
    printf("enter the amount = ");
    scanf("%d",&amount);
    
    no_discount=price*amount;
    discount_10=(price*amount*10/100);
    discount_15=(price*amount*15/100);
    
    if(amount>=50){
        
        printf("you have got discount off 15 percent= %lf\n",discount_15);
        printf("your total price is= %lf \n",no_discount-discount_15);
    }
    else if(amount>20){
        
        printf("you have got discount off 10 percent= %lf\n",discount_10);
        printf("your total price is= %lf \n",no_discount-discount_10);
    }
    else{
        
        printf("you have got no discount your total price is= %d \n",no_discount);
    
    }
    return 0;
}

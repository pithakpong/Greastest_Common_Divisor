#include <stdio.h>  
int GCD_func(int x,int num1,int num2) 
{ 
    int i = 1;
    int GCD =1;
        while(i<=x) 
    { 
        if(num1 %i == 0 && num2 %i == 0 && i>1) 
        { 
            GCD *= i;
            num1 = num1/i;
            num2 = num2/i;
            i = 0;
        }
        i++;
    }
    return GCD;
}
int main() 
{ 
    int number1,number2,max; 
    printf("key number1: ");
    scanf("%d",&number1);
    printf("key number2: ");
    scanf("%d",&number2); 
    int GCD = 1;
    if(number1 > number2) // เปรียบเทีบหาตัวมาก
    { 
        max = number1;
    } 
    else 
    { 
        max = number2;
    }
    GCD = GCD_func(max,number1,number2);
    printf("Greatest common divisor =%d",GCD);
}
#include <stdio.h> 
int main() 
{ 
    int number1,number2,max; 
    int tran1,tran2; 
    printf("key number1: ");
    scanf("%d",&number1);
    printf("key number2: ");
    scanf("%d",&number2); 
    tran1 = number1; tran2 = number2;
    int GCD,LCM;
    int result = 1;
    if(number1 > number2) 
    { 
        max = number1;
    } 
    else 
    { 
        max = number2;
    }

int i =1;
    while(i<=max) 
    { 
        if(number1 %i == 0 && number2 %i == 0 && i>1) 
        { 
            result *= i;
            number1 = number1/i;
            number2 = number2/i;
            i = 0;
        }
        i++;
    }
    int remainsNumber1 = tran1/result;
    int remainsNumber2 = tran2/result; 
    LCM = result*remainsNumber1*remainsNumber2; 
    GCD = (tran1*tran2)/LCM;
    printf("Greatest common divisor = %d",GCD);

return 0;
}
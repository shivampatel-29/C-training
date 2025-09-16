#include<stdio.h>
#include<conio.h>   
int main()
{
    int choice;
    float amount, converted_amount; 
    printf("Enter amount in indian currency: ");
    scanf("%f", &amount);
    printf("Convert to usd :\n");
    scanf("%d", &choice);
    switch(choice) printf("Converted amount in usd: %.2f", amount*0.014);
    return 0; 
}
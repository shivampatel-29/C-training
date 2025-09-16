#include <stdio.h>
#include <conio.h>
int main()
{
    int amt,bal=1000,ch;
    printf("\nchoices :");
    printf("\n1. Withdraw");
    printf("\n2. Deposit"); 
    printf("\n3. Check Balance");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\nEnter amount to withdraw :");
            scanf("%d",&amt);
            if(amt>bal)
                printf("\nInsufficient Balance");
            else
            {
                bal=bal-amt;
                printf("\nCollect your cash");
            }
            break;
        case 2:
            printf("\nEnter amount to deposit :");
            scanf("%d",&amt);
            bal=bal+amt;
            printf("\nYour money has been deposited successfully");
            break;
        case 3:
            printf("\nYour balance is : %d",bal);
            break;
        default:
            printf("\nInvalid choice");
    }   
    
}
    

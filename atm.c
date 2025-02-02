#include<stdio.h>
#include<conio.h>
void main()
{
    int pin,pin1=5555,c=1,ch,amt,balance=5000;
    printf("Welcome to HDFC bank\n");
    start:
    printf("Enter pin number\n");
    scanf("%d",&pin);
    if(pin==pin1)
    {
        
        printf("Please select your choice\n");
        printf("1.Deposit\n 2.Withdraw\n 3.Check balance\n 4.Change pin\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the deposit amount\n");
                   scanf("%d",&amt);
                   if(amt<=20000)
                   {
                       balance = balance+amt;
                       printf("%d\n",balance);
                   }
                   else
                   {
                    printf("Max limit of deposit is 20000\n");
                   }
            break;
            case 2:printf("Please the withdraw amount\n");
                   scanf("%d",&amt);
                   if(amt<20000)
                   {
                     if(amt<=balance)
                     {
                       balance=balance-amt;
                       printf("After deducting %d,Current balance=%d\n",amt,balance);
                     }
                     else
                     {
                        printf("Insufficient balance");
                     }
                   }
                   else
                   {
                     printf("Max limit of withdraw is 20000\n");
                   }
            break;
            case 3:printf("Your balance =%d\n",balance);
            break;
            case 4:printf("Enter the new pin");
                   scanf("%d",&pin1);
                   printf("Your pin is updated successfully......\nLogin again \n");
                   goto start;
            break;
        }
    }
    else
    {
       printf("Please enter the valid pin\n");
       if(c<3)
       {
        c++;
        goto start;
       }
       
    }
    printf("Press 1 to continue\n");
    scanf("%d",&ch);
    if(ch==1)
    goto start;
    printf("Thank for using HDFC application\n");
}
#include<stdio.h>
int main()
{
    int option,  dpAmount, wdAmount, exit = 1;
    float balance = 0.0;
     
    while(exit)
    {
    printf("====== ATM MENU ====== \n");
    printf(" 1. Check Balance\n");
    printf(" 2. Deposit Money\n");
    printf(" 3. Withdraw Money\n");
    printf(" 4. Exit\n");

    printf("Choose an option:");
    scanf(" %d", &option);

    switch (option){
        case 1:
            printf("Current Balance: %.2f\n", balance);
            break;
            
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%d", &dpAmount);
            balance += dpAmount;
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &wdAmount);
            balance -= wdAmount;
            printf("Withdraw successful.\n");
            break;
        case 4:
            printf("Thank you for using the ATM.\n");
            exit = 0;
            break;
    }
  }
  return 0;
}
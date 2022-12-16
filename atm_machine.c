#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
long amount=50000,deposit,withdraw;
int choice,pin,k;
char t;
char transaction='y';
int main(){
    while(pin!=4424){
        printf("Enter Your PIN: ");
        scanf("%d",&pin);
        if(pin!=4424){
            printf("\nInvalid PIN!\n");
        }
        do{
            printf("____________WELCOME TO ABC BANK ATM SERVICE_____________\n");
            printf("1. Check Balance\n");
            printf("2. Withdraw Cash\n");
            printf("3. Deposit Cash\n");
            printf("4. Exit\n");
            printf("______________________ATM SERVICE________________________\n\n");
            printf("Enter your choice: ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    printf("\nYour balance in RS:%lu",amount);
                    break;
                case 2:
                    printf("\nEnter the amount to withdraw: ");
                    scanf("%lu",&withdraw);
                    if(withdraw % 100 != 0){
                        printf("\nPlease enter the amount in multiple of 100");
                    }
                    else if(withdraw>amount){
                        printf("\nINSUFFICENT BALANCE");
                    }
                    else{
                        amount=amount-withdraw;
                        printf("\n\n PLEASE COLLECT YOUR CASH");
                        printf("\nYour Current Balance : %li",amount);
                    }
                    break;
                case 3:
                    printf("\nEnter the amount to deposit: ");
                    scanf("%lu",&deposit);
                    amount=amount+deposit;
                    printf("Your current balance is: %lu",amount);
                    break;
                case 4:
                    printf("THANK YOU FOR USING OUR ATM SERVICE");
                    getch();
                    exit(0);
                    break;
                default:
                    printf("\nINVALID CHOICE");
            }
            printf("\n\n\nDo you wish to do another transaction? (Y/N): ");
            fflush(stdin);
            scanf("%c",&t);
            if(t=='n' || t=='N'){
                k=1;
            }
        }while(!k);
    }
    printf("\n\nTHANKS FOR USING OUR ATM SERVICE!");
    getch();
    return 0;
}

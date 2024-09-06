#include <stdio.h>

int main() {
    int accountNum = 0;
    float begBalance = 0;
    float totalCharges =0;
    float totalCredits = 0;
    float creditLimit = 0;
    int account = 0;
    float balance = 0;

    char str[] = "Credit limit exceeded";
    while(1) {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNum);
        if(accountNum == -1) {
            break;
        }
        else {
            printf("Enter beginning balance: ");
            scanf("%f", &begBalance);
            printf("Enter total charges: ");
            scanf("%f", &totalCharges);
            printf("Enter total credits: ");
            scanf("%f", &totalCredits);
            printf("Enter credit limit: ");
            scanf("%f", &creditLimit);

            printf("Account: %d\n", accountNum);
            printf("Credit Limit: %f\n", creditLimit);
            balance = (begBalance + totalCharges) - totalCredits;
            printf("Balance: %f/n", balance );
            if(balance > creditLimit) {
                printf("Credit Limit Exceeded\n");
            }


        }
    }
}
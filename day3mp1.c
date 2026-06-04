#include <stdio.h>

int balance = 5000;

void deposit() {
    int amount;
    printf("Enter Amount to Deposit: ");
    scanf("%d", &amount);
    balance += amount;
    printf("Balance = %d\n", balance);
}

void withdraw() {
    int amount;
    printf("Enter Amount to Withdraw: ");
    scanf("%d", &amount);

    if (amount > balance)
        printf("Insufficient Balance\n");
    else {
        balance -= amount;
        printf("Balance = %d\n", balance);
    }
}

void showBalance() {
    printf("Current Balance = %d\n", balance);
}

int main() {
    int choice;

    while (1) {
        printf("=== Welcome to our Bank ===");
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Show Balance");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit();
                break;

            case 2:
                withdraw();
                break;

            case 3:
                showBalance();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}

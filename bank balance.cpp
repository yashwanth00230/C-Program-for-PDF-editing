#include <stdio.h>

int deposit(int balance, int amount) {
    balance += amount;
    printf("Amount deposited: %d\n", amount);
    return balance;
}

int withdraw(int balance, int amount) {
    if (balance >= amount) {
        balance -= amount;
        printf("Amount withdrawn: %d\n", amount);
    } else {
        printf("Insufficient balance.\n");
    }
    return balance;
}

int main() {
    int balance = 1000;

    balance = deposit(balance, 5000);
    balance = withdraw(balance, 2000);
    balance = deposit(balance, 7000);
    balance = withdraw(balance, 5000);

    printf("Current balance: %d\n", balance);

    return 0;
}


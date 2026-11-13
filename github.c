#include <stdio.h>

#define ADMIN_FEE 50000

enum ExpenseCategory {
    Food = 1,
    Transport,
    Entertainment
};

int main() {
    char name[100];
    int category;
    float allowance, expense;
    float totalExpense, balance;

    printf("\nSTUDENT FINANCIAL MANAGEMENT\n");
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nExpense Categories\n");
    printf("1 Food\n");
    printf("2 Transport\n");
    printf("3 Entertainment\n");
    printf("Choose category: ");
    scanf("%d", &category);

    enum ExpenseCategory selectedCategory = category;

    printf("Enter monthly allowance: ");
    scanf("%f", &allowance);

    printf("Enter expense amount: ");
    scanf("%f", &expense);

    totalExpense = expense + ADMIN_FEE;
    balance = allowance - totalExpense;

    printf("\nFINANCIAL REPORT\n");
    printf("Student Name: %s\n", name);

    printf("Expense Category: ");

    switch (selectedCategory) {
        case Food:
            printf("Food\n");
            break;

        case Transport:
            printf("Transport\n");
            break;

        case Entertainment:
            printf("Entertainment\n");
            break;

        default:
            printf("Invalid Category\n");
            break;
    }

    printf("Monthly Allowance: Rp %.0f\n", allowance);
    printf("Expense Amount: Rp %.0f\n", expense);
    printf("Administration Fee: Rp %d\n", ADMIN_FEE);
    printf("Total Expense: Rp %.0f\n", totalExpense);
    printf("Remaining Balance: Rp %.0f\n", balance);

    if (balance > 0) {
        printf("Financial Status: Budget Safe\n");
    } else if (balance == 0) {
        printf("Financial Status: Budget Empty\n");
    } else {
        printf("Financial Status: Budget Overlimit\n");
    }

    printf("\n");

    return 0;
}
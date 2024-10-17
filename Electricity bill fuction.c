
// Program to calculate electricity bill using a function
/* 
author:stella jepkirui 
date:16/10/2024
*/
#include <stdio.h>
float calculateBill(float unitconsumed);
int main() {
    int customerID;
    char customername[150];
    float unitconsumed, totalbill;
    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter customer name: ");
    scanf("%c", customername);
    printf("Enter units consumed: ");
    scanf("%f", &unitconsumed);

    // Calculate total bill using the function
    totalbill = calculateBill(unitconsumed);
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %c\n", customername);
    printf("Units Consumed: %.2f\n", unitconsumed);
    printf("Total Bill: %.2f\n", totalbill);

    return 0;
}

// Function to calculate the total bill based on units consumed
float calculateBill(float unitconsumed) {
    float bill = 0, surchange = 0;

    // Calculate bill based on unit consumed
    if (unitconsumed <= 199) {
    bill = unitconsumed * 1.20;
    }
     else if (unitconsumed <= 400) {
     bill = unitconsumed * 1.50;
     }
     else if (unitconsumed <= 600) {
        bill = unitconsumed * 1.80;
        }
     else {
     bill = unitconsumed * 2.00; // For units above 600
    }

    // Apply surcharge if the bill exceeds 400
    if (bill > 400) {
        surchange = bill * 0.15;
    }

    // Return the total bill including any surcharge
    return bill + surchange;
}

// Program to calculate electricity bill
/*
author:stella jepkirui 
date:10/10/2024
*/
#include<stdio.h>

int main() {
    int customerID;
    char customername[50];
    float unitconsumed, totalbill = 0, bill = 0, surchange = 0;

    printf("Enter customerID: ");
    scanf("%d", &customerID);

    printf("Enter customer name: ");
    scanf("%s", customername);

    printf("Enter units consumed: ");
    scanf("%f", &unitconsumed);

    // Calculate the bill based on unit consumed
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
    bill = unitconsumed * 2.00;//for units above 600
    }

    // Apply surcharge if applicable
    if (bill > 400) {
    surchange = bill * 0.15;
    }

    // Calculate total bill
    totalbill = bill + surchange;

    // Display results
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customername);
    printf("Units Consumed: %.2f\n", unitconsumed);
    printf("Bill: %.2f\n", bill);
    printf("Surcharge: %.2f\n", surchange);
    printf("Total Bill: %.2f\n", totalbill);

    return 0;
    }


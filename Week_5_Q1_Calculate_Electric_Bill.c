/*
Name: Winnie Wairimu Mugo
Reg no: CT100/G/30690/26
Description: Function to calculate an electricity bill using tiered rates
Date: 27/10/2026
*/


#include <stdio.h>

double calculateElectricBill(int units)
{
    double bill = 0.0;

    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }

    return bill;
}

int main(void)
{
    int units;

    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Please enter a valid non-negative number of units.\n");
        return 1;
    }

    printf("Total electricity bill: KSh. %.2f\n",
           calculateElectricBill(units));
    return 0;
}

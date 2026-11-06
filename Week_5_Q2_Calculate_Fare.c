/*
Name: Winnie Wairimu Mugo
Reg no: CT100/G/30690/26
Description: Function to calculate travel fare
Date: 28/10/2026
*/


#include <stdio.h>

double calculateFare(double distance)
{
    return distance * 50.0;
}

int main(void)
{
    double distance;

    printf("Enter distance travelled in kilometres: ");
    if (scanf("%lf", &distance) != 1 || distance < 0) {
        printf("Please enter a valid non-negative distance.\n");
        return 1;
    }

    printf("Total fare: KSh. %.2f\n", calculateFare(distance));
    return 0;
}

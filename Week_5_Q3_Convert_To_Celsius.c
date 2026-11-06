/*
Name: Winnie Wairimu Mugo
Reg no: CT100/G/30690/26
Description: Function to convert Fahrenheit to Celsius
Date: 29/10/2026
*/


#include <stdio.h>

double convertToCelsius(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void)
{
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid temperature.\n");
        return 1;
    }

    printf("Temperature in Celsius: %.2f C\n",
           convertToCelsius(fahrenheit));
    return 0;
}

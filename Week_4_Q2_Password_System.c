/*
Name: Winnie Wairimu Mugo
Reg no: CT100/G/30690/26
Description: Password system using a do-while loop
Date: 26/10/2026
*/


#include <stdio.h>

int main(void)
{
    int password;

    do {
        printf("Enter password: ");
        if (scanf("%d", &password) != 1) {
            printf("Invalid input. Please enter the numeric password.\n");
            return 1;
        }

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }
    } while (password != 1234);

    printf("Access Granted\n");
    return 0;
}

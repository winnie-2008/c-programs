/*
Name: Winnie Wairimu Mugo
Reg no:CT100/G/30690/26
Description:Program with user input
Date:19/9/2026
*/

#include<stdio.h>

int main(){
	//declare and intialize variables
     float height;
	 double bank_balance;
	 char phone_number[10];
	 
	 printf("Enter height in meters");
	 scanf("%f", &height);
	 
	 printf("Enter bank_balance in Ksh");
	 scanf("%f", &bank_balance);
	 
	 printf("Enter phone_number");
	 scanf("%10s",&phone_number);
	 
	 printf("The height is %f\n,height");
	 printf("The bank balance is %f\n,bank_balance");
	 printf("Phone number is %s\n phone_number");
	 
	 return 0;
	 
	 	
}
/*
Name:Winnie Wairimu Mugo
Reg no: CT100/G/30690/26
Description:While Loop Bank Withdrawal
Date:24/10/2026
*/

#include<stdio.h>

int main(){
	float balance, withdrawal;
	
	printf("Enter account balance:");
	scanf("%f", &balance);
	
	while(balance> 0){
		printf("Enter withdrawal amount:");
		scanf("%f",&withdrawal);
		balance = balance- withdrawal;
		printf("Balance is:%2f\n",balance);
	}
	return 0;
}
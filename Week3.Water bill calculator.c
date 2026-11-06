/*
Name: Winnie Wairimu Mugo
Reg no:CT100/G/30690/26
Description:Water bill calculator
Date:28/9/2026
*/

#include <stdio.h>

    int main(){
	int units;
	float bill;
	
	printf("Enter water units consumed:");
	scanf("%d",&units);
	
	if (units <0){
		printf("Invalid units\n");
	}else if(units <=30){
		bill = units*20;
		printf("Total water bill:%2f KES\n",bill);
		}else if( units <=60){
		bill=(30*20)+((units-30)*25);
		printf("Total water bill:%2f KES\n",bill);
	}else{
		bill =(30*20)+(30*25)+((units-60)*30);
		printf("Total water bill:%2f KES\n",bill);
	}
	return 0;
	
}
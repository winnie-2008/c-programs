/*
Name:Winnie Wairimu Mugo
Reg no:CT100/G/30690/26
Description:Exam Eligibility
Date:26/9/2026
*/

#include<stdio.h>

int main(){
	int attendance;
	float average;
	
	printf("Enter your attendance percentage:");
	scanf("%d",&attendance);
	
	printf("Enter the average marks:");
	scanf("%f",&average);
	
	if(attendance >=75&&average >=40){
		printf("Eligible\n");
	}else{
		printf("Not eligible\n");
	}
	return 0;
}
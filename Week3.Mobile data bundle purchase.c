/*
Name:Winnie Wairimu Mugo
Reg no:CT100/G/30690/26
Description:Mobile Data Bundle Purchase
Date:1/10/2026
*/

#include <stdio.h>
int main(){
	int choice;
	
	printf("MOBILE DATA PURCHASE\n");
	printf("1. 100 MB - 50 KES\n");
	printf("2. 500 MB - 200 KES\n");
	printf("3. 1 GB - 350 KES\n");
	printf("4. 2 GB - 600 KES\n");
	
	printf("Enter your choice(1-4):");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Bundle selected: 100 MB\n");
			printf("Cost: 50 KES\n");
			break;
	case 2:
	printf("Bundle selected:500 MB\n");
	printf("Cost: 200 KES\n");
	        break;
	case 3:
	printf("Bundle selected: 1 GB\n");
	printf("Cost: 350 KES\n");
	        break;
	case 4:
	printf("Bundle selected: 2GB\n");
	printf("Cost: 600 KES\n");
	        break;
	printf("Invalid choice\n");
	}
	return 0;
}
/*
Name:Winnie Wairimu Mugo
Reg No:CT100/G/30690/26
Description:Volume and surface area of a cylinder
Date:24/9/2026
*/

#include<stdio.h>

int main(){
	float radius;
	float height;
	int volume ,surfacearea;
	double pi=3.142;
	
	printf("Radius of the cylinder:");
	scanf("%f",&radius);
	
	printf("Height of the cylinder:");
	scanf("%f",&height);
	
	volume=pi*radius*radius*height;
	
	surfacearea=(2*pi*radius*radius)+ (2*pi*radius*height);
	
	printf("Volume=%4d\n", volume);
	printf("Surfacearea=%2d\n",surfacearea);
	
	return 0;
	
}
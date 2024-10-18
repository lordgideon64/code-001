#include <stdio.h>


int main()
{
	
	int age;
	int income;
	
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your annual income in Ksh:");
	scanf("%f",&income);
	
	
	if(age>=21&& income>=21000){
		printf("congratulation,you qualify for a loan.\n");
	}else{
		printf("unfortunately,we are unable to offer you a loan at this time.\n");
	}
	
	
	return 0;
}
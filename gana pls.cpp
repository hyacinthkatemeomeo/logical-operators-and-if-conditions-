#include <stdio.h>
int main(){
	
	int num1 = 0;
	
	printf("Enter a value:\n");
	scanf("%d", &num1);
	
	if (!(num1 < 0)){
		printf("a. %d is positive number.\n", num1);
	}
	else{
		printf("a. %d is negative number!\n", num1);
	}
	
	if (num1 % 5 == 0 && num1 % 8 == 0){
		printf("b. %d is divisible by 5 and 8.\n", num1);
	}
	else{ 
	printf("b. %d is not divisible by 5 and 8!\n", num1);
	}
	
	if (num1 % 5 == 0 || num1 == 5) {
		printf("c. %d is only divisible by 5.\n", num1);
	}
	else{
		printf("c. %d is not divisible by 5!\n", num1);
	}
	
		if (num1 % 8 == 0 || num1 == 8) {
		printf("d. %d is only divisible by 8.\n", num1);
	}
	else{
		printf("d. %d is not divisible by 8!\n", num1);
	}
	
	return 0; 
}

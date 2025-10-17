#include <stdio.h>
int main() {
	
	int numBer1 = 0;
	
	printf("Enter a value:\n");
	scanf("%d", &numBer1);
	
	
    if (numBer1 > 0) {
        printf("a. %d is a positive number.\n", numBer1);
    } else if (numBer1 < 0) {
        printf("a. %d is a negative number!\n", numBer1);
    } else {
        printf("a. The number is zero.\n");
    }
	
	if (numBer1 % 5 == 0 && numBer1 % 8 == 0 && numBer1 != 0) {
		printf("b. %d is divisible by 5 and 8.\n", numBer1);
	}
	else{ 
	printf("b. %d is not divisible by 5 and 8!\n", numBer1);
	}
	
	if (numBer1 % 5 == 0 && numBer1 % 8 != 0){
		printf("c. %d is only divisible by 5.\n", numBer1);
	} 
	else if (!(numBer1 % 5 == 0 && numBer1 % 8 != 0)){
		printf("c. %d is not divisible by 5!\n", numBer1);
	}
	else{
		printf("c. %d is not only divisible by 5!\n", numBer1);
	}
	
	if (numBer1 % 8 == 0 && numBer1 % 5 != 0) {
		printf("d. %d is only divisible by 8.\n", numBer1);	
	} 
	else if (!(numBer1 % 8 == 0 && numBer1 % 8 != 0)){
		printf("d. %d is not divisible by 8!\n", numBer1);
	}
	else{
		printf("d. %d is not only divisible by 8!\n", numBer1);
	}
	
	return 0; 
}

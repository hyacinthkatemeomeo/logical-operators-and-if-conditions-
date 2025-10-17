#include <stdio.h>
int main() {
	
    int gradeMo1 = 0;

    printf("Enter your grade:\n");
    scanf("%d", &gradeMo1);

    if (gradeMo1 >= 75 && gradeMo1 <= 100) {
        printf("Passed\n");
    } else if (gradeMo1 <= 74 && gradeMo1 >= 0) {
        printf("Failed\n");
    } else {
        printf("Invalid grade entered! Please enter again..\n");
    }
    
	return 0;
}

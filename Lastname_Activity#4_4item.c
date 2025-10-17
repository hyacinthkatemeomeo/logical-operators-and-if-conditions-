#include <stdio.h>
int main(){
	
	float total1 = 0, price1 = 0;
	char choice1 = 0;
	int numOrders = 0;
	printf("***Welcome to Aling Basing Eatery!***\n");
	printf("\tMenu\t\t\t Price\t\t");
	printf("\n a. Chicken Combo \t\t P75.00");
	printf("\n b. Sweet and Sour Fish \t P100.00");
	printf("\n c. Chopseuy \t\t\t P99.00");
	printf("\n d. Pork Chop \t\t\t P88.00\n");

    printf("Enter your menu choice (a,b,c,d):\n");
    scanf("%c", &choice1);
    

    if (choice1 < 'a' || choice1 > 'd') {
        printf("Invalid choice!\n");
        return 0;
	}

    printf("How many orders?\n");
    scanf("%d", &numOrders);
    
    if (numOrders <= 0) {
        printf("Invalid quantity!\n");
        return 0;
	}
    
    if (choice1 == 'a' || choice1 == 'A') {
        price1 = 75.00;
    } else if (choice1 == 'b' || choice1 == 'B') {
        price1 = 100.00;
    } else if (choice1 == 'c' || choice1 == 'C') {
        price1 = 99.00;
    } else if (choice1 == 'd' || choice1 == 'D') {
        price1 = 88.00;
    }
    

    total1 = price1 * numOrders;

    printf("\nTotal bill: P%.2f\n", total1);
    
    
    return 0;
}

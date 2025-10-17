#include <stdio.h>
#include <math.h>
int main (){
	
	int km1 = 0, extraKm = 0, segment0 = 0;
	float fare1 = 34.50, addFare2 = 7.60, totalFare = 0; 
	
	printf("Welcome to Ceres Bus!\n");
	printf("Please enter distance in kilometers:\n");
	scanf("%d", &km1);
	
	if (km1 <= 0 || km1 >= 1000){
		printf("Invalid Input! Try again..\n");
	} else if (km1 >= 1 && km1 <= 5) {
		printf("Your total  bill is = %.2f\n", fare1);
	} else if (km1 >= 6) {
		extraKm = km1 - 5;
		
		if (extraKm % 3 == 0 && extraKm > 0) {
			segment0 = extraKm / 3;
		}
		else if (extraKm % 3 != 0 && extraKm > 0){
			segment0 = (extraKm / 3) + 1;	
		}  

        totalFare = fare1 + (segment0 * addFare2);
        printf("Total fare = %.2f pesos\n", totalFare);
    }
	return 0; 
    }

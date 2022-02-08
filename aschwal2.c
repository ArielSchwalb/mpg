/* --------------------------------------------------------------------------

Program file: aschwal2.c
Author: Ariel Schwalb
Date: February 20, 2022
Assignment: #2
Objective: This program calculates the miles per gallon for 3 tanks of gasoline
that a user fills in his/her car.

-------------------------------------------------------------------------- */

#include <stdio.h>

int main (void)

{
	
	/* Declare variables.*/
	/* ----------------- */
	
	float miles;
	float gallons;
	float total = 0;
	int x;
	char c;
	
	/* Output initial greeting and introduction. */
    /* ----------------------------------------- */
    
    printf("Welcome to the mileage calculator.\n");
    
    printf("\n");
    
    printf("This program will calculate the miles per gallon for you for three tanks of gas after you have entered the gallons used and miles driven.\n");
    
   	printf("\n");
 	
 	/* Using the for loop, prompt user input and calculate the average miles per gallon for the three tanks. */
    /* ----------------------------------------------------------------------------------------------------- */
    
    for (x = 1; x <= 3; x++) {
    	
      printf("Enter the number of miles driven for tank #%d: ", x);
      scanf("%f", &miles);
      while ( (c = getchar() != '\n') && c != EOF); /* clear input buffer */
      
      printf("Enter the number of gallons used for tank #%d: ", x);
      scanf("%f", &gallons);
      while ( (c = getchar() != '\n') && c != EOF); /* clear input buffer */
      
      printf("The miles per gallon for this tank was %f.\n", miles/gallons);
      
      printf("\n");
      
      total = total + miles/gallons;

    }

    printf("Your overall average miles per gallon for three tanks is %f.\n", total/3);
    
	printf("Thank you for using the program. Goodbye.");
	
	return 0;
	
}	/* end main */

#include "mySort.h"
#include <stdio.h>
#include <stdlib.h>
#include "metrics.h"

void mySort(int array[], unsigned int first, unsigned int last){

		//local variables
		int counter1;
		int counter2;
		int bucket;

		//nested loop
		for (counter1 = first; counter1 < last + 1; counter1++){
			
			myCopy(&array[counter1], &bucket); //copying

			counter2 = counter1-1;


		while (counter2 >= 0 && (myCompare(array[counter2], bucket) >= 0)){ 
			

			  mySwap(&array[counter2], &array[counter2 + 1]); //swapping

			  counter2=counter2-1; //decrementing
			
			}
			
		}
    }

#include "mySort.h"
#include "metrics.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void merge(int array [],unsigned int first,unsigned int middle,unsigned int last){

		//local variables
		int counter1;
		int counter2;
		int bucket;

		counter1 = first;
		counter2 = middle +1;
		bucket = 0;

		int temporary[last-first +1];

		//loops
		while (myCompare(counter1, middle) <= 0 && myCompare(counter2, last) <= 0){
			
		if (myCompare(array[counter1], array[counter2]) < 0){
				
				myCopy(&array[counter1++], &temporary[bucket++]);
			}

		else {
				
				myCopy(&array[counter2++], &temporary[bucket++]);
			}
		}
	
		while (myCompare(counter1, middle) <= 0){
		
				myCopy(&array[counter1++], &temporary[bucket++]);
		}

		while (myCompare(counter2, last) <= 0){	 
				
				myCopy(&array[counter2++], &temporary[bucket++]);
		}
		
		for (counter1 = first,counter2 = 0; myCompare(counter1, last) <= 0; counter1++,counter2++){
		
				mySwap(&array[counter1], &temporary[counter2]);
	
		}	
}

void mySort(int array[], unsigned int first, unsigned int last){
 		
		if (myCompare(last - first + 1, 1) == 0){
				
				return;

				}
		
		else { 
				int middle = (first + last) / (2);

				mySort(array, first, middle);

				mySort(array, middle + 1, last);

				merge(array, first, middle, last);
	
	}	
  }

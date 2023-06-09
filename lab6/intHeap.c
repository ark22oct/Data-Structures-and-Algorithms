#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <tgmath.h>

/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

	int heap[100];
	int key[100];
	static int size= 0;

int heapDelete()
{
	
	int i=0;
	int storeSize= size;

	while (i < storeSize-1){

		i++;

		key[i]= heap[i+2];
	}

	while (i<100){

		i++;

		heap[i]=0;
	}

	while (i< storeSize){

		i++;

		addHeap(key[i]);
	}
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	heap[size]= thing2add;

	size++;	
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;
}

void displayHeap(int x){

	for (; x<size; x++){

		printf("<Node id - \"%d\">", heap[x]);

		if (x * 2 + 1 <= size){
           displayHeap(x * 2);
       	}
      	if(x*2 + 1 <=size) {
           displayHeap(x* 2 + 1);
       	}
       	x= size+1;
   }
   printf("<node> ");
}

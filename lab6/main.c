#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapDelete();
extern int heapSize();
extern void displayHeap(int);

int main(int argc, char * argv[])
{
  int value;
  int i;
  int amount;
  int p;
  int pushingOntoStack;
  
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
    //
	addHeap(value);

	amount++;
	
  }
	displayHeap(1);

	printf("\n");
	
	amount= heapSize();

	i=0;

	while (i<amount){
	i++;
	pushingOntoStack= heapDelete();
	push (pushingOntoStack);
	printf("%d\n", pushingOntoStack);
	}

	i=0;

	while (i<amount){
	i++;
	p=pop();
 	printf("%d \n",p);
	}
  exit(0);
}

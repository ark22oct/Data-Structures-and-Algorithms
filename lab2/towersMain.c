#include <stdio.h>
#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv)
{
	//Default case (no arguements)
    int n = 3;
    int from = 1;
    int dest = 2;
	
	//Case that deal with one arguement
    if (argc == 2) {
        n = atoi(argv[1]);
    }
	
	//Incase user inputs two arguements
	if (argc == 3) {
	fprintf(stderr, "Try again, give me: no arguements, one arguement, or three arguements!");
	exit (-1);
	}
		
	//Case that deals with 3 arguements
	if (argc == 4) {
		n = atoi(argv[1]);
		from = atoi(argv[2]);
		dest = atoi(argv[3]);

	//If user inputs the same "from" and "dest" of disks 
	if (from == dest) {
		fprintf(stderr, "Incorrect invocation, trying to move disks from and to the same spot!");
		exit(-1);
	}
}

    towers(n, from, dest);
    exit(0);
}


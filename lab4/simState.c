#include <stdio.h>
#include <stdlib.h>

/*

Personalized State Machine:

A A F
B C H
C H A
D E C
E A D
F G B
G B E
H D G

Starting State: B
 
*/


typedef struct stateMachine{
	int number;
	char name;
	struct stateMachine * nextState0;
	struct stateMachine * nextState1;
}


fsm;

fsm state[8];


void initialState(){
	
	//For State A

	state[0].number = 0;
	state[0].name = 'A';
	state[0].nextState0 = state + 0; //State A
	state[0].nextState1 = state + 5; //State F

	//For State B

	state[1].number = 1;
	state[1].name = 'B';
	state[1].nextState0 = state + 2; //State C
	state[1].nextState1 = state + 7; //State H

	//For State C

	state[2].number = 2;
	state[2].name = 'C';
	state[2].nextState0 = state + 7; //State H
	state[2].nextState1 = state + 0; //State A

	//For State D

	state[3].number = 3;
	state[3].name = 'D';
	state[3].nextState0 = state + 4; //State E
	state[3].nextState1 = state + 2; //State C

	//For State E

	state[4].number = 4;
	state[4].name = 'E';
	state[4].nextState0 = state + 0; //State A
	state[4].nextState1 = state + 3; //State D

	//For State F

	state[5].number = 5;
	state[5].name = 'F';
	//state[5].remove = 0;
	state[5].nextState0 = state + 6; //State G
	state[5].nextState1 = state + 1; //State B

	//For State G

	state[6].number = 6;
	state[6].name = 'G';
	state[6].nextState0 = state + 1; //State B
	state[6].nextState1 = state + 4; //State E

	//For State H

	state[7].number = 7;
	state[7].name = 'H';
	state[7].nextState0 = state + 3; //State D
	state[7].nextState1 = state + 6; //State G
}


void printState(){ //method to print out states.

	int i=0;
	
	for (i=0; i<8; i++){
		fprintf(stdout, "%c %c %c\n", state[i].name, state[i].nextState0-> name, state[i].nextState1-> name);
	}
}


int main(int argc, char * argv[]){

	initialState();

	int i=0;
	int j=0;

	fsm presentState = state[1]; //Starts in state B (for my personalized state machine).

	char argument[3]; //array responsible for taking arguments.

	fprintf(stdout, "Starting State: %c\n", presentState.name); //Before any commands (no commands) are even issued, program will print out starting state (B in my 																//case).

	while (j!=1){

		if (argument[0] == '0'){ //Zero command, former and current state being displayed when "0" is entered in the terminal (assuming the starting state is B).

			fprintf(stdout, "Former State:%c\n",presentState.name);

			fprintf(stdout, "Present State:%c\n",presentState.nextState0->name);

			presentState = state[presentState.nextState0->number];
		}

	  
		if(argument[0] == '1'){ //One command, former and current state being displayed when "1" is entered in the terminal (assuming the starting state is B).

			fprintf(stdout, "Former State:%c\n",presentState.name);

			fprintf(stdout, "Present State:%c\n",presentState.nextState1->name);

			presentState = state[presentState.nextState1->number];
		}


		if((argument[0] == 'C'|| argument[0] == 'c') && (argument[1] == '0')){ //Change command for 0.

			if((argument[2] == 'A'||argument[2] == 'a')){

				presentState.nextState0 = state;

				state[presentState.number].nextState0 = state;
        	}	

			else if((argument[2] == 'B'|| argument[2] == 'b')){

				presentState.nextState0 = state + 1;

				state[presentState.number].nextState0 = state + 1;
        	}

        	else if((argument[2] == 'C'|| argument[2] == 'c')){

				presentState.nextState0 = state + 2;

				state[presentState.number].nextState0 = state + 2;
        	}

        	else if((argument[2] == 'D'|| argument[2] == 'd')){

				presentState.nextState0 = state + 3;

				state[presentState.number].nextState0 = state + 3;
        	}

        	else if((argument[2] == 'E'|| argument[2] == 'e')){

				presentState.nextState0 = state + 4;

				state[presentState.number].nextState0 = state + 4;
        	}

        	else if((argument[2] == 'F'|| argument[2] == 'f')){

				presentState.nextState0 = state + 5;

				state[presentState.number].nextState0 = state + 5;
        	}

        	else if((argument[2] == 'G'|| argument[2] == 'g')){

				presentState.nextState0 = state + 6;

				state[presentState.number].nextState0 = state + 6;
        	}	

        	else if((argument[2] == 'H'|| argument[2] == 'h')){

				presentState.nextState0 = state + 7;

				state[presentState.number].nextState0 = state + 7;
        	}
    	}


		if((argument[0] == 'C'|| argument[0] == 'c') && (argument[1] == '1')){ //Change command for 1.

			if((argument[2] == 'A'|| argument[2] == 'a')){

				presentState.nextState1 = state;

				state[presentState.number].nextState1 = state;
        	}	

			else if((argument[2] == 'B'|| argument[2] == 'b')){

				presentState.nextState1 = state + 1;

				state[presentState.number].nextState1 = state + 1;
        	}

        	else if((argument[2] == 'C'|| argument[2] == 'c')){

				presentState.nextState1 = state + 2;

				state[presentState.number].nextState1 = state + 2;
        	}

        	else if((argument[2] == 'D'||argument[2] == 'd')){

				presentState.nextState1 = state + 3;

				state[presentState.number].nextState1 = state + 3;
        	}

        	else if((argument[2] == 'E'||argument[2] == 'e')){

				presentState.nextState1 = state + 4;

				state[presentState.number].nextState1 = state + 4;
        	}

        	else if((argument[2] == 'F'||argument[2] == 'f')){

				presentState.nextState1 = state + 5;

				state[presentState.number].nextState1 = state + 5;
        	}

        	else if((argument[2] == 'G'||argument[2] == 'g')){

				presentState.nextState1 = state + 6;

				state[presentState.number].nextState1 = state + 6;
        	}	

        	else if((argument[2] == 'H'|| argument[2] == 'h')){

				presentState.nextState1 = state + 7;

				state[presentState.number].nextState1 = state + 7;
        	}		   
		}


		if (argument[0] == 'P' || argument[0] == 'p'){ //Print command, calls upon method to print out all the states.

			fprintf(stdout, "Current state machine configuration:\n");
			printState();
		}

		for (i=0; i<=4; i++){
		
			scanf("%c", &argument[i]);
		
				if (argument[i] == '\n'){
				
					break;
				}
		}


		if (argument[0] == 'S' || argument[0] == 's'){ //Stop command, if you wish to stop and end the program (added this to avoid the message: "There is still a 														  // process running in this terminal. Closing the terminal will kill it.")
												     
			j=1;

			break;
		}	
	}
	
    exit(0);
}


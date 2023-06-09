#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern char *  pop();
extern void push(char *);

int main(int argc, char * argv[])
{
  int ch;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    //
    if (isalpha(ch)){
			if (ch == '<'){
				push(ch);
			}
		}

		if (isalpha(ch)){
			if (ch == '/'){
				//if (isalpha(ch)){
					if(pop()!= ch){
						printf("Incorrect/not valid!");
					}
				//}
			}
		}	
  //}

	if (pop() == -1){			
		printf("NOT Valid!");
		exit(1);
	
	}

	if (pop() !=ch){
		printf("NOT Valid!");
	}
		
	else{
			printf("Valid!");
		}
    
    
  }
  exit(0);
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int answer=40;
	int trial=0;
	
	do 
	{
		printf("Guess the number! :");
		scanf("%d",&x);
		trial= trial+1;
		
		if (x<answer)
		  printf("LOW!\n");
		else if(x>answer)
		  printf("HIGH!\n");
		
	}
	while(x!=answer);
	  printf("Congratulation!\n");
	
	printf("number of trial : %d",trial);
	
	return 0;
}

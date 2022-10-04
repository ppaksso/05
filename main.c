#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0 ;
	
	printf("input a string:");
	while ((c = getchar() ) != '\n') //입력문자가 개형문자가 나올때까지 반복 엔터를 누를때까지 while문 반복 
	{
		if ('0' <= c && c <= '9')// 입력된 문자가 숫자인가? 
		  num= num + 1;  //그렇다면 하나를 센다. 
	}
   
   printf("the number of digits is %d \n", num);
   
	return 0;
}

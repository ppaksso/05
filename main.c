#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0 ;
	
	printf("input a string:");
	while ((c = getchar() ) != '\n') //�Է¹��ڰ� �������ڰ� ���ö����� �ݺ� ���͸� ���������� while�� �ݺ� 
	{
		if ('0' <= c && c <= '9')// �Էµ� ���ڰ� �����ΰ�? 
		  num= num + 1;  //�׷��ٸ� �ϳ��� ����. 
	}
   
   printf("the number of digits is %d \n", num);
   
	return 0;
}

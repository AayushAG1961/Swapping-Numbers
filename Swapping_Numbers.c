#include<stdio.h>

int main()
{
	int A=10, B=20;
	
	printf("Numbers before swapping are :\n A=%d \n B=%d \n",A,B);
	
	A=A+B; 
	B=A-B;
	A=A-B;
	
	printf("Numbers after swapping are :\n A=%d \n B=%d \n",A,B);
	
	return 0;
}

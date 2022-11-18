#include <stdio.h>

int main(){
	int x, y, z;
	printf("enter 3 numbers: \n");
	printf("number 1: \n");
	scanf("%i", &x);
	printf("number 2: \n");
	scanf("%i", &y);
	printf("number 3: \n");
	scanf("%i", &z);
	printf("the sum of your 3 numbers is %i\n", x+y+z);
	return 0;
}


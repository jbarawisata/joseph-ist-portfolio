#include <stdio.h>
#include <stdlib.h>
int main(){
	int length, width, perimeter;
	printf("enter a length: \n");
	scanf("%i", &length);
	printf("enter a width: \n");
	scanf("%i", &width);
	length = abs(length);
	width = abs(width);
	perimeter = 2*length + 2*width;
	printf("the perimeter of your rectange is %i\n", perimeter);
	return 0;
}


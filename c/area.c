#include <stdio.h>

int main(){
	int length, width, area;
	printf("enter a length: \n");
	scanf("%i", &length);
	printf("enter a width: \n");
	scanf("%i", &width);
	area = length*width;
	printf("the area of your rectange is %i\n", area);
	return 0;
}


#include <stdio.h>
int main(){
	float length, breadth, area;
	printf("Please enter the length:\n");
	scanf("%f", &length);
	printf("Please enter the breadth:\n");
	scanf("%f", &breadth);
	area = length*breadth;
	printf("area = %f\n", area);
	return 0;
}

#include<stdio.h>
int main(){
	float r, area;
	printf("Please enter the radius:\n");
	scanf("%f", &r);
	area = 3.14*r*r;
	printf("area = %f\n", area);
	return 0;
}

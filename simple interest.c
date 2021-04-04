#include<stdio.h>
int main(){
	float p, r, t, si;
	printf("please enter the principle:\n");
	scanf("%f", &p);
	printf("plaese enter the rate:\n");
	scanf("%f", &r);
	printf("please enter the time:\n");
	scanf("%f", &t);
	si = (p*r*t)/100;
	printf("simple interest = %f\n", si);
	return 0;
}

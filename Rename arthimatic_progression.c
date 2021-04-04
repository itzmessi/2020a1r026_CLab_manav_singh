#include <stdio.h>
int main()
{
	int n, i;
	float a, d;
	printf("First term=\n");
	scanf("%f", &a);
	printf("Common difference=\n");
	scanf("%f", &d);
	printf("Number of terms=\n");
	scanf("%d", &n);
	for(i=1; i<=n;i++){
		printf("%f\t", (a+(i-1)*d));
	}
	return 0;
}

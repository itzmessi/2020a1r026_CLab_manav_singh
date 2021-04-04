#include <stdio.h>
int main()
{ 
    int x, y, z, i;
    x = 0;
    printf("%d\t" , x);
    y = 1;
    printf("%d\t" , y);
    z = x + y;
    printf("%d\t" , z);
	for( i = 4; i<=10; ++i)
    {
	
	   x = y;
        y = z;
        z = x + y;
        printf("%d\t", z);
		    
	}
    return 0;
    
}

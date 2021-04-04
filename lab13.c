#include<stdio.h>
#include<conio.h>
 
void main()
{
int n,num,r,ans=0;
clrscr();
 
printf("Enter a positive integer: ");
scanf("%d", &num);
n=num;
 
/* Loop to calculate the sum of the cubes of its digits */
while(n>0)
{
r=n%10;
ans=ans+r*r*r;
n=n/10;
}
 
/* if else condition to print Armstrong or Not */
if(ans==num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
getch();
}

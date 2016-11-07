#include<stdio.h>
int main()
{
int a;
scanf("%d", &a);
if (a>0 && a%2==0)
	printf("\nThe given number %d  is even",a);
else if(a>0 && a%2!=0)
	printf("\nThe number %d is odd" ,a);
else if(a==0)
	printf("\nThe number is zero");
else 
	printf("The given number is negative");

	return 0;
}

#include <stdio.h>

int main(void) {
	int a;
	printf("Enter a number:");
	scanf("%d", &a);
	if(a!=0 && a>0)
		printf("\nThe number %d is positive",a);
	else if(a!=0 && a<0)
		printf("\nThe number %d is negative"a);
	else if(a==0)
		printf("\nThe number is zero);
	else 
		printf("\nPlease enter a valid number");
	return 0;
}

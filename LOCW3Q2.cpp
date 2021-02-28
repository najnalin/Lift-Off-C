//to print the factorial of a given number using function
#include<stdio.h>
int factorial(int);
main(){
	int a;
	scanf("%d",&a);
	printf("The factorial of %d is %d.",a,factorial(a));
}

int factorial(int a){
	int b;
	b = 1;
	while(a){
		b = b * a;
		a--;
	}
	return(b);
}

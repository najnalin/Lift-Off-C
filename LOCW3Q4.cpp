//to find factorial using recursion
#include<stdio.h>

int fact(int,int);

main(){
int a,p;
p = 1;
printf("\nEnter an integer.\n");
scanf("%d",&a);
printf("The factorial of the number %d is %d.\n",a,fact(a,p));	
}

int fact(int a, int p){
	p = p * a;
	if(a == 1) return(p);
	else{
		a--;
		fact(a,p);
	}
}

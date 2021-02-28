//to check a palindromic number using recursions
#include <stdio.h>
#include <math.h>

int digit(int,int);

int rev(int,int,int);

main(){
	int a,b,c,r,num,copy;
	c = num = 0;
	printf("\nEnter a number.\n");
	scanf("%d",&a);
	copy = a;
	b = digit(a,c);
	//printf("digit = %d\n",b);
	a = copy;
	b = b - 1;
	r = rev(a,b,num);
	//printf("reverse = %d\n",r);
	if(a == r) printf("The number %d is a palindrome.\n",copy);
	else printf("The number %d is not a palindrome.",copy);
}

int digit(int a,int c){
	if(a){
		a = a / 10;
		c++;
		digit(a,c);
	}
	else return(c);
}

int rev(int a,int b,int num){
	int x,p;
	if(a){
		x = a % 10;
		p = pow(10,b);
		num = num + x * p;
		b--;
		a = a / 10;
		//printf("%d\n",num);
		rev(a,b,num);
	}
	else return(num);
}



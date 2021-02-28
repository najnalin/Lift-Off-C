//to find the HCF and LCM of two numbers using recursion
#include<stdio.h>
int LCM(int,int,int);
int HCF(int,int,int);
int f = 2,s = 1;
main(){
	int a,b,c,d,e;
	printf("\nEnter any two numbers pressing enter after typing each.\n");
	scanf("%d%d",&a,&b);
	if(b > a){
		c = a;
		a = b;
		b = c;
	}
	d = a;
	e = b;
	printf("The HCF and LCM of the number %d and %d are %d and %d.\n",a,b,HCF(a,b,e),LCM(a,b,d));
}

int HCF(int a,int b,int e){
	if(a % e == 0 && b % e == 0) return(e);
	else{
		e--;
		HCF(a,b,e);
	}	
}

int LCM(int a,int b,int d){
	if(d % a == 0 && d % b == 0){
		return(d);
	}
	else{
		d++;
		LCM(a,b,d);
	}
}

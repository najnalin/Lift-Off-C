//to find hcf of two numbers
#include <iostream>
using namespace std;
int main() {
    int input1,input2,i,hcf,c,a,b;
    c = 0;
    hcf = 1;
    printf("\nType two numbers.\n");
    scanf("%d",&input1);
    scanf("%d",&input2);
    a = input1;
    b = input2;
    for(i=2;i<100;i++){
        if (c == 1) i=i-1;
        if(input1 % i == 0 && input2 % i == 0){
                input1=input1/i;
                input2=input2/i;
                hcf=hcf*i;
                c=1;
        }
        else c=0;    
    }
    printf("The H.C.F of %d and %d is %d.\n",a,b,hcf);
}

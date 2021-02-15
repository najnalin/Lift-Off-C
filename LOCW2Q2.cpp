//Write a C program to print the sum of all the even elements and even position elements in an array.----LOC week2----question 2
#include <iostream>
using namespace std;
int main() {
    int array[10];
    int i,a,b;
    a=b=i=0;
    for(i=0;i<10;i++){
        array[i]=0;
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("Type a number to be stored in cell number %d.\n",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++){
        if(i % 2 == 0) a = a + array[i];
        if(array[i] % 2 == 0) b = b + array[i];
    }
    printf("The sum of all the even elements and the even position elements in an array is %d.\n",a+b);
}

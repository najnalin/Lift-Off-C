//to print the largest and smallest numbers in an array 
#include <iostream>
using namespace std;
int main() {
    int array[20],i,largest,smallest;
    i = largest = smallest = 0;
    for(i = 0;i < 20;i++) array[i] = 0;
    printf("\nEnter 20 numbers.\n");
    for(i=0;i<20;i++) scanf("%d",&array[i]);
    largest = array[0];
     smallest = array[0];
    for(i=0;i<20;i++) if(largest < array[i]) largest = array[i];
    for(i=0;i<20;i++) if(smallest > array[i]) smallest = array[i];
    printf("The largest number is %d and the smallest number is %d.\n",largest,smallest);
}

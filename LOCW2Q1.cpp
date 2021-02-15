//to calculate sum of digits of a number----LOC W2-----question 1
#include <iostream>
using namespace std;
int main() {
    int input,a;
    input=a=0;
    printf("Type an integer.");
    scanf("%d",&input);
    while(input){
        a=a+input%10;
        input=input/10;
    }
    printf("The sum of digits of the number is %d.",a);
}

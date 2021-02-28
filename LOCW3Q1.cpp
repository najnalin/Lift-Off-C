//to find square of any number using function
#include <iostream>
using namespace std;
int power(int);
int main() {
    int a;
    scanf("%d",&a);
    printf("Square of %d is %d.",a,power(a));
}
int power(int a){
    int b;
    b = a * a;
    return (b);
}

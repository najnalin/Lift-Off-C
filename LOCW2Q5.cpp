#include <iostream>
using namespace std;
int main() {
    int input,i,a,b,n,c;
    input = i = n = a = c = b = 0;
    printf("Enter an odd number.");
    scanf("%d",&input);
    n = input / 2;
    for(i = 0;i <= n;i++){
        c = input - 2*(i + 1);
        for(a = 0;a <= i;a++) printf(" ");
        printf("*");
        for(b = c;b > 0;b--) printf(" ");
        if(i < n) printf("*");
        printf("\n");
    }
    for(i=0;i<n;i++){
        c = 1 + 2 * i;
        for(a = n - i;a > 0;a--) printf(" ");
        printf("*");
        for(b = c;b > 0;b--) printf(" ");
        printf("*");
        printf("\n");
    }
}

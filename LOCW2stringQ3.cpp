#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int i,spc1,spc2,spc3,spc4,num,cap,small,a;
    char array[50];
    i = spc1 = spc2 = spc3 = spc4 = num = cap = a = small = 0;
    printf("\nType a string : ");
    gets(array);
    //printf("%s",array);

    for(i=0;i<50;i++){
        for(a=0;a<=47;a++) if(array[i] == a) spc1++;
        for(a=58;a<=64;a++) if(array[i] == a) spc2++;
        for(a=91;a<=96;a++) if(array[i] == a) spc3++;
        for(a=123;a<=126;a++) if(array[i] == a) spc4++;
        for(a=48;a<=57;a++) if(array[i] == a) num++;
        for(a=65;a<=90;a++) if(array[i] == a) cap++;
        for(a=97;a<=122;a++) if(array[i] == a) small++; 
    }
    printf("\nThere are %d numbers, %d special characters and %d alphabets in the string.\n",num,spc1+spc2+spc3+spc4,small+cap);
}

//to count the total number of words in a string
#include <iostream>
using namespace std;
int main() {
    int input,i,words,a;
    char array[50];
    printf("\nType a sentence putting a full stop at the end.\n");
    for(i = 0;i < 50;i++) array[i] = 23;
    input = words = a = 0;
    for(i = 0;i < 50;i++) scanf("%c",&array[i]);
    //for(i=0;i < 50;i++) printf("%c",array[i]); //array check
    for(i = 0;i < 50;i++){
        a = array[i];
        if(a == ' ') words++;
        else if(a == '.') {
            i = 50;
            words++;
        }
    }
    printf("There are %d words in the sentence.\n",words);
}

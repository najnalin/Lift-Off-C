#include <iostream>
using namespace std;
int main() {
    int array[10],rep[5],i,d,a,c,b,con,n,e;
    i = a = c = b = d = con = n = e = 0;
    printf("\nEnter 10 numbers.\n");
    for(i=0;i<10;i++) scanf("%d",&array[i]);
    for(i=0;i<5;i++) scanf("%d",&rep[i]);
    for(i=0;i<10;i++){
        for(n=0;n<5;n++){
            if(rep[n] == array[i]) con=1;
        }
        a = array[i];
        c=0;
        for(b=i+1;b<10;b++){
            if(a == array[b] && con != 1) {
                c++;
            }
        }
        if(c > 0 && con != 1) {
                printf("The number %d has been repeated %d times.\n",array[i],c+1);
                d++;
                rep[e]=array[i];
                e++;
        }
        con=0;
    }
    if(d==0) printf("No number has been repeated.\n");
}

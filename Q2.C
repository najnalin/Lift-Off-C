//to convert celsius to fahrenheit
#include<stdio.h>
main()
{
float cel,fahr;
cel=fahr=0;
printf("\nType temperature in celsius.\n");
printf("Press enter after typing.\n");
scanf("%f",&cel);
fahr=32+cel*9/5;
printf("The temperature in fahrenheit is %f.\n",fahr);
printf("Press enter to exit.\n");
getch();
return(0);
}
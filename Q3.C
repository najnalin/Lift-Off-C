//input radius of circle , output diameter,circumference and area.
#include<stdio.h>
main()
{
float rad,area,circum;
rad=area=circum=0;
printf("\nType radius of the circle.\n");
printf("Press enter after typing.\n");
scanf("%f",&rad);
circum=3.14*2*rad;
area=3.14*rad*rad;
printf("The diameter of the circle is %6.2f units.\n",2*rad);
printf("The area of the circle is %6.2f square units.\n",area);
printf("The circumference of the circle is %6.2f units.\n",circum);
printf("Press enter to exit.");
getch();
return(0);
}
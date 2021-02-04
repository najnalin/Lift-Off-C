//to calculate grade
#include<stdio.h>
main()
{
float p,c,m,b,cs,mo,per;
char grad;
p=c=m=b=cs=mo=per=0;
printf("Type marks obtained in Physics.\nPress enter after typing.\n");
scanf("%f",&p);
printf("Type marks obtained in Chemistry.\nPress enter after typing.\n");
scanf("%f",&c);
printf("Type marks obtained in Mathematics.\nPress enter after typing.\n");
scanf("%f",&m);
printf("Type marks obtained in Biology.\nPress enter after typing.\n");
scanf("%f",&b);
printf("Type marks obtained in Computer.\nPress enter after typing.\n");
scanf("%f",&cs);
mo=p+c+m+b+cs;
per=mo/5;
if(per>=90) grad='A';
else if(per>=80) grad='B';
else if(per>=70) grad='C';
else if(per>=60) grad='D';
else if(per>=40) grad='E';
else if(per<=40) grad='F';
printf("The percentage obtained by the student is %f.\n",per);
printf("The student has got %c grade.\nPress enter to exit.\n",grad);
getch();
return(0);
}









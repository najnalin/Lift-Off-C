//to enter two number sand perform all the arithmetic operations
#include<stdio.h>
main()
{
float a,b;
int command1,command2,command3,command4;
command1=0;
while(command1 != 5){
	a=b=command1=command2=command3=command4=0;
	printf("\nType two integers pressing enter after typing each.\n");
	scanf("%f%f",&a,&b);
	printf("Do you want to (1)add,(2)subtract,(3)multiply,(4)divide or (5)quit ?\n");
	printf("Enter your choice as 1,2,3,4 or 5.\n");
	scanf("%d",&command1);
	switch (command1){
		case 1:
		printf("On adding %f with %f we get %f.\n",a,b,a+b);
		break;

		case 2:
		printf("Do you want \n(1)%f-%f or \n(2)%f-%f ?\n",a,b,b,a);
		printf("Enter your choice as 1 or 2.\n");
		scanf("%d",&command2);
		if(command2 == 1) printf("On subtracting %f from %f we get %f.\n",b,a,a-b);
		else if(command2 == 2) printf("On subtracting %f from %f we get %f.\n",a,b,b-a);
		else printf("WRONG COMMAND\n");
		break;

		case 3:
		printf("On multiplying %f with %f we get %f.\n",a,b,a*b);
		break;

		case 4:
		printf("Do you want \n(1)%f/%f or \n(2)%f/%f ?\n",a,b,b,a);
		printf("Enter your choice as 1 or 2.\n");
		scanf("%d",&command3);
		if(command3==1) printf("On dividing %f by %f we get %f.\n",a,b,a/b);
		else if(command3==2) printf("On dividing %f by %f we get %f.\n",b,a,b/a);
		else printf("WRONG COMMAND\n");
		break;

		case 5:
		printf("Press enter.\n");
		break;

		default:
		printf("WRONG COMMAND\n");
	}
printf("Do you want to exit ? \n(1)yes or (2)no");
printf("\nEnter your choice as 1 or 2.\n");
scanf("%d",&command4);
if(command4==1){
	command1 = 5;
	printf("Press enter to exit.");
}
else if (command4==2){
	printf("Press enter to perform another calculation.");
	getch();
}
else{
	printf("WRONG COMMAND \nPRESS ENTER TO EXIT");
}
}
getch();
return(0);
}



//to identify vowel and consonant
#include<stdio.h>
main()
{
char input;
printf("\nType an alphabet.\nPress enter after typing.\n");
scanf("%c",&input);
switch (input){
	case 'a':
		printf("The letter is a vowel.");
	break;
	case 'e':
		printf("The letter is a vowel.");
	break;
	case 'i':
		printf("The letter is a vowel.");
	break;
	case 'o':
		printf("The letter is a vowel.");
	break;
	case 'u':
		printf("The letter is a vowel.");
	break;
	default:
	printf("The letter is a consonant.");
}
printf("\nPress enter to exit.\n");
getch();
return(0);
}


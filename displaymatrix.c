#include "displaymatrix.h"

void  displaybox1(int num)
{
	printf("\033[1;1H");
	printf("     ");
	printf("\033[2;1H");
	printf("    |");  
	printf("\033[3;1H");
	printf("  %d |",num);
	printf("\033[4;1H");
	printf(" ___|\n");
}

void  displaybox2(int num)
{
	printf("\033[1;6H");
	printf("     ");
	printf("\033[2;6H");
	printf("|   |");  
	printf("\033[3;6H");
	printf("| %d |",num);
	printf("\033[4;6H");
	printf("|___|\n");
}

void  displaybox3(int num)
{
	printf("\033[1;11H");
	printf("     ");
	printf("\033[2;11H");
	printf("|    ");  
	printf("\033[3;11H");
	printf("| %d  ",num);
	printf("\033[4;11H");
	printf("|___ \n");
}

void  displaybox4(int num)
{
	printf("\033[5;1H");
	printf(" ___\n");
	printf("\033[6;1H");
	printf("    |\n");  
	printf("\033[7;1H");
	printf("  %d |\n",num);
	printf("\033[8;1H");
	printf(" ___|\n");
}

void  displaybox5(int num)
{
	printf("\033[5;6H");
	printf(" ___");
	printf("\033[6;6H");
	printf("|   |");  
	printf("\033[7;6H");
	printf("| %d |",num);
	printf("\033[8;6H");
	printf("|___|\n");
}

void  displaybox6(int num)
{
	printf("\033[5;11H");
	printf(" ___ ");
	printf("\033[6;11H");
	printf("|    ");
	printf("\033[7;11H");
	printf("| %d  ",num);
	printf("\033[8;11H");
	printf("|___ \n");
}

void  displaybox7(int num)
{
	printf("\033[9;1H");
	printf(" ___");
	printf("\033[10;1H");
	printf("    |");  
	printf("\033[11;1H");
	printf("  %d |",num);
	printf("\033[12;1H");
	printf("    |");
}

void  displaybox8(int num)
{
	printf("\033[9;6H");
	printf(" ___");
	printf("\033[10;6H");
	printf("|   |");  
	printf("\033[11;6H");
	printf("| %d |",num);
	printf("\033[12;6H");
	printf("|   |\n");
}

void  displaybox9(int num)
{
	printf("\033[9;11H");
	printf(" ___");
	printf("\033[10;11H");
	printf("|    ");  
	printf("\033[11;11H");
	printf("| %d  ",num);
	printf("\033[12;11H");
	printf("|    \n");
}

int displaybox(int pos, int num)
{
	switch (pos) {
		case 1:
			displaybox1(num);
			break;
		case 2:
			displaybox2(num);
			break;
		case 3:
			displaybox3(num);
			break;
		case 4:
			displaybox4(num);
			break;
		case 5:
			displaybox5(num);
			break;
		case 6:
			displaybox6(num);
			break;
		case 7:
			displaybox7(num);
			break;
		case 8:
			displaybox8(num);
			break;
		case 9:
			displaybox9(num);
			break;
		default:
			printf("invalid position\n");
	}
	return 0;
}

int displayallbox(int num) 
{
        int pos;
	printf("\033[2J");
	printf("\033[H");
        for(pos=1; pos<10; pos++) {
                displaybox(pos, num);
        }
        return 0;
}

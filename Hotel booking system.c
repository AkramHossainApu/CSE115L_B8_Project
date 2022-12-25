#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <unistd.h>

void printWelcome();
int checkLogin();
int showMenu();

int main() {
    printWelcome();

    int login = checkLogin();

    menu:
    if(login == 1){
        int menu = showMenu();
        switch(menu){
			case '1':

				break;
			case '2':

				break;
			case '3':

				break;
			case '4':

				break;
			case '5':

				break;
			case '6':

			    break;
            default:
                printf("\n\n\n\n\n\n\t\t\t\t\t    Incorrect Input");
                printf("\n\n\n\t\t\t\t\t      Enter again");
                sleep(1);
                system("cls");
                goto menu;

        }
    }

    return 0;
}

void printWelcome() {
    printf("\t    ----------------------------------------------------------------------------\n");
	printf("\t   |                                                                            |\n");
	printf("\t   |  WW              WW EEEEEEE LL      CCCCCCC  OOOOOO  MM        MM EEEEEEE  |\n");
	printf("\t   |   WW            WW  EE      LL      CC      OO    OO MM MM  MM MM EE       |\n");
	printf("\t   |    WW    WW    WW   EEEEE   LL      CC      OO    OO MM   MM   MM EEEEE    |\n");
	printf("\t   |     WW WW  WW WW    EE      LL      CC      OO    OO MM        MM EE       |\n");
	printf("\t   |      WW      WW     EEEEEEE LLLLLLL CCCCCCC  OOOOOO  MM        MM EEEEEEE  |\n");
	printf("\t   |                                                                            |\n");
	printf("\t    ----------------------------------------------------------------------------\n");
	sleep(2);
    system("cls");
}

int checkLogin() {
    int i;
    char name[100], pass[50], c;
    jump:
    printf("\n\t\t\t\t      _____- Enter Username -_____\n\n\t\t\t\t\t\t");
    gets(name);
    printf("\n\t\t\t\t       _____-Enter Password-_____\n\n\t\t\t\t\t\t");
    gets(pass);

    if(strcmp(name,"user") != 0 && strcmp(pass,"pass") != 0) {
        printf("\n\n\n\t\t\t\t   !!Incorrect Username and Password!!\n\n\n");
        printf("\n\t\t\t\t      Press any key to enter again\n\n\t\t\t\t\t\t   ");
        getch();
        system("cls");
        goto jump;
    }else if(strcmp(name,"user") != 0 && strcmp(pass,"pass") == 0) {
        printf("\n\n\n\t\t\t\t\t !!Incorrect Username!!\n\n\n");
        printf("\n\t\t\t\t      Press any key to enter again\n\n\t\t\t\t\t\t   ");
        getch();
        system("cls");
        goto jump;
    }else if((strcmp(name,"user") == 0 && strcmp(pass,"pass") != 0)) {
        printf("\n\n\n\t\t\t\t\t !!Incorrect Password!!\n\n\n");
        printf("\n\t\t\t\t      Press any key to enter again\n\n\t\t\t\t\t\t   ");
        getch();
        system("cls");
        goto jump;
    }else {
        system("cls");
        return 1;
    }
}

int showMenu() {
    int num;
    printf("____________________________________________-|MAIN MENU|-___________________________________________\n\n");
    printf("\t\t\t\t _-Please enter your choice for menu-_\n\n");
    printf("\n\t\t\t\t\t Enter 1 -> Book a room");
    printf("\n\t\t\t\t\t------------------------");
    printf("\n\t\t\t\t     Enter 2 -> View Customers List");
    printf("\n\t\t\t\t    --------------------------------");
    printf("\n\t\t\t       Enter 3 -> Delete a Customer From the List");
    printf("\n\t\t\t      --------------------------------------------");
    printf("\n\t\t\t       Enter 4 -> Search a Customer From the List");
    printf("\n\t\t\t      --------------------------------------------");
    printf("\n\t\t\t\t    Enter 5 -> Edit a Customer's Data");
    printf("\n\t\t\t\t   -----------------------------------");
    printf("\n\t\t\t\t\t     Enter 6 -> Exit");
    printf("\n\t\t\t\t\t    -----------------\n\t\t\t\t\t\t     ");
    num = getch();
    system("cls");
    return num;
}


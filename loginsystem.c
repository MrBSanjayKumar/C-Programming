#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

struct user {
    char fullname[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];
};

void takeinput(char ch[50]) {
    fgets(ch, 50, stdin);
    ch[strlen(ch) - 1] = 0;
}

char generateusername(char email[50], char username[50]) {
    int i;
    for (i = 0; i < strlen(email); i++) {
        if (email[i] == '@')
            break;
        else
            username[i] = email[i];
    }
}

void takepassword(char pwd[50]) {
    int i = 0;
    char ch;
    while (1) {
        ch = getch();
        if (ch == ENTER || ch == TAB) {
            pwd[i] = '\0';
            break;
        } else if (ch == BCKSPC) {
            if (i > 0) {
                i--;
                printf("\b \b");
            }
        } else {
            pwd[i++] = ch;
            printf("*");
        }
    }
}

int main() {
    system("color 04");
    FILE  *fp;
    int opt;
    int usrFound=0;
    struct user user;
    char password2[50];
    char username[50], pword[50];
    struct user usr;

    
    printf("\n\t\t========== Welcome to the authentication system ==========");
    printf("\nPlease choose your operation:");
    printf("\n1. Signup");
    printf("\n2. Login");
    printf("\n3. Exit");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch (opt) {
        case 1:
        	system("cls");
            printf("\nEnter your full name:\t");
            takeinput(user.fullname);
            printf("\nEnter your email:\t");
            takeinput(user.email);
            printf("\nEnter your phone number:\t");
            takeinput(user.phone);
            printf("\nEnter your password:\t");
            takepassword(user.password);
            printf("\n\nConfirm your passowrd:\t");
            takepassword(password2);
            
            if(!strcmp(user.password,password2)){
            	generateusername(user.email,user.username);
            	fp = fopen("User.text","a+");
            	fwrite(&user,sizeof(struct user),1,fp);
            	if(fwrite !=0){
				printf("\n\nuser registrtion success, Your user name is %s ",user.username);
            	}else{
            		//sleep(10);
					printf("\n\nSorry! something went wrong :(");
					fclose(fp);
				}
			}else{
				printf("\n\nPassword don't matched");
				Beep(750,300);
			}
            
            break;

        case 2:
			
			printf("\nEnter your username:\t");
			takeinput(username);
			printf("\nEnter your password:\t");
			takepassword(pword);
			system("cls");
			fp=fopen("User.text","r");
			while(fread(&usr,sizeof(struct user),1,fp)){
				if(!strcmp(usr.username,username)){
					if(!strcmp(usr.password,pword)){
						printf("\n\t\t\t\t\t\tWelcome %s",usr.fullname);
						printf("\n\n|Full Name:\t%s",usr.fullname);
						printf("\n\n|Email:\t%s",usr.email);
						printf("\n\n|Usernmae:\t%s",usr.username);
						printf("\n\n|Contact no:\t%s",usr.phone);
					}
					else{
						//sleep(10);
						printf("\n\nInvaid password!");
						Beep(800,800);
					}
					usrFound=1;
				}
			}
			if(!usrFound){
				printf("\n\nUser is not registered!");
				Beep(800,300);
			}
			fclose(fp);
            break;

        case 3:
            exit(0);
            break;

        default:
            printf("Invalid option.\n");
            break;
    }

    return 0;
}


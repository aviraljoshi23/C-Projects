

//------------------------Bank Management System---------------------//
//Team CODERISERS //
/*Members:-
  -----Aayushi-----
  ------Aarti------
  ------Aviral-----
  -----Kareena-----
  -----Shubham-----
*/
//Project Contributor
// Aviral & Shubham //

// Requirements for the Project
/*
1)Basic File Handling understanding.
    fopen() - used to open an existing file or a new file.

    fprintf() - writing data into an available file.

    fscanf() - reading the data available in a file.

    fclose() - used to close the program file.

    fseek() - used to set the file pointer to the intended file position.

    fgetc() - 	reading the character from an available file.

    fflush() - The function fflush(stdin) is used to flush the output buffer of the stream.


Functions.
Pointers.
Switch Case.

 */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

void gotoxy(int ,int );
void menu();
void add();
void view();
void search();
void deposit();
int get_account_no(int accountno);
void modify();
void deleterec();
struct customer
{
    char name[20];
    char mobile[10];
    int account_number;
    int age;
    char type[20];
    char address[60];
    int amount;

};
int lower=1000,upper=9999;
int main()
{
    gotoxy(15,10);
    printf("<--: Bank Management System:-->");
    gotoxy(19,15);
    printf("Press any key to continue.");
    getch();
    menu();
    return 0;
}
void menu()
{
    int choice;
    system("cls");
    gotoxy(10,3);
    printf("<--:MENU:-->");
    gotoxy(10,5);
    printf("Enter appropriate number to perform following task.");
    gotoxy(10,7);
    printf("1 : Add Customer.");
    gotoxy(10,8);
    printf("2 : View Customers Details.");
    gotoxy(10,9);
    printf("3:  Deposit.");
    gotoxy(10,10);
    printf("4 : Search Record.");
    gotoxy(10,11);
    printf("5 : Update Record.");
    gotoxy(10,12);
    printf("6 : Delete.");
    gotoxy(10,13);
    printf("7 : Exit.");
    gotoxy(10,15);
    printf("Enter your choice.");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        add();
        break;

    case 2:
        view();
        break;

    case 3:
        deposit();
        break;

    case 4:
        search();
        break;

    case 5:
        modify();
        break;

    case 6:
        deleterec();
        break;

    case 7:
        exit(1);
        break;

    default:
        gotoxy(10,17);
        printf("Invalid Choice.");
    }
}
void add()
{
    FILE *fp;
    struct customer  c;

    char another ='y';
    system("cls");

    fp = fopen("record.txt","ab+");
    if(fp == NULL){
        gotoxy(10,5);
        printf("Error opening file");
        exit(1);
    }
    system("cls");
    fflush(stdin);
    while(another == 'y')
    {
        gotoxy(10,3);
        printf("<--:ADD RECORD:-->");
        gotoxy(10,5);
        printf("Enter details of customer.");
        gotoxy(10,7);
        printf("Enter Name : ");
        gets(c.name);
        gotoxy(10,8);
        printf("Enter Mobile Number : ");
        gets(c.mobile);
        gotoxy(10,9);
        printf("Enter Address : ");
        gets(c.address);
        gotoxy(10,10);
        printf("Enter Account Type : ");
        gets(c.type);
        gotoxy(10,11);
        printf("Enter Age : ");
        scanf("%d",&c.age);
        gotoxy(10,12);
        printf("Enter the New  Balance Minimum(5000) : ");
        scanf("%d",&c.amount);
        // Random Account Number Generation
        c.account_number = get_account_no(((rand()%(upper-lower+1))+lower));
        if(c.account_number!=0)
            fwrite(&c,sizeof(c),1,fp);
        gotoxy(10,15);
        printf("Want to add of another record? Then press 'y' else 'n'.");
        fflush(stdin);
        another = getch();
        system("cls");
        fflush(stdin);
    }
    fclose(fp);
    gotoxy(10,18);
    printf("Press any key to continue.");
    getch();
    menu();
}
int get_account_no(int accountno){
    struct customer c;
    int alloted = 0;
    FILE *fp;
    fp = fopen("record.txt","rb+");
    while(fread(&c,sizeof(c),1,fp))
    {
        if(c.account_number == accountno){
                alloted=1;
        }
    }
    if(alloted==0)
        return accountno;
    else
        return get_account_no(((rand()%(upper-lower+1))+lower));
    fclose(fp);
}
void view()
{
    FILE *fp;
    int i=1,j;
    struct customer c;
    system("cls");
    gotoxy(10,3);
    printf("<--:VIEW RECORD:-->");
    gotoxy(10,5);
    printf("---------------------------------------------------------------------------------------------");
    gotoxy(10,6);
    printf("S.No   Name of Customer    Mobile No   Account No  Account Type   Address   Age    Balance");
    gotoxy(10,7);
    printf("----------------------------------------------------------------------------------------------");
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,8);
        printf("Error opening file.");
        exit(1);
    }
    j=8;
    while(fread(&c,sizeof(c),1,fp) == 1){
        gotoxy(10,j);
        printf("%-10d%-15s%-15s%-15d%-12s%-10s%-10d%-10d",i,c.name,c.mobile,c.account_number,c.type,c.address,c.age,c.amount);
        i++;
        j++;
    }
    fclose(fp);
    gotoxy(10,j+3);
    printf("Press any key to continue.");
    getch();
    menu();
}
void search()
{
    FILE *fp;
    struct customer c;
    int Account_Pin;
    system("cls");
    gotoxy(10,3);
    printf("<--:SEARCH RECORD:-->");
    gotoxy(10,5);
    printf("Enter Account Number : ");
    fflush(stdin);
    scanf("%d",&Account_Pin);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
//569825
    while(fread(&c,sizeof(c),1,fp ) == 1){
        //if(strcmp(Account_Pin,c.account_number) == 0)
        if(Account_Pin==c.account_number){
            gotoxy(10,8);
            printf("Name : %s",c.name);
            gotoxy(10,9);
            printf("Mobile Number : %s",c.mobile);
            gotoxy(10,10);
            printf("Account No : %d",c.account_number);
            gotoxy(10,11);
            printf("Account Type : %s",c.type);
            gotoxy(10,12);
            printf("Address : %s",c.address);
            gotoxy(10,13);
            printf("Age : %d",c.age);
            gotoxy(10,14);
            printf("Balance in Account : %d",c.amount);
            }
    }
    fclose(fp);
    gotoxy(10,16);
    printf("Press any key to continue.");
    getch();
    menu();
}
//785461
void modify()
{
    int Account_Pin;
    FILE *fp;
    struct customer c;
    system("cls");
    gotoxy(10,3);
    printf("<--:MODIFY RECORD:-->");
    gotoxy(10,5);
    printf("Enter Account Pin: ");
    fflush(stdin);
    scanf("%d",&Account_Pin);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&c,sizeof(c),1,fp) == 1)
    {
        //if(strcmp(customer_name,c.name) == 0)
        if(Account_Pin==c.account_number){
            gotoxy(10,7);
            printf("Enter name: ");
            gets(c.name);
            gotoxy(10,8);
            printf("Enter mobile number : ");
            //gets(c.mobile);
            gets(c.mobile);
            //gotoxy(10,9);
            //printf("Enter Account : ");
            //scanf("%d",&c.account_number);
            gotoxy(10,10);
            printf("Enter Type : ");
            fflush(stdin);
            gets(c.type);
            gotoxy(10,11);
            printf("Enter Address : ");
            fflush(stdin);
            gets(c.address);
            gotoxy(10,12);
            printf("Enter Age : ");
            scanf("%d",&c.age);
            fseek(fp ,-sizeof(c),SEEK_CUR);
            fwrite(&c,sizeof(c),1,fp);
            break;
        }
    }
    fclose(fp);
    gotoxy(10,16);
    printf("Press any key to continue.");
    getch();
    menu();
}
void deleterec()
{
    int account_pin;
    FILE *fp,*ft;
    struct customer c;
    system("cls");
    gotoxy(10,3);
    printf("<--:DELETE RECORD:-->");
    gotoxy(10,5);
    printf("Enter Account Pin : ");
    scanf("%d",&account_pin);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    ft = fopen("temp.txt","wb+");
    if(ft == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    while(fread(&c,sizeof(c),1,fp) == 1){
        //if(strcmp(customer_name,c.name)!=0)
          if(account_pin==c.account_number)
            fwrite(&c,sizeof(c),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("record.txt");
    rename("temp.txt","record.txt");
    gotoxy(10,10);
    printf("Press any key to continue.");
    getch();
    menu();
}
void deposit()
{
    int deposit;
    int Account_Pin;
    FILE *fp;
    struct customer c;
    system("cls");
    gotoxy(10,3);
    printf("<----Deposit------>");
    gotoxy(10,5);
    printf("Enter the Account Number :");
    fflush(stdin);
    scanf("%d",&Account_Pin);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error Opening file");
        exit(1);
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&c,sizeof(c),1,fp)==1)
    {
        if(Account_Pin==c.account_number)
        {
            gotoxy(10,7);
            printf("Enter the Amount for Deposite : ");
            scanf("%d",&deposit);
            c.amount+=deposit;
            gotoxy(10,12);
            printf("Current Balance is [%d]",c.amount);
            fseek(fp,-sizeof(c),SEEK_CUR);
            fwrite(&c ,-sizeof(c),1,fp);
            break;
        }
    }
    fclose(fp);
    gotoxy(10,16);
    printf("Press any key to continue");
    getch();
    menu();
}
void gotoxy(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


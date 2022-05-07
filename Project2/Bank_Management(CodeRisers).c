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
void transaction();
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
    printf("\n\n\n\t\t---------------------------------------");
    printf("\n\t\t<--: Bank Management System:-->");
    printf("\n\t\t-------------------------------------------");
    printf("\n\n\t\tPress any key to continue.");
    getch();
    menu();
    return 0;
}
void menu()
{
    int choice;
    system("cls");
    printf("\n\n\t\t<--:Welcome to CodeRisers Bank:-->");
    printf("\n\n\tChoose any of the Option for continuing.");
    printf("\n\n\n\t1 : Add Customer.");
    printf("\n\t2 : View Customers Details.");
    printf("\n\t3:  Transaction.");
    printf("\n\t4 : Search Record.");
    printf("\n\t5 : Update Record.");
    printf("\n\t6 : Delete.");
    printf("\n\t7 : Exit.");
    printf("\n\n\tEnter your choice.");
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
        transaction();
        break;

    case 4:
        search();
        break;

    case 5:
        updation();
        break;

    case 6:
        deleterec();
        break;

    case 7:
        exit(1);
        break;

    default:
        printf("\n\n\t\t[Invalid Choice].");
    }
}
void add()
{
    int chance = 1;
    FILE *fp;
    struct customer  c;

    char another ='y';
    system("cls");
    fp = fopen("record.txt","ab+");
    if(fp == NULL){
        printf("\n\n\tError opening file");
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
        reamount:
        printf("\n\n\t\t Enter the New  Balance Minimum(5000) : ");
        scanf("%d",&c.amount);
        system("cls");
        if(c.amount<5000)
        {
            if(chance<4)
            {
            printf("\n\n\t\t\[Please Maintain the Requirements]");
            printf("\n\n\t\t Your Chance [%d]",chance);
            chance++;
            goto reamount;

            }
            else{
                menu();
            }

        }
        // Random Account Number Generation
        c.account_number = get_account_no(((rand()%(upper-lower+1))+lower));
        if(c.account_number!=0)
            fwrite(&c,sizeof(c),1,fp);
        printf("\n\n\t\tWant to add of another record? Then press 'y' else 'n'.");
        fflush(stdin);
        another = getch();
        system("cls");
        //fflush(stdin);
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
    int i=1,j=8;
    struct customer c;
    system("cls");
    printf("\n\n\t\t\t\t<--:Customer List:-->");
    gotoxy(10,5);
    printf("---------------------------------------------------------------------------------------------");
    gotoxy(10,6);
    printf("S.No   Name of Customer    Mobile No   Account No  Account Type   Address   Age    Balance");
    gotoxy(10,7);
    printf("----------------------------------------------------------------------------------------------");
    fp = fopen("record.txt","rb");
    if(fp == NULL){
        printf("\n\n\tError in opening file.");
        exit(1);
    }
    //j=8;
    while(fread(&c,sizeof(c),1,fp) == 1){
        gotoxy(10,j);
        printf("%-7d%-20s%-15s%-10d%-13s%-12s%-10d%-10d",i,c.name,c.mobile,c.account_number,c.type,c.address,c.age,c.amount);
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
    printf("\n\n\t\t\t\t<--:SEARCH RECORD:-->");
    gotoxy(10,5);
    printf("\n\n\t\t\tEnter Account Number : ");
    fflush(stdin);
    scanf("%d",&Account_Pin);
    fp = fopen("record.txt","r");
    if(fp == NULL){
        printf("\n\n\tError opening file");
        exit(1);
    }
//569825
    while(fread(&c,sizeof(c),1,fp ) == 1){
        //if(strcmp(Account_Pin,c.account_number) == 0)
        if(Account_Pin==c.account_number){
            printf("\n\tACCOUNT HOLDER : %s",c.name);
            printf("\n\t----------------------------");
            printf("\n\tPHONE NUMBER : %s",c.mobile);
            printf("\n\t----------------------------");
            printf("\n\tACCOUNT NUMBER : %d",c.account_number);
            printf("\n\t----------------------------");
            printf("\n\tACCOUNT TYPE : %s",c.type);
            printf("\n\t----------------------------");
            printf("\n\tADDRESS OF ACCOUNT HOLDER : %s",c.address);
            printf("\n\t------------------------------");
            printf("\n\tAGE : %d",c.age);
            printf("\n\t----------------------------");
            printf("\n\t\tBALANCE IN ACCOUNT : %d",c.amount);
            printf("\n\t----------------------------");
            }
    }
    fclose(fp);
    printf("\n\n\t\t\Press any key to continue.");
    getch();
    menu();
}
//785461
void updation()
{
    int Account_Pin,choice,ch,flag=0;
    FILE *fp;
    struct customer c;
    system("cls");
    printf("\n\n\t\t<--:MODIFY RECORD:-->");
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
            update:
            system("cls");
            printf("\n----------------------Choose Any Option--------------------\n");
            printf("1. Name \n");
            printf("2. Mobile  Number \n");
            printf("3. Account Type  \n");
            printf("4. Address  \n");
            printf("5. Age  \n");
            printf("\n\n\t\tEnter Any of above Index    ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("Change Name: ");
                scanf("%s",&c.name);
                break;

            case 2:
                printf("Change Contact : ");
                scanf("%s",&c.mobile);
                break;
            case 3:
                printf("Enter Type : ");
                fflush(stdin);
                gets(c.type);
                break;

            case 4:
                printf("Enter Address : ");
                fflush(stdin);
                gets(c.address);
                break;

            case 5:
                printf("Enter Age : ");
                scanf("%d",&c.age);
                break;

            default:
                gotoxy(10,18);
                printf("\n\t\t---------------------[Invalid Choice]------------------\n");

            }
            system("cls");
            printf("::-----::----::Would you like to make more changes::------::------::\n");
            printf("\n\n\t\tWrite [1 FOR YES] or [0 FOR NOT]");
            scanf("%d",&ch);
            if(ch==1)
            {
               goto update;
            }
            //fseek(fp ,-sizeof(c),SEEK_CUR);
            fseek(fp, sizeof(c),SEEK_SET );
            fwrite(&c,sizeof(c),1,fp);
            break;
        }

    }
    fclose(fp);
    printf("\n\n\tPress any key to continue.");
    getch();
    menu();
}
void deleterec()
{
    int account_pin,found=0;
    FILE *fp,*ft;
    struct customer c;
    system("cls");
    printf("\n\n\t\t<--:DELETE RECORD:-->");
    printf("\n\n\t\tEnter Account Pin : ");
    scanf("%d",&account_pin);
    fp = fopen("record.txt","rb+");
    ft = fopen("temp.txt","wb+");
    while(fread(&c,sizeof(c),1,fp))
    {
        if(account_pin== c.account_number){
            found = 1;
        }
        else
            fwrite(&c,sizeof(c),1,ft);
    }
    fclose(fp);
    fclose(ft);
    if(found){
        ft = fopen("temp.txt","r");;
        fp = fopen("record.txt","rb+");
        while(fread(&c,sizeof(c),1,ft)){
            fwrite(&c,sizeof(c),1,ft);
        }

    fclose(fp);
    fclose(ft);
    }
    remove("record.txt");
    rename("temp.txt","record.txt");
    printf("\n\n\t\t\t Account Deleted");
    printf("\n\n\t\t\t Press any key to continue.");
    getch();
    menu();
}
void transaction()
{
    int Account_Pin,deposit,withdraw,choice,flag=0;
    FILE *fp;
    struct customer c;
    system("cls");
    gotoxy(10,3);
    printf("<----Transaction------>");
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
    while(fread(&c,sizeof(c),1,fp)==1)
    {
        flag=0;
        if(Account_Pin==c.account_number)
        {
            system("cls");
            printf("\n\n\n\t\tACCOUNT HOLDER   %s",c.name);
            printf("\n\t\t----------------------------------------");
            printf("\n\t\tACCOUNT BALANCE RS [%d]",c.amount);
            printf("\n\t\t----------------------------------------");
            printf("\n\n\t\tCHOOSE ANY OPTION");
            printf("\n\n\t 1. DEPOSIT");
            printf("\n\n\t 2. WITHDRAW ");
            printf("\n\n\n\t PASS THE INPUT ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("\n\n\n\t\tEnter Amount for deposit :- ");
                scanf("%d",&deposit);
                c.amount+=deposit;
                break;

            case 2:
                 printf("Enter the Amount for Withdraw :- ");
                 scanf("%d",&withdraw);
                 if(c.amount<withdraw)
                 {
                     printf("\n\n\t:::Sorry You Don't have sufficient money:::");
                     break;
                 }
                 else{
                    c.amount = c.amount-withdraw;
                    break;
                 }
            default:
                printf("\n\n\t------------------------Invalid Option-----------------------------------\n");

            }
            printf("\n\t----------------------------------------");
            printf("\n\tCurrent Balance is [%d]",c.amount);
            printf("\n\t----------------------------------------");

            //fseek(fp,-sizeof(c),SEEK_CUR);
            fseek(fp, sizeof(c),SEEK_SET );
            fwrite(&c ,sizeof(c),1,fp);
            break;
        }
        else if(Account_Pin!=c.account_number)
        {
            flag=1;
        }

    }
    if(flag==0)
    {
        printf("\n\n\t\tThank You");
    }
    else if(flag==1)
    {
        printf("\n\n\t\tSorry No Account found");
    }
    fclose(fp);
    printf("\n\nPress any key to continue");
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

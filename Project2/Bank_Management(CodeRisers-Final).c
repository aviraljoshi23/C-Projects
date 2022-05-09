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
struct bank
{
    int bank_fund;
};
int lower=1000,upper=9999;
int main()
{
    system("cls");
    gotoxy(17,10);
    printf("--------------------------------------------");
    gotoxy(17,11);
    printf(": CODERISER BANK OF INFOBEANS FOUNDATION :");
    gotoxy(17,12);
    printf("--------------------------------------------");
    gotoxy(17,17);
    printf("Press any key to continue.");
    getch();
    menu();
    return 0;
}
void menu()
{
    int choice;
    char check[50];
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
    struct bank b;

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
        printf("-----------------------------");
        gotoxy(10,9);
        printf("Enter Mobile Number : ");
        gets(c.mobile);
        gotoxy(10,10);
        printf("-----------------------------");
        gotoxy(10,11);
        printf("Enter Address : ");
        gets(c.address);
        gotoxy(10,12);
        printf("-----------------------------");
        gotoxy(10,13);
        printf("Enter Account Type : ");
        gets(c.type);
        gotoxy(10,14);
        printf("-----------------------------");
        gotoxy(10,15);
        printf("Enter Age : ");
        scanf("%d",&c.age);
        gotoxy(10,16);
        printf("-----------------------------");
        gotoxy(10,17);
        reamount:
        printf("\n\n\t\t Enter the New  Balance Minimum(5000) : ");
        scanf("%d",&c.amount);
        gotoxy(10,18);
        printf("-----------------------------");
        system("cls");
        if(c.amount<5000)
        {
            if(chance<4)
            {
                gotoxy(10,14);
            printf("[Please Maintain the Requirements]");
            gotoxy(10,15);
            printf("-------------------------------------");
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
        gotoxy(10,7);
        printf("CONTINUE OR NOT ? THEN PRESS 'Y' else 'N'.");
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
    printf("-------------------------------------------------------------------------------------------------------");
    gotoxy(10,6);
    printf("S.No   Name of Customer     Mobile No    Account No   Account Type    Address     Age      Balance");
    gotoxy(10,7);
    printf("-------------------------------------------------------------------------------------------------------");
    fp = fopen("record.txt","rb");
    if(fp == NULL){
        printf("\n\n\tError in opening file.");
        exit(1);
    }
    //j=8;
    while(fread(&c,sizeof(c),1,fp) == 1){
        gotoxy(10,j);
        printf("%-7d%-20s%-15s%-12d%-15s%-13s%-10d%-10d",i,c.name,c.mobile,c.account_number,c.type,c.address,c.age,c.amount);
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
    while(fread(&c,sizeof(c),1,fp ) == 1){
        if(Account_Pin==c.account_number){
            printf("\n\tACCOUNT HOLDER : %s",c.name);
            printf("\n\t----------------------------------");
            printf("\n\tPHONE NUMBER : %s",c.mobile);
            printf("\n\t----------------------------------");
            printf("\n\tACCOUNT NUMBER : %d",c.account_number);
            printf("\n\t-----------------------------------");
            printf("\n\tACCOUNT TYPE : %s",c.type);
            printf("\n\t-----------------------------------");
            printf("\n\tADDRESS OF ACCOUNT HOLDER : %s",c.address);
            printf("\n\t------------------------------------");
            printf("\n\tAGE : %d",c.age);
            printf("\n\t------------------------------------");
            printf("\n\t\tBALANCE IN ACCOUNT : Rs %d",c.amount);
            printf("\n\t-------------------------------------");
            }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    menu();
}
void updation()
{
    int Account_Pin,choice,ch,flag=0,a;
    FILE *fp;
    struct customer c;
    redirect:
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
    while(fread(&c,sizeof(c),1,fp)==1)
    {
        if(Account_Pin==c.account_number){
            update:
            system("cls");
            gotoxy(10,1);
            printf("ACCOUNT HOLDER   %s",c.name);
            gotoxy(10,2);
            printf("----------------------------------------");
            gotoxy(10,3);
            printf("ACCOUNT BALANCE RS [%d]",c.amount);
            gotoxy(10,4);
            printf("----------------------------------------");
            gotoxy(10,5);
            printf("----------------------Choose Any Option--------------------");
            gotoxy(10,6);
            printf("1. Name ");
            gotoxy(10,7);
            printf("2. Mobile  Number");
            gotoxy(10,8);
            printf("3. Account Type");
            gotoxy(10,9);
            printf("4. Address ");
            gotoxy(10,10);
            printf("5. Age  ");
            gotoxy(10,12);
            printf("Enter Any of above Index >>> ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("Change Name: ");
                fflush(stdin);
                gets(c.name);
                break;

            case 2:
                printf("Change Contact : ");
                fflush(stdin);
                gets(c.name);
                //scanf("%s",&c.mobile);
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
                gotoxy(10,15);
                printf("---------------------[Invalid Choice]------------------\n");
                break;

            }
            gotoxy(10,18);
            printf("::-----::----::Try Again::------::------::");
            gotoxy(10,20);
            printf("PRESS NO. 1 FOR YES");
            gotoxy(10,21);
            printf("PRESS NO.2 FOR NOT");
            gotoxy(10,22);
            scanf("%d",&ch);
            switch(ch)
            {
            case 1:
                goto update;
                break;

            default:
                break;
            }
            //fseek(fp ,-sizeof(c),SEEK_CUR);
            fseek(fp,-sizeof(c),SEEK_CUR);
            fwrite(&c,sizeof(c),1,fp);
            break;
        }
        /*else if(Account_Pin!=c.account_number)
        {
            gotoxy(10,9);
            printf("Invalid Account Number (Account Not Found)!!!");
            gotoxy(10,12);
            printf("Want to try Again ? Select Any thing");
            gotoxy(10,14);
            printf("1.YES");
            gotoxy(10,15);
            printf("2.NO");
            gotoxy(10,17);
            scanf("%d",&a);
            switch(a)
            {
            case 1:
                goto redirect;
                break;
            case 2:
                break;
            }
        }*/
    }
    fclose(fp);
    printf("\n\n\tPress any key to continue.");
    getch();
    menu();
}
void deleterec()
{
    int account_pin,found=0,charge;
    FILE *fp,*ft;
    struct customer c;
    struct bank b;
    system("cls");
    gotoxy(10,6);
    printf("-----[DELETE RECORD]-----");
    gotoxy(10,8);
    printf("Enter Account Pin : ");
    scanf("%d",&account_pin);
    fp = fopen("record.txt","rb+");
    ft = fopen("temp.txt","wb+");
    while(fread(&c,sizeof(c),1,fp)==1)
    {
        if(account_pin==c.account_number){
            found = 1;
            if(c.amount>100)
            {
                charge=(c.amount/100)*3.5;
                b.bank_fund+=charge;

            }
            else if(c.amount<100)
            {
                gotoxy(10,9);
                printf("Penalty Receipt Send to %s",c.name);
                gotoxy(10,10);
                printf("-----------------------------------");
                charge=500;
            }
        }
        else
            fwrite(&c,sizeof(c),1,ft);
    }
    fclose(fp);
    fclose(ft);
    if(found==1){
        ft = fopen("temp.txt","rb+");;
        fp = fopen("record.txt","rb+");
        while(fread(&c,sizeof(c),1,ft)){
            fwrite(&c,sizeof(c),1,ft);
        }
    fclose(fp);
    fclose(ft);
    remove("record.txt");
    rename("temp.txt","record.txt");
    gotoxy(10,11);
    printf("Account Deleted");

    gotoxy(10,12);
    printf(" Total Processing charges Rs %d",charge);
    }
    else if(found==0)
    {
        gotoxy(10,12);
        printf("ACCOUNT NOT FOUND");
    }
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
            fseek(fp,-sizeof(c),SEEK_CUR);
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

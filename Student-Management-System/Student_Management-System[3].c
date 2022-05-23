#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

void gotoxy(int ,int );
void menu();
void add();
void view();
void marksheet();
void search();
void updation();
void deleterec();
struct student
{
    char name[25];
    int total,percentage,sum_ESE,sum_CIA;
    int mobile;
    int roll_no;
    char standard_class[10];
    char address[60];
    char fathers_name[25];
    int dd,mm,yyyy;
    int session;
};
struct sem1
{
    int roll_no1,bca_101,bca_102,bca_103,bca_104,bca_105;
};
struct sem2{
    int roll_no2,bca_201,bca_202,bca_203,bca_204,bca_205;
    };
struct sem3{

    int bca_301,bca_302,bca_303,bca_304,bca_305;
    };
struct sem4{
    int bca_401,bca_402,bca_403,bca_404,bca_405;
    };
struct sem5{
    int bca_501,bca_502,bca_503,bca_504,bca_505;
    };
struct sem6{
    int bca_601,bca_602,bca_603,bca_604,bca_605;
    };
int lower=1000,upper=9999;
int main()
{
    system("cls");
    gotoxy(27,2);
    system("COLOR F3");
    printf("______________________________________________");
    gotoxy(27,3);
    printf("\t\t:University of Indore :");
    gotoxy(27,4);
    printf("_______________________________________________");
    gotoxy(16,10);
    printf("Software Developed By Team CodeRisers");
    gotoxy(16,12);
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
    system("COLOR 03");
    gotoxy(10,4);
    printf("\t\t\t\e[1;96m<--:Welcome Admin:-->");
    gotoxy(10,5);
    printf("\t________________________________________________________");
    gotoxy(10,7);
    printf("Choose any of the Option for continuing.");
    gotoxy(10,8);
    printf("<-:---------------------------------------------:->");
    printf("\n\n\n\t1 : New Student Details.");
    printf("\n\t2 : Student Semester Pass/Fail List");
    printf("\n\t3:  Student Semester Result");
    printf("\n\t4 : Search Student Record.");
    printf("\n\t5 : Update Student Record.");
    printf("\n\t6 : Exit.");
    printf("\n\n\tEnter your choice.  ");
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
        semester1();
        break;

    case 4:
        search();
        break;
    case 5:
        updation();
        break;

    case 6:
        exit(1);
        break;

    default:
        printf("\n\n\t\t[Invalid Choice].");
    }
}
void add()
{
    int chance = 1,ch;
    FILE *fp;
    struct student  c;
    char another ='y';
    system("cls");
    fp = fopen("record.txt","a+");
    if(fp == NULL){
        printf("\n\n\tError opening file");
        exit(1);
    }
    system("cls");
    fflush(stdin);

    while(another == 'y')
    {
        gotoxy(25,1);
        printf("\tUniversity of Indore");
        gotoxy(10,3);
        printf("\t\t :->> Add New <<-:");
        gotoxy(10,5);
        printf("Enter the details of customer");
        gotoxy(10,8);
        printf("Enter Student Name : ");
        gets(c.name);
        gotoxy(10,10);
        printf("Enter the Session : ");
        scanf("%d",&c.session);
        rl:
        gotoxy(10,12);
        printf("Enter Roll.Number :");
        scanf("%d",&c.roll_no);
        if(c.roll_no<10000||c.roll_no>20000)
        {
            system("cls");
            gotoxy(10,10);
            printf("Please Enter Roll No Correctly ");
            getch();
            goto rl;
        }
        fwrite(&c,sizeof(c),1,fp);
        printf("CONTINUE OR NOT ? THEN PRESS 'Y' else 'N'.");
        fflush(stdin);
        another = getch();
        system("cls");
    }
    fclose(fp);
    gotoxy(10,18);
    printf("Press any key to continue.");
    getch();
    menu();
}
int atktchecker(int a)
{
    if(a<21)
    {
    return printf("ATKT");
    }
}

void semester1()
{
    FILE *fp;
    FILE *fs;
    struct sem1 s1;
    struct student c;
    int roll_num,sum=0,count=0;
    float avg;
    system("cls");
    printf("\n\n\t\t\tEnter Roll Number Number : ");
    fflush(stdin);
    scanf("%d",&roll_num);
    fp = fopen("record.txt","a+");
        if(fp == NULL){
    printf("\n\n\tError opening file");
    exit(1);}
    system("cls");
    fflush(stdin);
    while(fread(&c,sizeof(c),1,fp)){
            if(roll_num==c.roll_no)
            {;
                system("cls");
                printf("Enter the Marks for Roll Number %d ",roll_num);
                here1:
                printf("\n Enter the marks for bca 1 : - ");
                scanf("%d",&s1.bca_101);
                if(s1.bca_101>70||s1.bca_101<0)
                {
                    system("cls");
                    goto here1;
                }
                here2:
                printf("\n Enter the  marks for bca 2 ");
                scanf("%d",&s1.bca_102);
                if(s1.bca_102>70||s1.bca_102<0)
                {
                    system("cls");
                    goto here2;
                }
                here3:
                printf("\n Enter the marks for bca 3 ");
                scanf("%d",&s1.bca_103);
                fflush(stdin);
                if(s1.bca_103>70||s1.bca_103<0)
                {
                    system("cls");
                    goto here3;
                }
                here4:
                printf("\n Enter the marks for bca 4 ");
                scanf("%d",&s1.bca_104);
                fflush(stdin);
                if(s1.bca_104>70||s1.bca_104<0)
                {
                    system("cls");
                    goto here4;
                }
                here5:
                printf("\n Enter the marks for bca 5 ");
                scanf("%d",&s1.bca_105);
                fflush(stdin);
                if(s1.bca_105>70||s1.bca_105<0)
                {
                    system("cls");
                    goto here5;
                }
            }
            fwrite(&s1,sizeof(s1),1,fp);
            system("cls");
            avg =  ((s1.bca_101+s1.bca_102+s1.bca_103+s1.bca_104+s1.bca_105)*100)/350;
            printf("\n|-------------------------------------------------------------------------------|");
            printf("\n|                            Result                                             |");
            printf("\n|                   Session  : -  %d                                            |",c.session);
            printf("\n|-------------------------------------------------------------------------------|");
            printf("\n|                                                                               |");
            printf("\n|Student Name : %s                                                              |",c.name);
            printf("\n|Roll No.   : %d                                                                |",roll_num);
            printf("\n|-------------------------------------------------------------------------------|");
            printf("\n|                                                                               |");
            printf("\n| Subjects        Marks           TOTAL                                         |");
            printf("\n|-------------------------------------------------------------------------------|");
            printf("\n|  BCA-101         %d             70                                            |",s1.bca_101);
            printf("\n|  BCA-102         %d             70                                            |",s1.bca_102);
            printf("\n|  BCA-103         %d             70                                            |",s1.bca_103);
            printf("\n|  BCA-104         %d             70                                            |",s1.bca_104);
            printf("\n|  BCA-105         %d             70                                            |",s1.bca_105);
            printf("\n|-------------------------------------------------------------------------------|");
            printf("\n|             | Total = %d |       350                                          |",s1.bca_101+s1.bca_102+s1.bca_103+s1.bca_104+s1.bca_105);
            printf("\n|-------------------------------------------------------------------------------|");
            printf("\n| Percentage   %.2f |                                                           |",avg);
            printf("\n|-------------------------------------------------------------------------------|");


            if(s1.bca_101<21)
            {
                printf("\nATKT in BCA 101\n");
                count++;
            }
            if(s1.bca_102<21)
            {
                printf("ATKT in BCA 102\n");
                count++;
            }
            if(s1.bca_103<21)
            {
                printf("ATKT in BCA 103\n");
                count++;
            }
            if(s1.bca_104<21)
            {
                printf("ATKT in BCA 104\n");
                count++;
            }
            if(s1.bca_105<21)
            {
                printf("ATKT in BCA 105\n");
                count++;
            }
        printf("\n\n\nSEMESTER TWO.");
        fflush(stdin);
        getch();
        system("cls");
        semester2();

    }
    fclose(fp);
    gotoxy(10,18);
    printf("Press any key to continue.");
    getch();
    menu();
}
semester2()
{
    FILE *fp;
    struct sem1 s1;
    struct sem2 s2;
    struct student c;
    int roll_num,sum=0,count2=0;
    system("cls");
    printf("\n\n\t\t\tEnter Roll Number Number : ");
    fflush(stdin);
    scanf("%d",&s2.roll_no2);
    fflush(stdin);
    fp = fopen("record.txt","a+");
        if(fp == NULL){
    printf("\n\n\tError opening file");
    exit(1);}
    while(fread(&c,sizeof(c),1,fp)){
        if(s2.roll_no2==c.roll_no){
                system("cls");
                printf("Enter the Marks for Roll Number %d ",s2.roll_no2);
                here1:
                printf("\n Enter the marks for bcaII 1 : - ");
                scanf("%d",&s2.bca_201);
                if(s2.bca_201>70||s2.bca_201<0)
                {
                    system("cls");
                    goto here1;
                }
                here2:
                printf("\n Enter the  marks for bcaII 2 ");
                scanf("%d",&s2.bca_202);
                if(s2.bca_202>70||s2.bca_202<0)
                {
                    system("cls");
                    goto here2;
                }
                here3:
                printf("\n Enter the marks for bcaII 3 ");
                scanf("%d",&s2.bca_203);
                fflush(stdin);
                if(s2.bca_203>70||s2.bca_203<0)
                {
                    system("cls");
                    goto here3;
                }
                here4:
                printf("\n Enter the marks for bcaII 4 ");
                scanf("%d",&s2.bca_204);
                fflush(stdin);
                if(s2.bca_204>70||s2.bca_204<0)
                {
                    system("cls");
                    goto here4;
                }
                here5:
                printf("\n Enter the marks for bcaII 5 ");
                scanf("%d",&s2.bca_205);
                fflush(stdin);
                if(s2.bca_205>70||s2.bca_205<0)
                {
                    system("cls");
                    goto here5;
                }
            }
            if(s2.bca_201<21)
            {
                printf("ATKT in BCA 201\n");
                count2++;
            }
            if(s2.bca_202<21)
            {
                printf("ATKT in BCA 202\n");
                count2++;
            }
            if(s2.bca_203<21)
            {
                printf("ATKT in BCA 203\n");
                count2++;
            }
            if(s2.bca_204<21)
            {
                printf("ATKT in BCA 204\n");
                count2++;
            }
            if(s2.bca_205<21)
            {
                printf("ATKT in BCA 205\n\n\n");
                count2++;
            }

            //previous sem checking
            if(s1.bca_101<21)
            {
                printf("ATKT in BCA 101\n");
                printf("ATKT EXAM OF BCA 101  ");
                scanf("%d",&s1.bca_101);
            }
            if(s1.bca_102<21)
            {
                printf("ATKT in BCA 102\n");
                printf("ATKT EXAM OF BCA 102 ");
                scanf("%d",&s1.bca_102);
                count2++;
            }
            if(s1.bca_103<21)
            {
                printf("ATKT in BCA 103\n");
                printf("ATKT EXAM OF BCA 103  ");
                scanf("%d",&s1.bca_103);
                count2++;
            }
            if(s1.bca_104<21)
            {
                printf("ATKT in BCA 104\n");
                printf("ATKT EXAM OF BCA 104  ");
                scanf("%d",&s1.bca_104);
                count2++;
            }
            if(s1.bca_105<21)
            {
                printf("ATKT in BCA 105\n");
                printf(" ATKT EXAM OF BCA 105  ");
                scanf("%d",&s1.bca_105);
                count2++;
            }
            fwrite(&s2,sizeof(s2),1,fp);
    }
    fclose(fp);
    gotoxy(10,18);
    printf("Press any key to continue.");
    getch();
    menu();
}
void marksheet()
{

}
void search()
{
}
void updation(){
}
void marksheet_display(int a)
{
    /*FILE *fp;
    struct student c;
    fp = fopen("record.txt","r+");
    if(fp == NULL){
        printf("\n\n\tError opening file");
        exit(1);
    }
    while(fread(&c,sizeof(c),1,fp ) == 1){
            if(a==c.roll_no){

            }

    }
    fclose(fp);*/
    printf("\n\n\nPress any key to continue.");
    getch();
    menu();
}
void view(){
    FILE *fp;
    int i=1,j=8;
    struct student c;
    system("cls");
    printf("\n\t\t\t\tUniversity of Indore");
    printf("\n\n\t\t\t\t<--:Customer List:-->");
    gotoxy(10,5);
    printf("--------------------------------------------------------------------------------------------");
    gotoxy(10,6);
    printf("S.No   Name of Student     Mobile No     Roll Number     DOB      Address     COURSE  ");
    gotoxy(10,7);
    printf("--------------------------------------------------------------------------------------------");
    fp = fopen("record.txt","rb");
    if(fp == NULL){
        printf("\n\n\tError in opening file.");
        exit(1);
    }
    //j=8;
    while(fread(&c,sizeof(c),1,fp) == 1){
        gotoxy(10,j);
        printf("|%-7d%-20s%-15d%-12d%-3d/%-2d/%-6d%-15s%-7s|",i,c.name,c.mobile,c.roll_no,c.dd,c.mm,c.yyyy,c.address,c.standard_class);
        i++;
        j++;
    }
    fclose(fp);
    gotoxy(10,j+3);
    printf("Press any key to continue.");
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

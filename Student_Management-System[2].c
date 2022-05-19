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
    char name[20];
    int mobile[10];
    int roll_no;
    int age;
    char standard_class[10];
    char address[60];
    char fathers_name[25];
    char stream[25];
    int dd,mm,yyyy;
    int physics,maths,chemistry,biology,accounts,business,economics,english,hindi;
    int physicsPR,mathsPR,chemistryPR,biologyPR,accountsPR,businessPR,economicsPR,englishA,hindiA;
};
struct school_authoritiy
{
    char admin[20];
    char password[30];

};
int lower=1000,upper=9999;
int main()
{
    system("cls");
    gotoxy(17,10);
    printf("--------------------------------------------");
    gotoxy(17,11);
    printf(":Indus International School :");
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
    gotoxy(10,4);
    printf("\t\t\t<--:Welcome Admin:-->");
    gotoxy(10,5);
    printf("\t<><><><><><><><><><><><><><><><><><><><><><><><><><><>");
    gotoxy(10,7);
    printf("Choose any of the Option for continuing.");
    gotoxy(10,8);
    printf("<-:---------------------------------------------:->");
    printf("\n\n\n\t1 : New Student Details.");
    printf("\n\t2 : Student Pass/Fail List");
    printf("\n\t3:  Student Marksheet");
    printf("\n\t4 : Search Student Record.");
    printf("\n\t5 : Update Student Record.");
    printf("\n\t6 : Delete Student Record.");
    printf("\n\t7 : Exit.");
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
        marksheet();
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
    int chance = 1,ch;
    FILE *fp;
    struct student  c;
    char another ='y';
    system("cls");
    fp = fopen("record.txt","w+");
    if(fp == NULL){
        printf("\n\n\tError opening file");
        exit(1);
    }
    system("cls");
    fflush(stdin);
    while(another == 'y')
    {
        gotoxy(10,3);
        printf("\t\t :->> Add New <<-:");
        gotoxy(10,5);
        printf("Enter the details of customer");
        gotoxy(10,7);
        printf("Enter Student Name : ");
        gets(c.name);
        gotoxy(10,8);
        printf("Enter the Class  : ");
        gets(c.standard_class);
        gotoxy(10,9);
        printf("Enter the Stream ");
        gets(c.stream);
        gotoxy(10,10);
        printf("Enter the Fathers Name :");
        gets(c.fathers_name);
        gotoxy(10,11);
        printf("Enter Address :");
        gets(c.address);
        rl:
        gotoxy(10,12);
        printf("Enter Roll.Number :");
        scanf("%d",&c.roll_no);
        if(c.roll_no<10000||c.roll_no>20000)
        {
            system("cls");
            gotoxy(10,4);
            printf("Please Enter Roll No Correctly ");
            getch();
            goto rl;
        }
        gotoxy(10,13);
        printf("Enter the Mobile Number  :");
        scanf("%d",&c.mobile);
        age:
        gotoxy(10,14);
        printf("Enter  the Age  : ");
        scanf("%d",&c.age);
        if(c.age>25||c.age<16)
        {
            gotoxy(10,16);
            printf("Inappropriate Age");
            getch();
            goto age;
        }
        gotoxy(10,15);
        dob:
        printf("Enter the Date of Birth (dd,mm,yyyy) :-  ");
        scanf("%d",&c.dd);
        scanf("%d",&c.mm);
        scanf("%d",&c.yyyy);
        fflush(stdin);
        if((c.dd>31||c.dd<1)&&(c.mm>0||c.mm<12)&&(c.yyyy>2022||c.yyyy<1995))
        {
            gotoxy(10,16);
            printf("Invalid Date Please ");
            system("cls");
            goto dob;
        }
        here:
        system("cls");
        gotoxy(10,3);
        printf("Now Enter the Student Exams & Practicals Numbers ");
        gotoxy(10,5);
        printf("SELECT THE STREAM OF STUDENT :-   ");
        gotoxy(10,6);
        printf("1.PCM");
        gotoxy(10,7);
        printf("2.COMMERCE");
        gotoxy(10,8);
        printf("3.SCIENCE");
        gotoxy(10,10);
        printf(" SELECT ANY[1][2][3] :-  ");
        scanf("%d",&ch);
        printf("\n\t\t-------------------------------------------");
        switch(ch)
        {
        case 1:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Marks of subject)");
            pcm1:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Physics : ");
            scanf("%d",&c.physics);
            if(c.physics>80||c.physics<0)
            {
                goto pcm1;
            }
            pcm2:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Maths : ");
            scanf("%d",&c.maths);
            if(c.maths>80||c.maths<0)
            {
                goto pcm2;
            }
            pcm3:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Chemistry : ");
            scanf("%d",&c.chemistry);
            if(c.chemistry>80||c.chemistry<0)
            {
                goto pcm3;
            }
            pcm4:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("------------------------------------------\n");
            gotoxy(10,8);
            printf("------------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for English : ");
            scanf("%d",&c.english);
            if(c.english>100||c.english<0)
            {
                goto pcm4;
            }
            pcm5:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("------------------------------------------\n");
            gotoxy(10,8);
            printf("------------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Hindi : ");
            scanf("%d",&c.hindi);
            if(c.hindi>100||c.hindi<0)
            {
                goto pcm5;
            }

            // Practicals Marks

            system("cls");
            p1:
            system("cls");
            gotoxy(10,3);
            printf("Now Enter the Practicals & Assignments Marks");
            gotoxy(10,5);
            printf("-------------------------------------------\n");
            gotoxy(10,8);
            printf("-------------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Physics Practical : ");
            scanf("%d",&c.physicsPR);
            if(c.physicsPR>20||c.physicsPR<0)
            {
                goto p1;
            }
            p2:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Practical Marks of subject)");
            gotoxy(10,5);
            printf("--------------------------------------------\n");
            gotoxy(10,8);
            printf("--------------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Maths : ");
            scanf("%d",&c.mathsPR);
            if(c.mathsPR>20||c.mathsPR<0)
            {
                goto p2;
            }
            p3:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Practical Marks of subject)");
            gotoxy(10,5);
            printf("------------------------------------------\n");
            gotoxy(10,8);
            printf("------------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Practical Marks for Chemistry : ");
            scanf("%d",&c.chemistryPR);
            if(c.chemistryPR>20||c.chemistryPR<0)
            {
                goto p3;
            }
            break;

        case 2:
            system("cls");
            gotoxy(15,6);
            printf("System Under Work ");
            gotoxy(10,9);
            printf("Press any key to continue.");
            getch();
            goto here;
        case 3:
            system("cls");
            gotoxy(15,6);
            printf("[System Under Work]");
            gotoxy(10,9);
            printf("Press any key to continue.");
            getch();
            goto here;
            break;
        default:
            system("cls");
            gotoxy(10,13);
            printf(":::::::::::::::::::::::::::::::[Invalid Choice]:::::::::::::::::::::::::::::::::::::::::");
            break;

        }
        fwrite(&c,sizeof(c),1,fp);
        gotoxy(10,8);
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
void marksheet()
{

}
void search()
{
    FILE *fp;
    struct student c;
    int roll_number;
    system("cls");
    gotoxy(10,4);
    printf("\t\t^^^$$^^^Indus Public School^^^$$^^^");
    printf("\n\n\t||---:SEARCH RECORD:---||");
    gotoxy(10,5);
    printf("\n\n\t\t\tEnter Roll Number : ");
    fflush(stdin);
    scanf("%d",&roll_number);
    fp = fopen("record.txt","r+");
    if(fp == NULL){
        printf("\n\n\tError opening file");
        exit(1);
    }
    while(fread(&c,sizeof(c),1,fp ) == 1){
        if(roll_number==c.roll_no){
            system("cls");
            printf("\n\tSTUDENT NAME: %s",c.name);
            printf("\n\t----------------------------------");
            printf("\n\tFATHERS NAME : %s",c.mobile);
            printf("\n\t----------------------------------");
            printf("\n\tROLL NUMBER: %d",c.roll_no);
            printf("\n\t-----------------------------------");
            printf("\n\tCLASS : %s",c.standard_class);
            printf("\n\t-----------------------------------");
            printf("\n\tStream  : %s",c.stream);
            printf("\n\t------------------------------------");
            printf("\n\tAddress  :%s",c.address);
            printf("\n\t------------------------------------");
            printf("\n\tAge:  %d",c.age);
            printf("\n\t-------------------------------------");
            printf("\n\t\DOB:  %d/%d/%d",c.dd,c.mm,c.yyyy);
            printf("\n\t-------------------------------------");
        }

    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    menu();
}
void deleterec(){
}
void updation(){
}
void view(){
}
void gotoxy(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

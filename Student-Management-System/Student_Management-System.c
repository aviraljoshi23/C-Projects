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
void deleterec(){
}
void updation(){
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
        printf("Enter the Fathers Name :");
        gets(c.fathers_name);
        gotoxy(10,10);
        printf("Enter Address :");
        gets(c.address);
        rl:
        gotoxy(10,11);
        printf("Enter Roll.Number :");
        scanf("%d",&c.roll_no);
        if(c.roll_no<10000||c.roll_no>20000)
        {
            system("cls");
            gotoxy(10,4);
            printf("Please Enter Proper Roll No");
            goto rl;
        }
        gotoxy(10,12);
        printf("Enter the Mobile Number  :");
        scanf("%d",&c.mobile);

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
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
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
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
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
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
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
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for English : ");
            scanf("%d",&c.english);
            if(c.english>80||c.english<0)
            {
                goto pcm4;
            }
            pcm5:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Hindi : ");
            scanf("%d",&c.hindi);
            if(c.hindi>80||c.hindi<0)
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
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
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
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
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
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Practical Marks for Chemistry : ");
            scanf("%d",&c.chemistryPR);
            if(c.chemistryPR>20||c.chemistryPR<0)
            {
                goto p3;
            }
            p4:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Practical Marks of subject)");
            gotoxy(10,5);
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Assignment  Marks for English : ");
            scanf("%d",&c.englishA);
            if(c.englishA>80||c.englishA<0)
            {
                goto p4;
            }
            p5:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  PCM (Now Enter the Practical Marks of subject)");
            gotoxy(10,5);
            printf("----------------------------------\n");
            gotoxy(10,8);
            printf("----------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Assignment Marks for Hindi : ");
            scanf("%d",&c.hindiA);
            if(c.hindiA>20||c.hindiA<0)
            {
                goto p5;
            }

        }
        fwrite(&c,sizeof(c),1,fp);
        gotoxy(10,7);
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

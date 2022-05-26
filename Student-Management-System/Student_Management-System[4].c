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
struct student
{
    char name[25];
    int total,percentage;
    int roll_num;
    char address[60];
    char fathers_name[25];
    int dd,mm,yyyy;
    int session;
    int sub1,atkt1,sub2,atkt2,sub3,atkt3,sub4,sub5,sub6;
}sem1,sem2,sem3,sem4,sem5,sem6;
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
        semester1();
        break;
    case 2:
        marksheet();
        break;
    case 3:
        exit(1);
        break;

    default:
        printf("\n\n\t\t[Invalid Choice].");
        printf("\n\t\tEnter Any key");
        getch();
        main();
    }
}
void semester1()
{
    FILE *fp;
    fp = fopen("record.txt","w+");
    if(fp == NULL){
    printf("\n\n\tError opening file");
    exit(1);}
    int sum=0,count=0;
    system("cls");
    printf("\n\tEnter the Name of Student :- ");
    fflush(stdin);
    gets(sem1.name);
    fflush(stdin);
    printf("\n\tEnter the Fathers name : -");
    fflush(stdin);
    gets(sem1.fathers_name);
     fflush(stdin);
    printf("Enter the Session");
    scanf("%d",&sem1.session);
    roll1:
    printf("\n\n\t\t\tEnter Roll Number Number : ");
    fflush(stdin);
    scanf("%d",&sem1.roll_num);
    if(sem1.roll_num>130||sem1.roll_num<100)
      {
          system("cls");
          printf("roll should be less then 131 & greater then 99");
          goto roll1;
      }
    ere1:
        printf("\nEnter marks of SEM1- A :- ");
        scanf("%d",&sem1.sub1);
        if(sem1.sub1>40||sem1.sub1<0)
        {
        system("cls");
        printf("\n\n\t\tMarks should be less then 40 & greater then 0");
        goto ere1;
        }
    ere2:
        printf("\nEnter marks of SEM1- B :- ");
        scanf("%d",&sem1.sub2);
        if(sem1.sub2>40||sem1.sub2<0)
        {
        system("cls");
        printf("\n\n\t\tMarks should be less then 40 & greater then 0");
        goto ere2;
        }
    ere3:
        printf("\nEnter marks of SEM1- C :- ");
        scanf("%d",&sem1.sub3);
        if(sem1.sub3>40||sem1.sub3<0)
        {
        system("cls");
        printf("\n\n\t\tMarks should be less then 40 & greater then 0");
        goto ere3;
        }
    ere4:
        printf("\nEnter marks of SEM1- D :- ");
        scanf("%d",&sem1.sub4);
        if(sem1.sub4>40||sem1.sub4<0)
        {
        system("cls");
        printf("\n\n\t\tMarks should be less then 40 & greater then 0");
        goto ere4;
        }
    ere5:
        printf("\nEnter marks of SEM1- E :- ");
        scanf("%d",&sem1.sub5);
        if(sem1.sub5>40||sem1.sub5<0)
        {
        system("cls");
        printf("\n\n\t\tMarks should be less then 40 & greater then 0");
        goto ere5;
        }
    ere6:
        printf("\nEnter marks of SEM1- F :- ");
        scanf("%d",&sem1.sub6);
        if(sem1.sub6>40||sem1.sub6<0)
        {
        system("cls");
        printf("\n\n\t\tMarks should be less then 40 & greater then 0");
        goto ere6;
        }
 fwrite(&sem1,sizeof(sem1),1,fp);
 fclose(fp);
 printf("\n\n\Press Any key to continue");
 getch();
 semester2();
}
semester2()
{
    int count=0;
    FILE *fp;
    fp = fopen("record.txt","w+");
    if(fp == NULL){
    printf("\n\n\tError opening file");
    exit(1);}
    system("cls");
    printf("\n\n\tEnter Roll Number Number : ");
    fflush(stdin);
    scanf("%d",&sem2.roll_num);
    while(fread(&sem1,sizeof(sem1),1,fp)){
        if(sem2.roll_num==sem1.roll_num){
                system("cls");
                go:
                printf("\n\n \tEnter the Details  for Roll Number %d ",sem2.roll_num);
                printf("\n Enter the Session :- ");
                scanf("%d",sem2.session);
                if(sem2.session!=sem1.session)
                {
                    printf("\n\n\t\tInvalid Session Please rewrite:-");
                    printf("\n\nEnter any key:- ");
                    goto go;
                }
                // Marks Entering
                ere1:
                printf("\nEnter marks of SEM2- A :- ");
                scanf("%d",&sem2.sub1);
                if(sem2.sub1>40||sem2.sub1<0)
                {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto ere1;
                }
            ere2:
                printf("\nEnter marks of SEM2- B :- ");
                scanf("%d",&sem2.sub2);
                if(sem2.sub2>40||sem2.sub2<0)
                {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto ere2;
                }
            ere3:
                printf("\nEnter marks of SEM2- C :- ");
                scanf("%d",&sem2.sub3);
                if(sem2.sub3>40||sem2.sub3<0)
                {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto ere3;
                }
            ere4:
                printf("\nEnter marks of SEM2- D :- ");
                scanf("%d",&sem2.sub4);
                if(sem2.sub4>40||sem2.sub4<0)
                {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto ere4;
                }
            ere5:
                printf("\nEnter marks of SEM2- E :- ");
                scanf("%d",&sem2.sub5);
                if(sem2.sub5>40||sem2.sub5<0)
                {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto ere5;
                }
            ere6:
                printf("\nEnter marks of SEM1- F :- ");
                scanf("%d",&sem2.sub6);
                if(sem2.sub6>40||sem2.sub6<0)
                {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto ere6;
                }
        }
    }
    fwrite(&sem2,sizeof(sem2),1,fp);
        if(sem2.sub1<13)
        {
            count++;
        }
        if(sem2.sub2<13)
        {
            count++
        }
        if(sem2.sub3<13)
        {
            count++
        }
        if(sem2.sub4<13)
        {
            count++
        }
        if(sem2.sub5<13)
        {
            count++
        }
        if(sem2.sub6<13)
        {
            count++
        }
    while(fread(&sem1,sizof(sem1),1,fp)==1){
        if(sem1.sub1<13)
        {
            count++;
        }
        if(sem1.sub2<13)
        {
            count++
        }
        if(sem1.sub3<13)
        {
            count++
        }
        if(sem1.sub4<13)
        {
            count++
        }
        if(sem1.sub5<13)
        {
            count++
        }
        if(sem1.sub6<13)
        {
            count++
        }
    }
    if(count>4)
    {
        printf("\n\n\t\t You got year back:");
        system("cls");
    }
    else if(count<4{
        if(sem2.sub1<13)
        {
            system("cls");
            haa1:
            printf("Supplimentry Exam for ATKT subjects ");
            printf("Enter No. of SEM2 A:- ");
            scanf("%d",&atkt2.sub1);
            if(atkt2.sub1>40||atkt2.sub1<0)
            {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto haa1;
            }
        }
        if(sem2.sub2<13)
        {
            system("cls");
            haa2:
            printf("Supplimentry Exam for ATKT subjects ");
            printf("Enter No. of SEM2 B:- ");
            scanf("%d",&atkt2.sub2);
            if(atkt2.sub2>40||atkt2.sub2<0)
            {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto haa2;
            }
        }
        if(sem2.sub3<13)
        {
            system("cls");
            haa3:
            printf("Supplimentry Exam for ATKT subjects ");
            printf("Enter No. of SEM2 C:- ");
            scanf("%d",&atkt2.sub3);
            if(atkt2.sub3>40||atkt2.sub3<0)
            {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto haa3;
            }
        }
        if(sem2.sub4<13)
        {
            system("cls");
            haa4:
            printf("Supplimentry Exam for ATKT subjects ");
            printf("Enter No. of SEM2 D:- ");
            scanf("%d",&atkt2.sub4);
            if(atkt2.sub4>40||atkt2.sub4<0)
            {
                system("cls");
                printf("\n\n\t\tMarks should be less then 40 & greater then 0");
                goto haa4;
            }
        }
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
void view(){
    /*
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
    }*/
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

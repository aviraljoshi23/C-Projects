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
    //Sem I subjects
    int english_I,maths_I,Programming_in_C ,Dg_computer,C_lab,software_lab,Communication_Skills_Lab;
    int english_ICIA,maths_I_CIA,Programming_in_C_CIA ,Dg_computer_CIA,C_lab_CIA,software_lab_CIA,Communication_Skills_Lab_CIA;
    //SEM II SUBJECTS
    int english_II,Discreate_Maths_II,Operating_Systems,Data_Structures,Data_Structures_Lab,Visual_Programming_Lab;
    //SEM III SUBJECTS
    int Interpersonal_Communication,Introductory_Algebra,Financial_Accounting,Software_Engineering,DBMS,OOPS_CPP,CPP_LAB,ORACLE_LAB;
    // SEM IV SUBJECTS
    int english_IV,Financial_Management,Computer_Networks,java,java_lab,dbms_project,web_tech_lab;
    // SEM V SUBJECTS
    int Unix_Programming,OOAD_UML,ui_desgin,Graphics_animation,python,Business_Intelligence,Unix_lab,web_desgin_project,python_lab,graphics_animation_lab,BI_lab;
    // SEM VI SUBJECTS
    int algorithms_desgin,client_server_computing,Computer_Architecture,Cloud_Computing, Multimedia_Applicationsm, Adv_dbms,soft_computing;
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
        printf("\tUniversity of Indore HAI BHAIYA");
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
        phone:
        gotoxy(10,13);
        printf("Enter the Mobile Number  :");
        scanf("%d",&c.mobile);
        if(c.mobile>9999999999)
        {
            system("cls");
            gotoxy(10,4);
            goto phone;
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
        printf("NOW SELECT THE SEMESTER ");
        gotoxy(10,5);
        printf("SELECT SEMESTER :-   ");
        gotoxy(10,6);
        printf("SEMESTER I");
        gotoxy(10,7);
        printf("SEMESTER II");
        gotoxy(10,8);
        printf("SEMESTER III");
        gotoxy(10,9);
        printf("SEMESTER IV");
        gotoxy(10,10);
        printf("SEMESTER V");
        gotoxy(10,11);
        printf("SEMESTER VI");
        gotoxy(10,3);
        printf(" SELECT ANY  {[1][2][3] [4] [5] [6]} :-  ");
        scanf("%d",&ch);
        printf("\n\t\t-------------------------------------------");
        switch(ch)
        {
        case 1:
            semIM:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED  BCA (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,10);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("Enter the  (ESE) Marks for Foundational Mathematics : ");
            scanf("%d",&c.maths_I);
            if(c.maths_I>70||c.maths_I<0)
            {
                goto semIM;
            }
            semIC:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,9);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Programming in C : ");
            scanf("%d",&c.Programming_in_C);
            if(c.Programming_in_C>70||c.Programming_in_C<0)
            {
                goto semIC;
            }
            semIE:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for English : ");
            scanf("%d",&c.english_I);
            if(c.english_I>70||c.english_I<0)
            {
                goto semIE;
            }
            semIFC:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Computer Fundamentals : ");
            scanf("%d",&c.Dg_computer);
            if(c.Dg_computer>70||c.Dg_computer<0)
            {
                goto semIFC;
            }


            semICL:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Programming in C Lab. : ");
            scanf("%d",&c.C_lab);
            if(c.C_lab>60||c.C_lab<0)
            {
                goto semICL;
            }
            semIOM:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Office Management Lab. : ");
            scanf("%d",&c.software_lab);
            if(c.software_lab>60||c.software_lab<0)
            {
                goto semIOM;
            }
            semISL:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Marks of subject)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the Marks for Communication Skills Lab. : ");
            scanf("%d",&c.Communication_Skills_Lab);
            if(c.Communication_Skills_Lab>60||c.Communication_Skills_Lab<0)
            {
                goto semISL;
            }

            // CIA MARKINGS
            semICIAMaths:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Continuous Internal Assessment)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the CIA Marks for Foundational Mathas. : ");
            scanf("%d",&c.maths_I_CIA);
            if(c.maths_I_CIA>30||c.maths_I_CIA<0)
            {
                goto semICIAMaths;
            }
            semICIAintro_c:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Continuous Internal Assessment)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the CIA Marks for Programming in C   : ");
            scanf("%d",&c.Programming_in_C_CIA);
            if(c.Programming_in_C_CIA>30||c.Programming_in_C_CIA<0)
            {
                goto semICIAintro_c;
            }
            semICIACS:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Continuous Internal Assessment)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the CIA Marks for Fundamentals of Computer Science : ");
            scanf("%d",&c.Dg_computer_CIA);
            if(c.Dg_computer_CIA>30||c.Dg_computer_CIA<0)
            {
                goto semICIACS;
            }
            semICIAeng:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Continuous Internal Assessment)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the CIA Marks for English: ");
            scanf("%d",&c.english_ICIA);
            if(c.english_ICIA>30||c.english_ICIA<0)
            {
                goto semICIAeng;
            }
            semCIACL:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Continuous Internal Assessment)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the CIA Marks for Programming in C Lab.  : ");
            scanf("%d",&c.C_lab_CIA);
            if(c.C_lab_CIA>40||c.english_ICIA<0)
            {
                goto semCIACL;
            }
            semCIAOML:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Continuous Internal Assessment)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the CIA Marks for Office Management Lab  : ");
            scanf("%d",&c.software_lab_CIA);
            if(c.software_lab_CIA>40||c.software_lab_CIA<0)
            {
                goto semCIAOML;
            }
            semCIACSL:
            system("cls");
            gotoxy(10,3);
            printf("SUBJECT SELECTED   BCA (Now Enter the Continuous Internal Assessment)");
            gotoxy(10,5);
            printf("-----------------------------------------\n");
            gotoxy(10,8);
            printf("-----------------------------------------\n");
            gotoxy(10,7);
            printf("Enter the CIA Marks for Communication Skills Lab  : ");
            scanf("%d",&c.Communication_Skills_Lab_CIA);
            if(c.Communication_Skills_Lab_CIA>40||c.Communication_Skills_Lab_CIA<0)
            {
                goto semCIACSL;
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

        case 4:
            system("cls");
            gotoxy(15,6);
            printf("[System Under Work]");
            gotoxy(10,9);
            printf("Press any key to continue.");
            getch();
            goto here;

        case 5:
            system("cls");
            gotoxy(15,6);
            printf("[System Under Work]");
            gotoxy(10,9);
            printf("Press any key to continue.");
            getch();
            goto here;

        case 6:
            system("cls");
            gotoxy(15,6);
            printf("[System Under Work]");
            gotoxy(10,9);
            printf("Press any key to continue.");
            getch();
            goto here;
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
    FILE *fp;
    struct student c;
    int roll_num,SEM;
    char another = 'y';
    system("cls");
    printf("\n\n\t\t\t\t<--:SEARCH RECORD:-->");
    gotoxy(10,5);
    printf("\n\n\t\t\tEnter Roll Number Number : ");
    fflush(stdin);
    scanf("%d",&roll_num);
    fp = fopen("record.txt","r+");
    if(fp == NULL){
        printf("\n\n\tError opening file");
        exit(1);
    }
    while(fread(&c,sizeof(c),1,fp ) == 1){
            if(roll_num==c.roll_no)
            {
                here:
                system("cls");
                gotoxy(10,3);
                printf("Please Select the SEMESTER FOR BCA (If completed BCA then Select Final Marksheet Option)");
                gotoxy(10,4);
                printf("NOW SELECT THE SEMESTER ");
                gotoxy(10,5);
                printf("SELECT SEMESTER :-   ");
                gotoxy(10,6);
                printf("SEMESTER I");
                gotoxy(10,7);
                printf("SEMESTER II");
                gotoxy(10,8);
                printf("SEMESTER III");
                gotoxy(10,9);
                printf("SEMESTER IV");
                gotoxy(10,10);
                printf("SEMESTER V");
                gotoxy(10,11);
                printf("SEMESTER VI");
                gotoxy(10,12);
                printf(" SELECT ANY  {[1][2][3] [4] [5] [6]} :-  ");
                scanf("%d",&SEM);
                switch(SEM)
                {
                case 1:
                    system("cls");
                    gotoxy(10,2);
                    printf("Semester 1st Marksheet");
                    marksheet_display(c.roll_no);
                    break;
                case 2:
                    system("cls");
                    gotoxy(10,2);
                    printf("Semester 2nd Marksheet");
                    marksheet_display();
                    break;
                case 3:
                    system("cls");
                    gotoxy(10,2);
                    printf("Semester 3rd Marksheet");
                    marksheet_display();
                    break;
                case 4:
                    system("cls");
                    gotoxy(10,2);
                    printf("Semester 4th Marksheet");
                    marksheet_display();
                    break;
                case 5:
                    system("cls");
                    gotoxy(10,2);
                    printf("Semester 5th Marksheet");
                    marksheet_display();
                    break;
                case 6:
                    system("cls");
                    gotoxy(10,2);
                    printf("Semester 6th Marksheet");
                    marksheet_display();
                    break;
                case 7:
                    system("cls");
                    gotoxy(10,2);
                    printf("BCA FINAL MARKSHEET");
                    marksheet_display();
                    break;
                default:
                    gotoxy(10,6);
                    printf("Invalid Option Choosen");
                    break;
                }
            }
    }
    fclose(fp);
    gotoxy(10,18);
    printf("Press any key to continue.");
    getch();
    menu();
}
void search()
{
    FILE *fp;
    struct student c;
    int roll_number;
    system("cls");
    gotoxy(10,4);
    printf("\t\tUniversity of Indore");
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
            printf("\n\n\t\t\t UNIVERSITY OF INDORE");
            printf("\n\n\n\t______________");
            printf("\n\t|            |");
            printf("\n\t|            |");
            printf("\n\t| PHOTOGRAPH |");
            printf("\n\t|            |");
            printf("\n\t|            |");
            printf("\n\t|____________|");
            printf("\n\n\n\tSTUDENT NAME: %s",c.name);
            printf("\n\t----------------------------------");
            printf("\n\tFATHERS NAME : %s",c.fathers_name);
            printf("\n\t----------------------------------");
            printf("\n\tROLL NUMBER: %d",c.roll_no);
            printf("\n\t-----------------------------------");
            printf("\n\tMoblie NUMBER: %d",c.mobile);
            printf("\n\t-----------------------------------");
            printf("\n\tCLASS : %s",c.standard_class);
            printf("\n\t------------------------------------");
            printf("\n\tAddress  :%s",c.address);
            printf("\n\t------------------------------------");
            printf("\n\tDOB:  %d/%d/%d",c.dd,c.mm,c.yyyy);
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
//    int english_I,maths_I,Programming_in_C ,Dg_computer,C_lab,software_lab,Communication_Skills_Lab;
//    int english_ICIA,maths_I_CIA,Programming_in_C_CIA ,Dg_computer_CIA,C_lab_CIA,software_lab_CIA,Communication_Skills_Lab_CIA;
void marksheet_display(int a)
{
    FILE *fp;
    struct student c;
    fp = fopen("record.txt","r+");
    if(fp == NULL){
        printf("\n\n\tError opening file");
        exit(1);
    }
    while(fread(&c,sizeof(c),1,fp ) == 1){
            if(a==c.roll_no){
                gotoxy(10,8);
                printf("English  %d  ::  English(CIA)   %d",c.english_I,c.english_ICIA);
                gotoxy(10,9);
                printf("Maths   %d  ::   Maths(CIA)    %d",c.maths_I,c.maths_I_CIA);
                gotoxy(10,10);
                printf("C Language   %d  ::   C LAB    %d",c.Programming_in_C,c.C_lab);

            }

    }
    fclose(fp);
    printf("\n\n\nPress any key to continue.");
    getch();
    menu();
}
void passatkt(a){
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

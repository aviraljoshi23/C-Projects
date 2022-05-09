#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
    long int acc;
  char name[20];
  char pass[20];
  char address[50];
  long int phno;
  int age;
  long int Addhar;
  int money;
}s,cre,check,upd,del,tra,depo;

int
create ()
{
    system("clear");
    int choice;
  int i;
  FILE *ptr;
  ptr = fopen ("account.txt","a+");
  if (ptr == NULL)
    {
      printf (" File type invalid");
      exit (0);
    }
    printf("\n\n\n\n\n\n\t\t\t\t");
	    enter :
	    printf("enter account no ");
	    scanf("%ld",&cre.acc);
       while(fscanf(ptr,"%ld %s %s %ld %s %ld %d %d \n",&s.acc,s.name,s.pass,&s.phno,s.address,&s.Addhar,&s.age,&s.money) !=EOF)
  {
      if(s.acc == cre.acc)
      {
          printf("\n\t\t\t\t this account already exist\n");
          printf("\n\t\t\t\t try another account no.");
          goto enter;
      }
  }
  s.acc=cre.acc;
  
	  printf ("\n\t\t\t\tenter your name : ");
	 scanf(" %s",s.name);
	  
	  printf ("\n\t\t\t\tenter your password : ");
	  scanf ("%s", s.pass);
	 
	  printf ("\n\t\t\t\tenter phone no : ");
	  scanf ("%ld",&s.phno);
	 
	  printf ("\n\t\t\t\tenter your address : ");
	  scanf (" %s", s.address);
	 
	  printf ("\n\t\t\t\tenter your addhar no. : ");
	  scanf ("%ld",&s.Addhar);

	  printf ("\n\t\t\t\tenter your age : ");
	  scanf ("%d",&s.age);

	  amount:
	  printf("\n\t\t\t\t enter the amount : ");
	  scanf("%d",&s.money);
    if(s.money>=10000)
    {
        system("clear");
        printf("\n\t\t\t\tCongratulation ! your account  has been created");

        fprintf(ptr,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,s.money);
        getchar();
        fclose(ptr);
        return 0;
    }
    else
    {
        printf("\n\t\t\t\tAmount should be greater then 10000/-");
            goto amount;
    }
    
	}
	
int database() 
{
    char  c;

    system("clear");
    FILE *ptr;
  if((ptr = fopen ("account.txt","r"))== NULL)
  {
      printf ("Visible error detected. Cannot open the file!");

      exit (1);
      
  }
  printf("\n\n\n\n\n\n\t\t\t\t");
  shuru:
 printf("\n\t\t\t\t enter account no.");
 scanf(" %ld",&check.acc);
  while(fscanf(ptr,"%ld %s %s %ld %s %ld %d %d \n ",&s.acc,s.name,s.pass,&s.phno,s.address,&s.Addhar,&s.age,&s.money) !=EOF)
  {
      if(s.acc == check.acc)
      {
          printf("\n\n");
      printf("\n\n\t\t\t\t\t\tAccount no : %ld \n\n\n\t\t\t\t\t\t Name :  %s \n\n\n\t\t\t\t\t\t Password is : %s\n\n\n\t\t\t\t\t\t Phone no . : %ld\n\n\n\t\t\t\t\t\t Address is : %s\n\n\n\t\t\t\t\t\t Addhar is : %ld\n\n\n\t\t\t\t\t\t Age is : %d\n\n\n\t\t\t\t\t\t Balance is : %d\n\n\n\t\t\t\t\t\t",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,s.money);
      scanf(" %c",&c);
fclose(ptr);
return 0;
        }
  }
        printf("Invalid Account no.\n\n");
        goto shuru;

}

int update()
{
    system("clear");
    FILE *ptr,*new; //newrec
    int choice=0,test=0;
    ptr=fopen("account.txt","r");
    new=fopen("change.txt","a+");

    printf("\n\n\t\t\t\t\t\tEnter the account no. ");
    scanf(" %ld",&upd.acc);
    while(fscanf(ptr,"%ld %s %s %ld %s %ld %d %d \n",&s.acc,s.name,s.pass,&s.phno,s.address,&s.Addhar,&s.age,&s.money) !=EOF )
    {
        if(upd.acc != s.acc)
        {   
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,s.money);
        }
        else if(upd.acc == s.acc)
        {
            choice = 0;
            test=1;
            initial: 
            printf("\n\n\t\t\t\t\t\t Which information do you want to change?\n\t\t\t\t\t\t1.Name \n\t\t\t\t\t\t2.Passw\n\t\t\t\t\t\t 3.Phoneno.\n\t\t\t\t\t\t 4.Addhar no. \n\t\t\t\t\t\t 5.Age  \n\t\t\t\t\t\t 6. money \n\t\t\t\t\t\t 7. Address\n\t\t\t\t\t\t8. Exit\n\n\t\t\t\t\t\t");
            scanf(" %d",&choice);
            if(choice == 1)
            {
             printf("\n\n\t\t\t\t\t\tEnter new name: ");
               scanf(" %s",upd.name);
               
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,upd.name,s.pass,s.phno,s.address,s.Addhar,s.age,s.money);
                system("clear");
                printf(" \n\n\t\t\t\t\t\t Changes saved! \n"); 
                goto initial;
            }
        else if(choice == 2)
        {
            printf("\n\t\t\t\t\t\tEnter the new password : ");
                scanf(" %s",upd.pass);
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,upd.pass,s.phno,s.address,s.Addhar,s.age,s.money);
                system("clear");
                printf("\n\n\t\t\t\t\tChanges saved!");
        goto initial;
        }
             else if(choice == 3 )
                {
                    printf("\n\n\t\t\t\t\t\tEnter the new phone number: ");
                scanf(" %ld",&upd.phno);
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n ",s.acc,s.name,s.pass,upd.phno,s.address,s.Addhar,s.age,s.money);
                system("clear");
                printf("\n\n\t\t\t\t\t Changes saved!");
        goto initial;
                }
            
       else if(choice ==4 )
       {
                    printf("Enter the new Addhar number: ");
                scanf(" %ld",&upd.Addhar);
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,s.address,upd.Addhar,s.age,s.money);
                system("clear");
                printf("\n\n\t\t\t\t\t\t Changes saved!");
        goto initial;
       }
              else if(choice == 5 )
               {    printf("Enter the new Age: ");
                scanf(" %d",&upd.age);
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,upd.age,s.money);
                system("clear");
                printf("\n\n\t\t\t\t\t\tChanges saved!");
                goto initial;
               }
            else if(choice == 6)
            {
                    printf("\n\n\t\t\t\t\t\tEnter the money: ");
                scanf(" %d",&upd.money);
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,upd.money);
                system("clear");
                printf("\n\n\t\t\t\t\t\tChanges saved!");
              goto initial;
            }
                 else if(choice == 7)
                    {
                    printf("\n\n\t\t\t\t\t\tEnter the new address: ");
                scanf(" %s",upd.address);
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,upd.address,s.Addhar,s.age,s.money);
                system("clear");
                printf("\n\n\t\t\t\t\t\tChanges saved!");
            goto initial;
                }
                else if(choice ==8)
                {
                    goto last;
                }
          else {
            printf("\n\n\t\t\t\t\t\tInvalid Input");
            goto initial;
                    }
          } 
    last:
     printf(" ");
            }
    
     system("clear");
    remove("account.txt");
    rename("change.txt","account.txt");
    fclose(new);
   fclose(ptr);
if(test!=1)
        {       
        printf("\n\n\n\t\t\t\t\t\tRecord not found!!\a\a\a");
        }
return 0;
}

int transaction()
{
    system("clear");
    FILE *ptr,*new;
        int store=0,test=0,testacc=0;
    ptr=fopen("account.txt","r");
    new=fopen("change.txt","a+");

    printf("\n\n\n\t\t\t\t\t\t Enter the account no. ");
    scanf(" %d", &testacc);
    while(fscanf(ptr,"%ld %s %s %ld %s %ld %d %d ",&s.acc,s.name,s.pass,&s.phno,s.address,&s.Addhar,&s.age,&s.money) !=EOF)
    {
        if(s.acc == testacc)
        {
            test=1;
            printf("\n\n\t\t\t\t\t\tEnter amount ");
               scanf(" %d",&store);
               tra.money = s.money-store;
                fprintf(new,"%ld  %s  %s  %ld  %s  %ld  %d  %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,tra.money);
                printf(" \n\n\n\t\t\t\t\t\t Transaction Done");
        }
        if(s.acc != testacc)
        {
                fprintf(new,"%ld  %s  %s  %ld  %s  %ld  %d  %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,s.money);
                  }
            }
    remove("account.txt");
   fclose(ptr);
    rename("change.txt","account.txt");
    fclose(new);
if(test!=1)   
printf("\n\n\n\t\t\t\t\t\tRecord not found!!");
return 0;
}
int deposit()
{
    system("clear");
    FILE *ptr,*new; //newrec
    int get=0,test=0;
    ptr=fopen("account.txt","r");
    new=fopen("change.txt","a+");

    printf("\n\n\n\t\t\t\t\t\tEnter the account no. ");
    scanf(" %ld",&depo.acc);
    while(fscanf(ptr,"%ld %s %s %ld %s %ld %d %d ",&s.acc,s.name,s.pass,&s.phno,s.address,&s.Addhar,&s.age,&s.money)!=EOF)
    {

        if(s.acc != depo.acc)
        {
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,s.money);
        }
        if(s.acc == depo.acc)
        {   
            test=1;
            printf("\n\n\t\t\t\t\t\tEnter amount ");
               scanf(" %d",&get);
               depo.money = s.money + get;
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,depo.money);
                printf("\n\n\t\t\t\t\t\t Transaction Done");
          }
            }
    remove("account.txt");
   fclose(ptr);
    rename("change.txt","account.txt");
    fclose(new);
if(test!=1)
        {       
        printf("\n\n\n\t\t\t\t\t\tRecord not found!!\a\a\a");
        }
return 0;
}
int delete()
{
    system("clear");
    upd.acc=0;
    FILE *ptr,*new; //newrec
    int test=0;
    ptr=fopen("account.txt","r");
    new=fopen("change.txt","a+");

    printf("\n\n\n\t\t\t\t\t\tEnter the account no. ");
    scanf(" %ld",&upd.acc);
    while(fscanf(ptr,"%ld %s %s %ld %s %ld %d %d \n",&s.acc,s.name,s.pass,&s.phno,s.address,&s.Addhar,&s.age,&s.money)!=EOF)
    {
       
        if(upd.acc != s.acc)
        {
            test=1;
                fprintf(new,"%ld %s %s %ld %s %ld %d %d \n",s.acc,s.name,s.pass,s.phno,s.address,s.Addhar,s.age,s.money);
        }
            }
            system("clear");
            printf("\n\n\n\t\t\t\t\t\t your account has been deleted ");
    remove("account.txt");
   fclose(ptr);
    rename("change.txt","account.txt");
    fclose(new);
if(test!=1)
        {       
        printf("\n\n\n\t\t\t\t\t\tRecord not found!!\a\a\a");
        }
return 0;
}

int 
start ()
{
    system("clear");
char c;
printf("\n\n\n\t\t\t----------------------  WELCOME TO THE PREMIUM BANK OF INDIA  -----------------------\n\n");
    
begin:

  c = 1;
  printf("\n\n\n");
  printf ("\t\t\t\t\t\tchoose the action you want to perform\n\n");
  printf ("\t\t\t\t\t\tpress 1 to create a account\n\n");
  printf ("\t\t\t\t\t\tpress 2 to See your account\n\n");
  printf ("\t\t\t\t\t\tpress 3 to update your account\n\n");
  printf ("\t\t\t\t\t\tpress 4 to delete your account\n\n");
  printf ("\t\t\t\t\t\tpress 5 to money Withdrawal your account\n\n");
  printf ("\t\t\t\t\t\tpress 6 to money Deposit your account\n\n");
  printf ("\t\t\t\t\t\tpress 7 to Exit ");
  scanf (" %c", &c);
  switch (c)
    {
    case '1':
    {
      create ();
      break;
    }
 case '2':
 {
     database();
     
      break;
 }
    case '3':
    {
        update();
      break;
    }
      case '4': {
          delete();
      break;
      }
      case '5':
      {
          transaction();
      break;
      }
      case '6':
      {
          deposit();
      break;
      }
      case '7':
      {
          return 0;
  
      }
      default:
      {
      printf ("Invalid Input ");
      break;
      }
    }
    goto begin;
}

int 
main ()
{                                          
     char admin[20]={"admin123"};
     char demo_admin[20];
     initial :
  printf("\n\n\n\t\t\t\t\t\tenter the Admin password \n\n");
  printf("\t\t\t\t\t\tPassword : ");
  scanf("%s",demo_admin);
if(strcmp(admin,demo_admin) == 0)
{
  start ();
}  
else {
    printf("\n !!!!!!! INCORRECT PASSWORD !!!!!!!\n");
    goto initial;
}
  return 0;
}



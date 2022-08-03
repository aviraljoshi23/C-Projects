/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//14
// int main()
// {
//     int p;
//     char a[50];
//     printf("Enter the string :- ");
//     gets(a);
//     char b[100];
//     gets(b);
    
//     // using strstr
    
//     p = strstr(a,b);
//     if(p)
//         printf("String got found");
//     else
//         printf("Not found");
// }

//15

// int main()
// {
//     int i;
//     char a[50];
//     printf("Enter the string");
//     gets(a);
//     for(i=0;a[i]!='\0';i++)
//     {
//         if((int)a[i]>=65&&(int)a[i]<=90)
//         {
//         (int)a[i] = (int)a[i]-32;
//         else if((int)a[i]>=90&&(int)a[i]<=122)
//         a[i]=a[i]+31;
//     }
//     printf("%s",a[i]);
// }

//16    

//17
// int main()
// {
//     int i;
//     char a[50];
//     printf("Enter the string :- ");
//     gets(a);
    
//     for(i=0;a[i]!='\0';i++)
//     {
//      if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122)||(a[i]-48>=0 && a[i]-48<=9))
//      {
//          printf("%c",a[i]);
//      }
//      else
//      {
//          continue;
//      }
//     }
// }


// 18

// int main()
// {
//     int i,p;
//     char a[50],b[50],count=0;
//     printf("Enter the string :- ");
//     gets(a);
//     printf("Give the character :- ");
//     gets(b);
    
//     for(i=0;a[i]!='\0';i++)
//     {
//         p=strstr(a,b);
//         if(p)
//         {
//             count++;
//         }
//     }
//     printf("%d",count);
// }
//
int main()
{
    int i,count=0;
    char a[50],b[50];
    printf("Enter the String :- ");
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
        for(i=0;b[i]!='\0';i++)
        {
            a[count] = b[i];
            count++;
        } 
    }
    printf("Concatenated String %s",a);
    
}

//20
// int main()
// {
//     int i;
//     char a[50],l[50],s[50];
//     printf("Enter the String :- ");
//     gets(a);
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]!=32)
//         {
//             a[i]=a[i];
//             continue;
//         }
//         else
//         {
//             s[i]=a[i];
//         }
//     }
//     printf("Largest String :- %s\n",l);
//     printf("Smallest String :- %s",s);
// }
//21
// int main()
// {
//     int i;
//     char a[50];
//     printf("Enter the String :- ");
//     gets(a);
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]>=97&&a[i]<=122)
//         {
//             a[i] = a[i]-32;
//         }
//     }
//     printf("%s",a);
    
// }
//22

// int main()
// {
//     int i;
//     char a[50];
//     printf("Enter the String :- ");
//     gets(a);
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]>=65&&a[i]<=90)
//         {
//             a[i] = a[i]+32;
//         }
//     }
//     printf("%s",a);
    
// }
//24

//25
// int main()
// {
//     int i;
//     char a[50];
//     printf("Enter the string :- ");
//     gets(a);
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]==32)
//         {
//             a[i]='*';
//         }
//     }
//     printf("%s",a);
// }
// 26
// int main()
// {
//     int i,count=0;
//     char a[50];
//     printf("Enter the string :- ");
//     gets(a);
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]==','||a[i]==';'||a[i]=='_'||a[i]=='!'||a[i]==':')
//         {
//             count++;
//         }
//     }
//     printf("Total Number of punctuation are %d",count);
// }
//28
// int main()
// {
//     int i,count=0;
//     char a[50],b[50];
//     printf("Enter the string :- ");
//     scanf("%s",a);
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]>=65&&a[i]<=90)
//         {
//          count=1;   
//         }
//     }
//     if(count==1)
//     {
//         printf("Yes it is upper");
//     }
//     else
//     {
//         printf("No it is not Upper");
//     }
// }
//29

// int main()
// {
//     int i;
//     char a[50];
//     printf("Enter the string :- ");
//     gets(a);
    
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]==32)
//         {
//             a[i]="";
//         }
//     }
//     printf("%s",a);
// }

//30

// int main()
// {
//     int i,p;
//     char a;
//     printf("Enter the character :- ");
//     scanf("%s",&a); 
//     p = isdigit(a);
//     if(p)
//     {
//         printf("Yes it is digit");
//     }
//     else
//     {
//         printf("No it is not");
//     }
// }

//31
// int main()
// {
//     int i;
//     char a[45];
//     printf("Enter the string :- ");
//     gets(a);
    
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]==32)
//         {
//             a[i] = '\n';
//         }
//     }
//     printf("%s",a);
// }

//34
// int main()
// {
//     int i;
//     char a[50];
//     printf("Enter the String :- ");
//     gets(a);
//     for(i=0;a[i]!='\0';i++)
//     {
//         if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
//         {
//             a[i]=a[i]-32;
//         }
//     }
//     printf("%s",a);
// }






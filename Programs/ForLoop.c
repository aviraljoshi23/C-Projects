/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//4

// int main()
// {
//     float i,num,n,sum=0,avg;
//     printf("Enter the number of elements :- ");
//     scanf("%f",&n);
//     for(i=1;i<=n;i++)
//     {
//         scanf("%f",&num);
//         sum=sum+num;
//     }
//     printf("The sum is %f",sum);
//     avg = sum/n;
//     printf("\n%f",avg);
// }

//5
// int main()
// {
//     int i,n,cube;
//     printf("Input the numbers term");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         cube = i*i*i;
//         printf("Number is : %d and cube of the %d is :%d",i,i,cube);
//         printf("\n");
//     }
// }
// //6
// int main()
// {
//     int i,n,j;
//     printf("Enter the tables:- ");
//     scanf("%d",&n);
    
//     for(i=1;i<=10;i++)
//     {
//         for(j=2;j<=n;j++)
//         {
//             printf("%d*%d=%d\t",j,i,j*i);
            
//         }
//         printf("\n");
//     }
// }
//7
// int main()
// {
//     int i,j,n;
//     printf("Enter the number:-- ");
//     scanf("%d",&n);
//     for(i=1;i<=10;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             printf("%d*%d=%d ",j,i,j*i);
//         }
//         printf(" \n ");
//     }
// }
//8

// int main()
// {
//     int i,j,n,sum=0,k=1;
//     printf("Enter  values for terms:-");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",k);
//         sum = sum+k;
//         k+=2;
//     }
//     printf("Sum of odd is %d",sum);
// }
// 9

// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             printf("^");
//             printf("*");
//         }
        
//         printf("\n");
//     
// }
//10

// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             //printf("%d",i);
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
//11
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             //printf("%d",i);
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// }
//12
// int main()
// {
//     int i,j,a=1;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",a++);
//             printf(" ");
//         }
//         printf("\n");
//     }
// }
//12

// int main()
// {
//     int i,j,k=1;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",k);
//             k++;
//         }
//         printf("\n");
//     }
// }
//13
// int main()
// {
//     int i,j,a=1,k;
//     for(i=1;i<=4;i++)
//     {
//         for(k=4;k>=i;k--)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",a++);
//             printf(" ");
//         }
//         printf("\n");
//     }
// }
//14
// int main()
// {
//     int i,j,a=1,k;
//     for(i=1;i<=4;i++)
//     {
//         for(k=4;k>=i;k--)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("*");
//             printf(" ");
//         }
//         printf("\n");
//     }
// }
//15
int main()
{
    int i,n,f=1;
    printf("Enter the number :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%d",f);
}
//16
// int main()
// {
//     int i,j,n,sum=0,k=2;
//     printf("Enter  values for terms:-");
//     scanf("%d",&n);
//     for(i=2;i<n;i++)
//     {
//         printf("%d\n",k);
//         sum = sum+k;
//         k+=2;
//     }
//     printf("Sum of Even is %d",sum);
// }
//19
// int main()
// {
//     int i,n;
//     float sum=0;
//     printf("Enter the terms:-");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("1/%d ",i);
//         sum = sum+1/(float)i;
//     }
//     printf(" = %.2f",sum);
// }
//20
// int main()
// {
//     int i,j,k,n;
//     // printf("ENTER THE SIZE OF TRIANGLE:- ");
//     // scanf("%d",&n);
    
//     for(i=0;i<2;i++)
//     {
//         for(k=0;k<=2;k++)
//         {
//             printf(" ");
//         }
//         for(j=0;j<i+1;j++)
//         {
//             printf("* ");
//         }
        
//         printf("\n");
//     }
// }

// 21
// int main()
// {
//     int i,n,num=9,sum=0;
//     printf("Pass the length:- ");
//     scanf("%d",&n);
    
//     for(i=1;i<=n;i++)
//     {
//         printf(" %d ",num);
//         sum =sum+num;\
//         num = (num*10)+9;
//     }
//     printf("\nTotal for the values \n%d",sum);
// }

//22

// int main()
// {
//     int i,j;
//     for(i=1;i<=6;i++)
//     {
//         for(j=i-1;j>0;j--)
//         {
//             if(j%2==0)
//             {
//                 printf("0");
//             }
//             else
//             {
//                 printf("1");
//             }
//         }printf("\n");
//     }
// }
//26
// int main()
// {
//     int i,n,num=1,sum=0;
//     printf("Pass the length:- ");
//     scanf("%d",&n);
    
//     for(i=1;i<=n;i++)
//     {
//         printf(" %d ",num);
//         sum =sum+num;\
//         num = (num*10)+1;
//     }
//     printf("\nTotal for the values \n%d",sum);
// }
//27 Perfect  number
// int main()
// {
//     int i,n,sum=0;
//     printf("Pass the input:- ");
//     scanf("%d",&n);
//     printf("The positive divisors ");
//     for(i=1;i<=n/2;i++)
//     {
//         if(n%i==0)
//         {
//             sum = sum+i;
//             //printf("The positive divisors %d");
//             printf(" %d ",i);
//         }

//     }
//     printf("\nSum of positive divisors is %d",sum);
//     if(sum==n)
//     {
//         printf("\nNumber is Perfect number");
//     }
//     else
//     {
//         printf("\nNumber is not perfect number");
//     }
// }

//28
// int main()
// {
//     int i,s,l,j,sum;
//     printf("Enter the starting  and ending length:- ");
//     scanf("%d %d",&s,&l);
//     for(i=s;i<=l;i++)
//     {
//         sum=0;
//         for(j=1;j<=i/2;j++)
//         {
//             if(i%j==0)
//             sum = sum+j;
//         }
//     if(sum==i)
//     {
//         printf("%d ",i);
//     }
// }

//29


//30 Armstrong Number
// int main()
// {
//     int num,r,i,count=1,sum=0,input_values,last_values;
//     printf("Enter the starting range");
//     //printf("\nPower Number");
//     scanf("%d",&input_values);
//     scanf("%d",&last_values);
//     for(i=input_values;i<=last_values;i++)
//     {
//         num=i;
//         while(num>0)
//         {
//             r = num%10;
//             sum = sum+(r*r*r);
//             num = num/10;
//         }
//         if(sum==i)
//         {
//             printf("%d\n",i);
//         }
//         sum=0;
//     }

// }

//31
//     *
//    *** 
//   *****
//  *******
// ********* 
//  *******
//   *****
//    ***
//     * 

// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=6-i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int i,j,k;
//     for(i=0;i<=5;i++)
//     {
//         for(j=0;j<=5;j++)
//         {
//             if(j>i-1)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
    
//     int i,j,k;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(j>=6-i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         for(j=2;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(j>i-1)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         for(j=1;j<=5-i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
//34 and 32

// int main()
// {
//     int i,j,s,l,temp=0;
//     printf("Enterb the starting range and last range \n");
//     scanf("%d %d",&s,&l);
//     for(i=s;i<=l;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i%j==0)
//             {
//                 temp=j;
//                 break;
//             }
//         }
//         if(temp==i)
//             printf("%d prime number\n",i);
//         else
//             printf("%d not prime number\n",i);
//     }
// }


//35 Fibonannci series
// int main()
// {
//     int i=0,a=0,b=1,c,num;
//     printf("Enter the number:- ");
//     scanf("%d",&num);
//     printf("%d %d",a,b);
//     while(i<num)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//         printf(" %d",c);
//         i++;
//     }
// }
//36 
//   1
//  121
// 12321

// int main()
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//         for(k=5;k>=i;k--)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         for(j=1;j<=i-1;j++)
//         {
//             printf("%d",i-j);
//         }
//         printf("\n");
//     }
// }
//37

// int main()
// {
//     int i,n,r=0,sum;
//     printf("Enter the number");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         r = r*10+n%10;
//         n = n/10;
//     }
//     printf("%d",r);
// }

//38

// int main()
// {
//     int n,temp,r,sum=0;
//     printf("Enter the number");
//     scanf("%d",&n);
//     temp=n;
//     while(n>0)
//     {
//         r = n%10;
//         sum = (sum*10)+r;
//         n = n/10;
//     }
//     if(sum==temp)
//     {
//         printf(" %d Palindrone",sum);
//     }
//     else
//     {
//         printf("%d is not Palindrone",sum);
//     }
// }

///39

// int main()
// {
//     int i,s,l,sum=0;
//     printf("Enter both the numbers :-");
//     scanf("%d %d",&s,&l);
//     for(i=s;i<=l;i++)
//     {
//         if(i%9==0)
//         {
//             printf("%d\n",i);
//             sum = sum+i;
//         }
//     }
//     printf("\nThe sum %d\n",sum);
// }
//40
// int main()
// {
//     int i,j,k;
//     char a='A';
//     for(i=1;i<=4;i++)
//     {
//         for(k=3;k>=i;k--)
//         {
//             printf(" ");
//         }
//         for(j=65;j<=(i-1)+65;j++)
//         {
//                 printf("%c",j);
//         }
//         for(j=65+(i-2);j>=65;j--)
//         {
//             printf("%c",j);
//         }
//         printf("\n");
//     }
// }
//47
// int main()
// {
//     int i,num,sum=0,f,temp;
//     printf("Enter the Number:- ");
//     scanf("%d",&num);
//     temp = num;
//     while(num>0){
//         f=1;
//         for(i=num%10;i>=1;i--)
//         {
//             f = f*i;
//         }
//         sum = sum+f;
//         num = num/10;
//     }
//     if(sum ==temp)
//     {
//         printf("%d Strong Number",sum);
//     }
//     else
//     {
//     printf("%d Not Strong Number",temp);
//     }
// }
//49

// int main()
// {
//     int a,d,n,i,tn=0,sum=0;
//     printf("Enter the starting number:- ");
//     scanf("%d",&a);
//     printf("Enter the number of items:- ");
//     scanf("%d",&n);
//     printf("Enter the common difference :- ");
//     scanf("%d",&d);
//     sum = (n*(2*a+(n-1)*d))/2;
//     tn = a+(n-1)*d;
//     printf("%d\n",tn);
//     printf("%d\n",sum);
//     for(i=a;i<=tn;i=i+d)
//     {
//         if(i!=tn)
//             printf("%d +",i);
//         else
//             printf("%d = %d",i,sum);
//     }
// }
//------------GOTO-------//
// int main()
// {
//     int i=1,j=1,n=10;
//     abc:
//     if(i<=10)
//     {
//     printf(" %d ",j);
//     j = j+n;
//     n = n+10;
//     i++;
//     goto abc;
//     }
    
//}
// 1 11 31 









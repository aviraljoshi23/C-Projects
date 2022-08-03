/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//--------------------------5--------------------//
// int fact(int x);
// int main()
// {
//     int i,n,sum =0,k;
//     printf("Enter the number ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         k = fact(i);
//         sum  = sum+(k/i);
//     }
//     printf("Sum is %d",sum);
// }
// int fact(int x)
// {
//     int i,f=1;
//     for(i=1;i<=x;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }
//--------------------4------------------//
// int prime(int x);
// int main()
// {
//     int a;
//     printf("Enterb the number :-");
//     scanf("%d",&a);
//     prime(a);
// }
// int prime(int x)
// {
//     int i,f=0;
//     if(x==0||x==1)
//     f=1;
    
//     for(i=2;i<=x/2;i++)
//     {
//         if(x%i==0)
//         f=1;
//         break;
//     }
//     if(f==0)
//     printf("Prime Number");
//     else
//     printf("Not A Prime Number");
// }
//-----------------------2----------//
// int square(int x);
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("Square of %d is %d",n,square(n));
// }
// int square(int x)
// {
//     return x*x;
// }
//------------------------8--------------------//
// int max(int a[],int size);
// int main()
// {
//     int i,size;
//     printf("Enter the size of array:- ");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Here is the largest element in array:- %d",max(arr,size));
// }
// int max(int a[],int size)
// {
//     int i,max=0;
//     for(i=0;i<size;i++)
//     {
//         if(max<a[i])
//         max = a[i];
//     }
//     return max;
// }
//------------------------9-------------------//
// int armstrong_check(int x);
// int perfect(int y);
// int main()
// {
//     int n;
//     printf("Enter the number:- ");
//     scanf("%d",&n);
//     armstrong_check(n);
//     perfect(n);
// }
// //Armstrong Number
// int armstrong_check(int x)
// {
//     int r,sum=0,temp;
//     temp = x;
//     while(x>0)
//     {
//         r = x%10;
//         sum = sum+(r*r*r);
//         x = x/10;
//     }
//     if(sum==temp)
//         printf("\n %d Armstrong Number",temp);
//     else
//         printf("\n %d is Not a Armstrong number",temp);
// }
// int perfect(int y)
// {
//     int i,r,sum = 0;
//     for(i=1;i<=y/2;i++)
//     {
//         if(y%i==0)
//         {
//             sum = sum+i;
//         }

//     }
//     if(sum==y)
//     {
//         printf("\n %d is Perfect number",y);
//     }
//     else
//     {
//         printf("\n %d is not perfect number",y);
//     }
// }
//-------------------10-------------//
// int perfect(int x);
// int main()
// {
//     int s,l,i;
//     printf("Enter the lowest value :- ");
//     scanf("%d",&s);
//     printf("Enter the largest value :- ");
//     scanf("%d",&l);
//     for(i=s;i<l;i++)
//     {
//         perfect(i);
//     }
// }
// int perfect(int x)
// {
//     int i,r,sum = 0;
//     for(i=1;i<=x/2;i++)
//     {
//         if(x%i==0)
//         {
//             sum = sum+i;
//         }
//     }
//     if(sum==x)
//     {
//         printf("%d\n",sum);
        
//     }
// }
//-----------------------12---------------//=
//void minmax(int a[],int size);
void  minmax(int a[],int size,int ret[])
{
    int i,max,min;
    int a1[1];
    max = a[0];
    min = a[1];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max  = a[i];
            ret[0]=max;
        }
        else if(a[i]<min)
        {
            min = a[i];
            ret[1]=min;
        }
    }
   // return 
    // printf("Biggest Number in array is %d\n",big);
    // //printf("Smallest Number %d\n",small);
    // printf("Smallest Number is second  %d",small);
}

int main()
{
    int i,size,ret[2];
    printf("Enter the size of array:- ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        minmax(arr,size,ret);
    }
    
    printf("Here is the largest %d \n Smallest  element  %d in array",ret[0],ret[1]);
}














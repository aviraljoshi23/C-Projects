/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int prime_value(int n);
int main()
{
    int i,num;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(prime_value(i)!=0)
        {
            if(prime_value(num-i)!=0)
            {
                printf("%d = %d + %d\n",num,i,(num-i));
            }
        }
    }
    return 0;
}

int prime_value(int n)
{
    int i,k = 1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        k = 0;
    }
    return k;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(k=6;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=7;j++)
        {
            //if(i==1||i==7||j==1||i==4&&j==3||i==3&&j==4||i==2&&j==5||i==5&&j==4||i==6&&j==5)
            if(i==1||j==1|i==7||i==7||j==7-i&&i<5||j==i-1&&i>4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

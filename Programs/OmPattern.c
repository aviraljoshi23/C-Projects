/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=25;i++)
    {
        for(j=1;j<=25;j++)
        {
            if(i==1&&j==8||i==2&&j==3||i==2&&j==3||i==3&&j==5||i==3&&j==7||i==3&&j==9||i==2&&j==6||
            i==2&&j==11||i==2&&j==7)
            {
                printf("*");
            }
            if(i==5&&j==3||i==4&&j==5||i==4&&j==7||i==4&&j==9||i==4&&j==11||i==5&&j==13||
            i==6&&j==13||i==7&&j==12||i==8&&j==10||i==8&&j==10||i==8&&j==12||i==9&&j==14||i==10&&j==14||i==11&&j==12||
            i==12&&j==10||i==12&&j==8||i==12&&j==6||i==11&&j==5||i==10&&j==3||i==8&&j==13||i==7&&j==15||i==6&&j==17||
            i==6&&j==19||i==7&&j==21||i==8&&j==22||i==9&&j==21||i==10&&j==20||i==11&&j==18)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}

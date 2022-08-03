/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
//List of solved programs on C language 'goto' statement
//1)
// int main()
// {
//     int i=1;
//     abc:
//     printf("%d\n",i);
//     i++;
//     if(i<=10)
//     goto abc;
// }
//2 
// int main()
// {
//     int i=10;
//     abc:
//     printf("%d\n",i);
//     i--;
//     if(i>=1)
//     goto abc;
// }
//3
// int main()
// {
//     int i=1,n;
//     printf("Enter the table :- ");
//     scanf("%d",&n);
//     abc:
//     printf("%d*%d=%d\n",n,i,n*i);
//     i++;
//     if(i<=10)
//     goto abc;
// }
//5
// int main()
// {
//     int i=1;
//     abc:
//     printf("Hello\n");
//     if(i<10)
//     {
//     i++;
//     goto abc;
//     }
// }
//6
// int main()
// {
//     int i=1,n;
//     printf("Enter the N numbers");
//     scanf("%d",&n);
//     abc:
//     if(i<=n)
//     {
//     printf("%d :-Square [%d] Cube [%d]\n",i,i*i,i*i*i);
//     i++;
//     goto abc;
//     }
// }
//7
// int main()
// {
//     int i=1,j=1,n=10;
//     abc:
//     if(i<=10)
//     {
//         printf("%d\n",j);
//         j = j+n;
//         n = n+10;
//         i++;
//         goto abc;
//     }
// }
//----------------------------------------------------------------------\
// 1 
//     int main()
//     {
//         printf("%d ", 1);
//         goto l1;
//         printf("%d ", 2);
//         l1:goto l2;
//         printf("%d ", 3);
//         l2:printf("%d ", 4);
//   }
// 2 
    // int main()
    // {
    //     printf("%d ", 1);
    //     l1:l2:
    //     printf("%d ", 2);
    //     printf("%d\n", 3);
    // }
//03
    // int main()
    // {
    //     printf("%d ", 1);
    //     goto l1;
    //     printf("%d ", 2);
    // }
    // void foo()
    // {
    //     l1 : printf("3 ", 3);
    // }
//4
    // int main()
    // {
    //     int i = 0, j = 0;
    //     while (i < 2)
    //     {
    //         l1 : i++;
    //         while (j < 3)
    //         {
    //             printf("Loop\n");
    //             goto l1;
    //         }
    //     }
    // }
//5
    // int main()
    // {
    //     int i = 0, j = 0;
    //     while (l1: i < 2)
    //     {
    //         i++;
    //         while (j < 3)
    //         {
    //             printf("loop\n");
    //             goto l1;
    //         }
    //     }
    // }
//6
// int main()
//     {
//         int i = 0, j = 0;
//         l1: while (i < 2)
//         {
//             i++;
//             while (j < 3)
//             {
//                 printf("loop\n");
//                 goto l1;
//             }
//         }
//     }
//7
//   void main()
//     {
//         int i = 0;
//         if (i == 0)
//         {
//             goto label;
//         }
//         label: printf("Hello");
//     }
//8
// void main()
//     {
//         int i = 0, k;
//         if (i == 0)
//             goto label;
//             for (k = 0;k < 3; k++)
//             {
//                 printf("hi\n");
//                 label: k = printf("%03d", i);
//             }
//     }



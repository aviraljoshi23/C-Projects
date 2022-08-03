/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// int main()
// {
//     int i,j,row,col;
//     printf("Enter the rows and columns size:- ");
//     scanf("%d %d",&row,&col);
//     int a[row][col];
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             scanf("%d",&a[i][j]);
            
//         }
//     }
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++){
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }
//--------------------21---------------------//
// int main()
// {
//     int i,j,k,row,col,m,sum=0;
//     printf("Enter the rows and columns size:- ");
//     scanf("%d %d",&row,&col);
//     int a[row][col],b[row][col],c[row][col];
//     printf("Enter the inputs in array A\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the inputs in array B");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("Multiplication of A and B\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             for(k=0;k<col;k++)
//             {
//                 m=a[i][k]*b[k][j];
//                 sum = sum+m;
//             }
//             c[i][j] = sum;
//             sum = 0;
//         printf(" %d ",c[i][j]);
//         }
//         printf("\n");
//     }
// }
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             printf("%d",c[i][j]);
//         }
//         printf("\n");
//     }
// }
//------------------25---------------//
// int main()
// {
//     int i,j,k,row,col,m,sum=0;
//     printf("Enter the rows and columns size:- ");
//     scanf("%d %d",&row,&col);
//     int a[row][col],b[row][col],c[row][col];
//     printf("Enter the inputs in array A\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     // printf("Enter the inputs in array B");
//     // for(i=0;i<row;i++)
//     // {
//     //     for(j=0;j<col;j++){
//     //         scanf("%d",&b[i][j]);
//     //     }
//     // }
//     // sum logic 
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             sum = sum+a[i][j];
//             printf("\t%d ",a[i][j]);
//         }
//         printf("\t%d\n",sum);
//         sum=0;
//     }
//     // Bottom sum;
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             sum = sum+a[j][i];
//         }
//          printf("\t%d",sum);
//          sum=0;
//     }
// }
// 22
// int main()
// {
//     int i,j,row,col;
//     printf("Enter the rows and columns size:- ");
//     scanf("%d %d",&row,&col);
//     int a[row][col],b[row][col];
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             printf("Enter the  matrix [%d] [%d]",i,j);
//             scanf("%d",&a[i][j]);
            
//         }
//     }
//     printf("Matrix of the array\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             printf(" %d ",a[j][i]);
//         }
//         printf("\n");
//     }
// }
// // int main()
// {
//     int i,j,n,sum=0,sum1=0;
//     printf("Enter the size");
//     scanf("%d",&n);
//     int a[n][n],b[n][n];
//     printf("Enter elements\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//         scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Matrix\n");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if(i==j)
//             {
//                 sum = sum+a[i][j];
//             }
//             if(i+j==n-1)
//             {
//                 sum1 = sum1+a[i][j];
//             }
//         }
//     }
//     printf("Right Diagonal Sum %d\n",sum1);
//     printf("Sum of Left Diagonal %d",sum);
// }
//--------------------26----------------------//
// int main()
// {
//     int i,j,row,col;
//     printf("Enter the rows and columns size:- ");
//     scanf("%d %d",&row,&col);
//     int a[row][col],b[row][col];
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             printf("Enter the  matrix [%d] [%d]",i,j);
//             scanf("%d",&a[i][j]);
            
//         }
//     }
//     printf("Matrix of the array\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("--------Upper  Matrix---------")
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             if(j>i)
//             {
//                 a[i][j]=0;
//                 printf(" %d ",a[i][j]);
//             }
//             else
//             {
//                 printf(" %d ",a[i][j]);
   
//             }
//         }
//         printf("\n");
//     }
// }
//-------------27--------------//

// int main()
// {
//     int i,j,row,col;
//     printf("Enter the rows and columns size:- ");
//     scanf("%d %d",&row,&col);
//     int a[row][col],b[row][col];
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             printf("Enter the  matrix [%d] [%d]",i,j);
//             scanf("%d",&a[i][j]);
            
//         }
//     }
//     printf("Matrix of the array\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             printf(" %d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("--------Lower  Matrix---------\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             if(j<i)
//             {
//                 a[i][j]=0;
//                 printf(" %d ",a[i][j]);
//             }
//             else
//             {
//                 printf(" %d ",a[i][j]);
   
//             }
//         }
//         printf("\n");
//     }
// }
//-----------------------28-------------------//
// int main()
// {
//     int i,j,k,row,col,m,sum=0,sum1;
//     printf("Enter the rows and columns size:- ");
//     scanf("%d %d",&row,&col);
//     int a[row][col],b[row][col],c[row][col];
//     printf("Enter the inputs in array A\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the inputs in array B");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("Sum of Array A and B\n");
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             c[i][j] = a[i][j]+b[i][j];
//              printf(" %d ",c[i][j]);

//         }
//         printf("\n");
//     }
//     printf("Row Sum and Column Sum\n");
//     for(i=0;i<row;i++)
//     {
//         sum = 0;
//         for(j=0;j<col;j++)
//         {
//             sum = sum+c[i][j];
//             printf(" %d ",c[i][j]);
            
//         }printf(" %d\n",sum);
//     }
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             sum1 = sum1+c[j][i];
//         }
//         printf(" %d",sum1);
//         sum1=0;
//     }
// }



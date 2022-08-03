/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// int main()
// {
// int size, i,sum=0,avg,big=0;
// printf("Enter the number of student:\n");
// scanf("%d", &size);

// int arr[size];
// char arr1[size];
// printf("Enter the age of student:-\n");
// for (i = 0; i < size; i++)
// {
//     scanf("%d",&arr[i]);
// }
// for(i=0;i<size;i++)
// {
// //printf("The array value of arr[%d] is:[%d]\n",i,arr[i]);
// printf("Age of student [%d] is [%d]\n",i,arr[i]);
// sum = sum+arr[i];
// if(arr[i]>big)
// big=arr[i];
// }
// avg = sum/size;
// printf("Sum of numbers is :- [%d]\n",sum);
// printf("%d This is biggest number",big);
// }
// printf("Average age of student's is [%d]\n",avg);
// for(i=0;i<size;i++)
// {
//     if(arr[i]>=18)
//     printf("Oye %d saal ke tu jaa sakta hai(jldi jaa yaha se)\n",arr[i]);
//     else
//     printf("Oye %d saal ke tu nhi jaa sakta (Tu dhik mat jana)\n",arr[i]);
// }
// }
//2
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
//     printf("Reverse Number");
//     for(i=size-1;i>=0;i--)
//     {
//         printf("\n%d",arr[i]);
//     }
//     printf("\n");
// }
//5
// int main ()
// {
//   int i, j, size, sum = 0;
//   printf ("Enter The Value ");
//   scanf ("%d", &size);
//   int arr[size];
//   for (i = 0; i < size; i++)
//     {
//       scanf ("%d", &arr[i]);
//     }
//   printf ("---------------Duplicate values------------\n");
//   for (i = 0; i < size; i++)
//     {
//       for (j = i + 1; j < size; j++)
//       {
//           if (arr[i] == arr[j])
//           {
//               printf ("Duplicate value %d\n", arr[i]);
//               sum++;
//           }
// 	}
//       printf ("\n");
//     }
//   printf ("Sum of Duplicate numbers %d", sum);
// }

//6
// int main()
// {
//     int i,j,size,sum=0,k;
//     printf("Enter The Value:- ");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("---------------Unique Values------------\n");
//     for(i=0;i<size;i++)
//     {
//         k=0;
//         for(j=0;j<size;j++)
//         {
//             if(arr[i]==arr[j]&&j!=i)
//             {
//                 k++;
//                 //printf("Unique values %d\n",arr[j]);
//             }
//         }
//         if(k==0)
//         {
//             printf("Unique values %d",arr[i]);
//         }
//         printf("\n");
//     }
// }
//7 Write a program in C to merge two arrays of same size sorted in decending order.
// int main()
// {
//     int i,j,size,temp=0,a;
//     printf("Enter the size for Array one:- ");
//     scanf("%d",&size);
//     //printf("Enter the size for Array two:- ");
//     int arr[size],arr1[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the second array \n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     a = size*2;
//     for(i=size;i<=a;i++) 
//     {
//         arr[i] = arr1[i-size]; 
//     }
//     printf("After sorting the array\n");
//     for(i=0;i<a;i++)
//     {
//         temp = 0;
//         for(j=i+1;j<a;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 //arr[i] = arr[j]+arr[i];
//                 //arr[j] = arr[i]-arr[j];
//                 //arr[i] = arr[i]-arr[j];
//                 temp  = arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//         for(i=0;i<a;i++)
//         {
//             printf(" %d ",arr[i]);
//         }

// }

//8 Write a program in C to count the frequency of each element of an array.

// int main()
// {
//     int size,i,n,j,k,cmn,Frequency;
//     printf("Enter the Size of array:- ");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     // 5 3 4 5
//     for(i=0;i<size;i++)
//     {
//         Frequency=1;
//         cmn=0;
//         for(j=0;j<size;j++)
//         {

//             if(arr[j]==arr[i]&&j!=i)
//             {
//                 Frequency++;
//                 if(j<i)
//                 cmn++;
//             }
//         }
//     if(cmn==0)
//     {
//         printf("Frequency for the %d is %d\n",arr[i],Frequency);
//     }
//     }
// }
//9 Write a program in C to find the maximum and minimum element in an array.B 
// int main()
// {
//     int i,size,big,small;
//     printf("Enter the number:-");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     big = arr[0];
//     small = arr[0];
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]>big)
//         {
//             big  = arr[i];
//         }
//         //else if(arr[i]<small)
//         else if(arr[i]<small)
//         {
//             small = arr[i];
//         }
//     }
//     printf("Biggest Number in array is %d\n",big);
//     //printf("Smallest Number %d\n",small);
//     printf("Smallest Number is second  %d",small);
// }
//10 Write a program in C to separate odd and even integers in separate arrays
// int main()
// {
//     int i,size,big,small;
//     printf("Enter the number:-");
//     scanf("%d",&size);
//     int a[size],b[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<size;i++)
//     {
//         if(a[i]%2==0)
//         {
//             b[i]=0;
//         }
//         else
//         {
//             b[i]=a[i];
//             a[i]=0;
//         }
//     }
//     printf("Even Array\n");
//     for(i=0;i<size;i++)
//     {
//         if(a[i]!=0)
//             printf("%d\n",a[i]);
//     }
//     printf("Odd Array\n");
//     for(i=0;i<size;i++)
//     {
//         if(b[i]!=0)
//         {
//             printf("%d\n",b[i]);
//         }
//     }

// }
// 11 Write a program in C to sort elements of array in ascending order.
// int main()
// {
//     int i,size,j,temp;
//     printf("Enter the number:-");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("After sorting in Descending  order the array\n");
//     for(i=0;i<size;i++)
//     {
//         for(j=i+1;j<size;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//         for(i=0;i<size;i++)
//         {
//             printf("%d ",arr[i]);
//         }
// }
//12 Write a program in C to sort elements of the array in descending order.

// int main()
// {
//     int i,size,j,temp;
//     printf("Enter the number:-");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("After sorting in Ascending order the array\n");
//     for(i=0;i<size;i++)
//     {
//         for(j=i+1;j<size;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//         for(i=0;i<size;i++)
//         {
//             printf("%d",arr[i]);
//         }
// }
// //13 Write a program in C to insert New value in the array (sorted list ).
// int main()
// {
//     int i,size,pos,num,j,k,temp=0;
//     printf("Enter the Size of Array:- ");
//     scanf("%d",&size);
//     int arr[size];

//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the position where you want to insert ");
//     scanf("%d",&pos);
//     printf("Enter the number you want ");
//     scanf("%d",&num);
//     // 1 2 3 4 5
//     // Insertion logic 
//     size+=1;
//     for(i=size;i>=pos;i--)
//     {
//         arr[i]=arr[i-1];
//     }
//     // Here I'm assigning the input
//     j = pos-1;
//     arr[j]=num;
//     printf("Sorting of array \n");
//     for(i=0;i<size;i++)
//     {
//         for(j=i+1;j<size;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(i=0;i<size;i++)
//     {
//         printf(" %d ",arr[i]);
//     }
//14 Write a program in C to insert New value in the array (unsorted list ).
// int main()
// {
//     int i,size,pos,num,j;
//     printf("Enter the Size of Array:- ");
//     scanf("%d",&size);
//     int arr[size];

//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the position where you want to insert ");
//     scanf("%d",&pos);
//     printf("Enter the number you want ");
//     scanf("%d",&num);
//     // 1 2 3 4 5
//     size+=1;// Incrementing the position value
//     for(i=size;i>=pos;i--)
//     {
//         arr[i]=arr[i-1];
//     }
//     // Here I'm assigning the input
//     j = pos-1;
//     arr[j]=num;

//     for(i=0;i<size;i++)
//     {
//         printf(" %d ",arr[i]);
//     }
// }
//15 Write a program in C to delete an element at desired position from an array
// int main()
// {
//     int i,pos,size,j;
//     printf("Enter the Size of Array:- ");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the position to delete :- ");
//     scanf("%d",& pos);
//     size--;
//     for(i=pos-1;i<size;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     for(i=0;i<size;i++)
//     {
//         printf(" %d ",arr[i]);
//     }
// }
// //16 Write a program in C to find the second largest element in an array.
// int main()
// {
//     int i,size,big,small,second_max=0;
//     printf("Enter the number:-");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     big = arr[0];
//     //small = arr[0];
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]>big)
//         {
//             second_max = big;
//             big  = arr[i];
//         }
//         else if(arr[i]>second_max&&arr[i]<big)
//         {
//             second_max = arr[i];
//         }
//     }
//     printf("Biggest Number in array is %d\n",big);
//     //printf("Smallest Number %d\n",small);
//     printf("Second Biggest %d",second_max);
// }
//17 Write a program in C to find the second smallest element in an array.
// int main()
// {
//     int i,size,min,second_min=9999;
//     printf("Enter the number:-");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     min = arr[0];
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]<min)
//         {
//             second_min = min;
//             min = arr[i];
//         }
//         else if(arr[i]<second_min&&arr[i]>min)//&&arr[i]>min
//         {
//             second_min = arr[i];//arr[i];
//         }
//     }
//     printf("Smallest values is %d\n",min);
//     printf("Second Smallest values %d",second_min);  
// }

//18
//int main()
// {
//     int i,j,size,temp=0,a,b;
//     printf("Enter the size for Array one:- ");
//     scanf("%d",&size);
//     //printf("Enter the size for Array two:- ");
//     int arr[size],arr1[size],arr2[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the second array \n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     printf("Enter the third array \n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     a=size+size;
//     for(i=size;i<=a;i++) 
//     {
//         arr[i] = arr1[i-size]; 
//     }
//     b =a+size;
//     for(i=a;i<=b;i++)
//     {
//         arr[i] = arr2[i-a];
//     }
//     printf("After sorting the array\n");
//     for(i=0;i<b;i++)
//     {
//         temp = 0;
//         for(j=i+1;j<b;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 //arr[i] = arr[j]+arr[i];
//                 //arr[j] = arr[i]-arr[j];
//                 //arr[i] = arr[i]-arr[j];
//                 temp  = arr[i];
//                 arr[i]= arr[j];
//                 arr[j]= temp;
//             }
//         }
//     }
//     for(i=0;i<b;i++)
//     {
//         printf(" %d || ",arr[i]);
//     }

// }

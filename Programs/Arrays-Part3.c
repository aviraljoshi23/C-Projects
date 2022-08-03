/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

//1
// int main()
// {
//     int arr[5], i=0;
//     while(i<5)
//         arr[i]=++i;

//     for(i=0; i<5; i++)
//         printf("%d, ", arr[i]);

//     return 0;
// }
//2
// int main()
// {
//     int arr[10]={10};
//     printf("%d\n",arr[0]);
//     return 0;
// }

//3
// int main()
// {
//      arr[] = {12, 14, 15, 23, 45};
//     printf("%u, %u\n", arr, &arr);
//     return 0;
// }
//4
// int main()
// {
//     long int arr[] = {12.4, 2.3, 4.5, 6.7};
//     printf("%d\n",sizeof(arr)/sizeof(arr[]));

//     return 0;
// }
//5
// int main()
// {
//     int arr[]={2, 3, 4, 1, 6};
//     printf("%u, %u, %u\n", arr, &arr[0], &arr);
//     return 0;
// }
//6
// int main()
// {
//     int a[5] = {5, 1, 15, 20, 25};
//     int i, j, m;
//     i = ++a[1];
//     j = a[1]++;
//     m = a[i++];
//     printf("%d, %d, %d", i, j, m);
//     return 0;
// }
//7
// int
// main ()
// {
//   int arr[] = { };
//   printf ("%d", sizeof (arr));
//   return 0;
// }
//8
// int main(void)
// {
//     int i;
//     int power_of_ten[5] = {
//                             00001,
//                             00010,
//                             0x100,
//                             01000,
//                             10000,
//                         }; 
//     for (i = 0; i < 5;i++)
//         printf("%d ", power_of_ten[i]);
//     printf("\n"); 
//     return 0;
// }
//9 
// int main()
// {
// 	int a, b, c;	
// 	int arr[5] = {1, 2, 3, 25, 7};
// 	a = ++arr[1];
// 	b = arr[1]++;
// 	c = arr[a++];
// 	printf("%d--%d--%d", a, b, c);
// 	return 0;
//}
//10

// int main()
// {
// 	char arr[]={'A', 'B', 'c', 'd', 'E', 'f' };// single byte = 4 total 4*6=24
// 	int size=sizeof(arr)/sizeof(arr[2]);
// 	printf("%d\n", size);
// 	return 0;
// }
//---1----//
// int main()
// {
//     int i,size;
//     printf("Enter the size :- ");
//     scanf("%d",&size);
//     int arr[size];
//     for (i = 0; i < size;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(i=0;i<size;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
//---2----//
// int main()
// {
//     int i,size,temp;
//     printf("Enter the size of array:- ");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Total Number of element\n");
//     printf("%ld",sizeof(arr));
// }
//----5----//
// int main()
// {
//     int i,j,size,m,c,y,p,temp;
//     float x;
//     printf("Enter the size of array:- ");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<size;i++)
//     {
    
//         for(j=0;j<size;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 temp = arr[i];
//                 arr[i]  =arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("---------------Ascending Values-----------\n");
//     for(i=0;i<size;i++)
//     {
//       printf("%d\n",arr[i]);  
//     }
//     printf("---------------Ascending Values-----------\n");
//     // Ascending order of array
//     if(size%2==0)
//     {
//             m = ((size/2)-1);
//             p = size/2;
//             c = ((m+p)/2);
//             //x = (arr[c]+arr[c+1])/2;
//             printf("Median for the array %d",(arr[c]+arr[c+1])/2);
//     }
//     else
//     {
//             printf("Median for Array is %d",arr[(size-1)/2]);
//     }
// }
//-------------------------11-------------------//
// int main()
// {
//     int i,size,num;
//     printf("Enter the size :- ");
//     scanf("%d",&size);
//     int arr[size];
//     for (i = 0; i < size;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the valu:- ");
//     scanf("%d",&num);
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]%num==0)
//         {
//             printf("%d is divisible by b %d\n",arr[i],num);
//         }
//     }
// }
//-------------------------13------------------//  
// int main()
// {
//     int i,size;
//     printf("Enter the size :- ");
//     scanf("%d",&size);
//     int arr[size];
//     for (i = 0; i < size;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Array values replaced\n");
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]%2==0)
//         {
//             arr[i]=0;
//         }
//         else
//         {
//             arr[i]=1;
//         }
//         printf("%d\n",arr[i]);
//     }
// }
//--------------------14-------------//
// int main()
// {
//     int i,size,num;
//     printf("Enter the size :- ");
//     scanf("%d",&size);
//     int arr[size];
//     for (i = 0; i < size;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the number to find its postions\n");
//     scanf("%d",&num);
//     for(i=0;i<size;i++)
//     {
//         if(arr[i]==num)
//         {
//             printf("%d is on %d\n",num,i);
//         }
//     }
// }
//----------------------15---------------//
//--------------------------Pawan sir*-----------------//
// int main()
// {
//     int i,temp,size;
//     printf("Enter the array size\n");
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     temp = arr[size-1];
//     for(i=size-1;i>0;i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
//     for(i=0;i<size;i++)
//     {
//         printf("[%d]\n",arr[i]);
//     }


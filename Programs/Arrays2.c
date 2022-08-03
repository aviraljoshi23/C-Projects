/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
//1)
  int size,i,big=0;
  printf("Enter size");
  scanf("%d",&size);
  int arrl[size];
  printf("Enter array element=\n ");
  for(i=0;i<size;i++)
  {
      scanf("%d",&arrl[i]);
    
      if(arrl[i]>=big)
      big=arrl[i];
  }
  for(i=0;i<size;i++)
  {
      printf("Value of a[%d] = %d\n",i,arrl[i]);
  }
  printf("\nBig=%d",big);
    return 0;


//2)
//  int i,a[5];

//  printf("enter age=\n");
//  for(i=0;i<5;i++)
//  {
//      scanf("%d",&a[i]);

//  }
//  printf("students age =\n");
//  for(i=0;i<5;i++)
//  {
//     printf("age of student%d =%d\n",i,a[i]);
//  }

//3)
// int size,i,avg,sum=0;
//   printf("Enter array size=");
//   scanf("%d",&size);
//   int arrl[size];
//   printf("Enter student age=\n ");
//   for(i=0;i<size;i++)
//   {
//       scanf("%d",&arrl[i]);
//       sum=sum+arrl[i];
//   }
//   for(i=0;i<size;i++)
//   {
//       printf("Value of a[%d] = %d\n",i,arrl[i]);
//   }
//   avg=sum/size;
//   printf("Average age =%d",avg);

//4)

//   int size, i, avg, sum = 0;
//   printf ("Enter array size=");
//   scanf ("%d", &size);
//   int arrl[size];
//   printf ("Enter student age=\n ");
//   for (i = 0; i < size; i++)
//     {
//       scanf ("%d", &arrl[i]);
//       sum = sum + arrl[i];
//     }
//   for (i = 0; i < size; i++)
//     {
//       printf ("Value of a[%d] = %d\n", i, arrl[i]);
//     }
//   avg = sum / size;
//   printf ("Sum=%d\n", sum);
//   printf ("Average age =%d", avg);




}

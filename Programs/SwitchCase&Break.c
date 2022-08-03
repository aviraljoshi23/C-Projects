/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//1) What will be the output of following program ?
// void main()
// {  
// 	int a=10;
// 	switch(a){
// 		case 5+5:
// 			printf("Hello\n");
// 		default:
// 			printf("OK\n");
// 	}
// } 
//2) What will be the output of following program ?
// void main()
// {  
// 	int a=2;
// 	switch(a)
// 	{
// 		printf("Message\n");
// 		default:
// 			printf("Default\n");
// 		case 2:
// 			printf("Case-2\n");
// 		case 3:
// 			printf("Case-3\n");
// 	}
// 	printf("Exit from switch\n");
// } 
//3) What will be the output of following program 
// void main()
// {
// 	int a=2;
// 	int b=a;
// 	switch(b)
// 	{
// 		case a:// Solution case 2:
// 			printf("Case-a\n");		break;
// 		case 3:
// 			printf("Case-3\n");		break;
// 		default:
// 			printf("No option\n");	break;
// 	}
// 	printf("Exit from switch");
// } 
//4 What will be the output of following program ?
// void main()
// {
//     short day=2;
//     switch(day)
//     {
//         case 2: || case 22: 
//             printf("%d nd",day);
//         break;
//         default:
//             printf("%d th",day);
//         break;  
//     }
// }

//5) What will be the output of following program ?	#include <stdio.h>
// void main()
// {
//     short a=2;
//     switch(a)
//     {
//         case 1L:
//             printf("One\n"); 
//             break;
//         case 2L:
//             printf("Two\n"); 
//             break;
//         default:
//             printf("Else\n");
//             break;
//     }
// }
//6) What will be the output of following program ?
//#include <stdio.h>
// void main(){
//      static int staticVar;
//      int j;
//      for(j=0;j<=5;j+=2)
//      switch(j){
//         case 1: 
//             staticVar++;
//             break;
//         case 2: 
//             staticVar+=2;
//         case 4: 
//             staticVar%=2;
//             j=-1;
//             continue;
//         default: 
//             --staticVar;
//             continue;
//      }
//      printf("%d",staticVar); 
// }
//7) What will be the output of following program ?
//#include <stdio.h>
// void main()
// {
//     int a=2;
//     switch(a/2*1.5)
//     {
//         case 1:
//             printf("One...");
//             break;
//         case 2:
//             printf("Two...");
//             break;
//         default:
//             printf("Other...");
//             break;
//     }
// }
//9) Can we use string value/variable in switch test condition?
// int main()
// {
//     int x;
//     float y=7.0;
//     switch(x=y+1)
//     {
//         case 8: printf("It's Eight."); break;
//         default: printf("Oops No choice here!!!");
//     }
// }
//10. What will be the output of the following C code? 
//int main()
//     {
//         int a = 0, i = 0, b;
//         for (i = 0;i < 5; i++)
//         {
//             a++;
//             continue;
//         }
//     }
//11. What will be the output of the following C code?
//   int main()
//     {
//         int a = 0, i = 0, b;
//         for (i = 0;i < 5; i++)
//         {
//             a++;
//             if (i == 3)
//                 break;
//         }
//     }
//14. What will be the output of the following C code?
// void main()
//     {
//         int i = 0, j = 0;
//         for (i = 0;i < 5; i++)
//         {
//             for (j = 0;j < 4; j++)
//             {
//                 if (i > 1)
//                     break;
//             }
//             printf("Hi \n");
//         }
//     }
//15. What will be the output of the following C code?
    // void main()
    // {
    //     int i = 0;
    //     int j = 0;
    //     for (i = 0;i < 5; i++)
    //     {
    //         for (j = 0;j < 4; j++)
    //         {
    //             if (i > 1)
    //                 continue;
    //                 printf("Hi \n");
    //         }
    //     }
    // }
//16. What will be the output of the following C code?
// void main()
//     {
//         int i = 0;
//         for (i = 0;i < 5; i++)
//             if (i < 4)
//             {
//                 printf("Hello");
//                 break;
//             }
//     }
//17. What is the output of this C code?
// void main()
//     {
//         int i = 0;
//         if (i == 0)
//         {
//             printf("Hello");
//             break;
//         }
//     }
//18. What is the output of this C code?
// int main()
//     {
//         int i = 0;
//         do
//         {
//             i++;
//             if (i == 2)
//                 continue;
//                 printf("In while loop ");
//         } while (i < 2);
//         printf("%d\n", i);
//     }
//19. What is the output of this C code?
// int main()
//     {
//         int i = 0, j = 0;
//         for (i; i < 2; i++){
//             for (j = 0; j < 3; j++){
//                 printf("1\n");
//                 break;
//             }
//             printf("2\n");
//         }
//         printf("after loop\n");
//     }
//20. What is the output of this C code?
// int main()
//     {
//         int i = 0;
//         while (i < 2)
//         {
//             if (i == 1)
//                 break;
//                 i++;
//                 if (i == 1)
//                     continue;
//                     printf("In while loop\n");
//         }
//         printf("After loop\n");
//     }
//21. What is the output of this C code?
// int main()
//     {
//         int i = 0;
//         char c = 'a';
//         while (i < 2){
//             i++;
//             switch (c) {
//             case 'a':
//                 printf("%c ", c);
//                 break;
//                 break;
//             }
//         }
//         printf("after loop\n");
//     }
//22. What is the output of this C code?
// int main()
//     {
//         printf("before continue ");
//         continue;
//         printf("after continue\n");
//     }
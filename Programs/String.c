#include<stdio.h>
#include<string.h>
//4




/*int main()
{

    char a[50];
    printf("Enter the string :- ");
    gets(a);
    printf(" String after reverse :- %s",strrev(a));
}*/

//5
/*int main()
{
  	char str[100];
  	int i, totalwords=1;
  	printf("Please Enter any String :- ");
  	gets(str);

  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;
		}
	}
	printf("\n The Total Number of Words in this String %s  = %d", str, totalwords);
}*/
//6
/*int main()
{
  	char Str1[100], Str2[100];
  	int result, i;

  	printf("\n Please Enter the First String :  ");
  	gets(Str1);

  	printf("\n Please Enter the Second String :  ");
  	gets(Str2);

  	for(i = 0;Str1[i] == '\0'; i++);

  	if(Str1[i] < Str2[i])
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}
}
*/
//8
/*int main(){
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}*/
//11
/*int main()
{
    char str[100],Temp;
    int i, j, len;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                Temp = str[j];
                str[j] = str[j+1];
                str[j+1] = Temp;
            }
        }
    }
    printf("Same string in ascending order:\n%s", str);
}*/

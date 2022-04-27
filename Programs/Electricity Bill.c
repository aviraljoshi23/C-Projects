#include <stdio.h>
#include <string.h>

void main()
{
   int custid, unit;
   float chg, surchg=0, gramt,netamt;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",connm);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   if (unit >600){
        chg = 2.0;
        gramt = unit*chg;
           if (gramt>400)
            surchg = gramt*15/100.0;
           netamt = gramt+surchg;
           printf("\nElectricity Bill\n");
           printf("Customer IDNO                       :%d\n",custid);
           printf("Customer Name                       :%s\n",connm);
           printf("unit Consumed                       :%d\n",unit);
           printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
           printf("Surchage Amount                     :%8.2f\n",surchg);
           printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);
   }
   else	if (unit>=200 && unit<400){
        chg = 1.50;
            gramt = unit*chg;
           if (gramt>300)
            surchg = gramt*15/100.0;
           netamt = gramt+surchg;
           printf("\nElectricity Bill\n");
           printf("Customer IDNO                       :%d\n",custid);
           printf("Customer Name                       :%s\n",connm);
           printf("unit Consumed                       :%d\n",unit);
           printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
           printf("Surchage Amount                     :%8.2f\n",surchg);
           printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);
        }
	else if (unit>=200 && unit<600){
        chg = 1.80;
            gramt = unit*chg;
           if (gramt>300)
            surchg = gramt*15/100.0;
           netamt = gramt+surchg;
           printf("\nElectricity Bill\n");
           printf("Customer IDNO                       :%d\n",custid);
           printf("Customer Name                       :%s\n",connm);
           printf("unit Consumed                       :%d\n",unit);
           printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
           printf("Surchage Amount                     :%8.2f\n",surchg);
           printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);
	}
    else{
        chg = 2.00;
            gramt = unit*chg;
           if (gramt>300)
            surchg = gramt*15/100.0;
           netamt = gramt+surchg;
           printf("\nElectricity Bill\n");
           printf("Customer IDNO                       :%d\n",custid);
           printf("Customer Name                       :%s\n",connm);
           printf("unit Consumed                       :%d\n",unit);
           printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
           printf("Surchage Amount                     :%8.2f\n",surchg);
           printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);
    }
}
/*
int main()
{

    int i,j,k;
    for(i=1;i<=8;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=14-i;k>i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
*/

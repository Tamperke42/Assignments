//program to calculate the fine of overdue books in library 
/*
program to calculate the fine of overdue books in library 
Author:Alvin 
Date:25/9/2024
*/
//preprocessor directive 
#include<stdio.h>
int main () {
int bookID;
int duedate;
int returndate;

printf("enter the bookID\n");
scanf("%d",&bookID);
printf("enter the duedate\n");
scanf("%d",& duedate);
printf("enter the returndate\n");
scanf("%d",& returndate);

int daysoverdue;
int finerate;
int fineamount;


    

    daysoverdue=returndate-duedate;

if (daysoverdue>0 && daysoverdue<=7)
    {fineamount=20*daysoverdue;
    printf("%d\n", fineamount);}
else if(daysoverdue>7 && daysoverdue<=14)
    {fineamount=50*daysoverdue;
    printf("%d\n", fineamount);
    }
else if(daysoverdue>14)
    {fineamount=100*daysoverdue;
    printf("%d\n", fineamount);};
    
    

printf(" finerate:%d\n", finerate);
printf(" fineamount:%d\n", fineamount);

printf("daysoverdue:%d\n",daysoverdue);
return 0;
}

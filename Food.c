#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,price,choice, item;
printf("enter 1 for pizza for rs 239\n");
printf("enter 2 for burger for rs 129\n");
printf("enter 3 for pasta for rs 179\n");
printf("enter 4 for French fries for rs 99\n");
printf("enter 5 for Sandwich for rs 149\n");
printf("enter your choice=");
scanf("%d",&choice);
switch(choice)
{
case 1:
       price=239;
       item="pizza";
        break;
case 2:
       price=129;
       item="burger";
        break;
case 3:
       price=179;
       item="pasta";
       break;
case 4:
       price=99;
       item="French fries";
        break;
case 5:
       price=149;
       item="Sandwich";
       break;
default:
        printf("\ninvalid choice");
        exit(0);
}
printf("\nFood item=",item);
printf("\nPrice=",price);
return 0;
}
  

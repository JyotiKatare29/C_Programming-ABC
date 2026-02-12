#include<stdio.h>
#include<conio.h>

int main()

{

int No1=8,No2=15,sum=0;

    printf("\n Enter 1st Number:");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number:");
    scanf("%d",&No2);

    sum = No1 + No2 ;
    printf("\n Addition = %d + %d = %d",No1,No2,sum);

    getch();
    return 0;

}

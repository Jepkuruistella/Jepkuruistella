//program to write do  while loop
/*
prompt user to enter when to start and when to stop
Author: stella
Date: 06/08/2024
*/
#include<stdio.h>
int main()
{
int start,stop;
printf("enter the start value:");
scanf("%d",&start);
printf("enter the stop value:");
scanf("%d",&stop);
int i=0;
do {
printf("%d\n",i);
i++;
}
while(i<=50);
return 0;
}


    
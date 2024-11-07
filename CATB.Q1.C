//program that define a structure named employee
/*
Author:stella
Date :7/11/2024
*/
#include<stdio.h>
#include <string.h>
int main(){
struct employee{
char name [25];
int id;
char department [20];
float salary;
char email[50];
}details;
strcpy(details.name,"John Doe");
int id=12345;
strcpy(details.department,"human resource");
float salary=55000.50;
strcpy(details.email," john.doe@company");
printf(" name:%s\n",details.name);
printf("id:%d\n",id);
printf(" department:%s\n",details.department);
printf("salary:%f\n", salary);
printf("email:%s\n",details.email);
return 0;
}
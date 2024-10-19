struct student{
char name[30];
float height;
char reg_no[15];
char email[20];
int phone;
}student1,student2;
#include<stdio.h>
#include<string.h>//strcpy
int main(){
//struct student student1,student2;
//strcpy(student1.name,"stella");
printf("enter your name:");
scanf("%s",&student1.name);
student1.height=5.7;
strcpy(student1.reg_no,"ct101/g/22345/24");
strcpy(student1.email,"stella@gmail.com");
student1.phone=0716657360;
printf("name:%s\n",student1.name);
/*
printf("height:%f\n",student1.height);
printf("reg number:%s\n",student1.reg_no);
printf("email:%s\n",student1.email);
printf("phone number:%d\n", student1.phone);
*/
return 0;
}

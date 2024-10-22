struct book{
char title[30];
char author[30];
char ISBN[13];
int publication_year;
float price
}info;
#include<stdio.h>
#include<string.h>
int main(){

//prompt the user to enter determined variables
printf("enter title:");
scanf("%s\n",&info.title);
printf ("enter author:");
scanf("%s\n",&info.author);
printf("enter publication_year:");
scanf("%d\n",&info.publication_year);
printf("enter ISBN:");
scanf("%s\n",&info.ISBN);
printf("enter price:");
scanf("%f\n",&info.price);
/*
printf("title:%s\n",info.title);
printf("author:%s\n",info.author);
printf ("publication_year:%d\n",info.publication_year);
printf("ISBN:%s\n",info.ISBN);
printf("price:%f\n",info.price);
*/
return 0;
}


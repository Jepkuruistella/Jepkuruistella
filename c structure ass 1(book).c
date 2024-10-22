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
strcpy(info.title,"introduction to c programming");
strcpy(info.author,"John smith");
info.publication_year=2022;
strcpy(info.ISBN,"9780131103627");
info.price =49.99;
printf("title: %s\n",info.title);
printf("author:%s\n",info.author);
printf("publication_year:%d\n",info.publication_year);
printf("price:%f\n",info.price);
return 0;
}


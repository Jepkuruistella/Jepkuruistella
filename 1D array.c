//program to write 1D arrays
/*
program to write 1D
author:stella
Date:16/10/2023
*/
#include <stdio.h>
int main(){
int age[7]={16,20,18,12,9,25,21};
for(int i=0;i<7;i++){
scanf("%d",age[i]);
}
for(int i=0;i<7;i++){
printf("%d",age[i]);
}
return 0;
}
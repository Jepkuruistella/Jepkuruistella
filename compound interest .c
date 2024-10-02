
//program to calculate compoundinterest
/*
program to calculate compoundinterest
Author:stella jepkurui
Date:29/09/2024
*/
#include<stdio.h>
#include<math.h>
int main (){
int principal,rate,time,compoundinterest,n;
  printf(" enter principal:");
  scanf("%d" ,& principal);
  printf("enter time:");
  scanf("%d",&time);
  printf("enter n:");
  scanf("%d" ,& n);
  compoundinterest=principal*pow(1+(rate/n),n*time);
  printf("compoundinterest %d",compoundinterest);
  return 0;
  }
  

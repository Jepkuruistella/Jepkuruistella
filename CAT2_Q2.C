//program to declare and initialize 2D array 
/*
author: stella jepkirui 
date:7/11/2024
*/
#include <stdio.h>
int main(){
int x,y;
int score[2][2]={{65,92},{35,70}};
for(int x=0;x<2;x++){
for (int y=0;y<2;y++){
printf ("score[%d][%d]=%d\n",x,y, score[x][y]);
}
}
int l,m;
for(l=0;l<x;l++){
for(m=0;m<y;y++){
printf("%d",score[x][y]);
}
}
printf("\n");
int k,p;
int SCORE [2][2]={{84, 72},{59,67}};
for (int k=0;k<2;k++){
for (int p=0;p<2;p++){
printf("SCORE [%d][%d]=%d\n",k,p, SCORE [k][p]);
}
}
int a,b;
for(a=0;a<k;a++){
for(b=0;b<p;b++){
printf("%d", SCORE [k][p]);
}
}
printf("\n");
 return 0;
 }
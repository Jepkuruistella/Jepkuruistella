// program to write 3D 
/*
program to write 3D
author:stella jepkirui 
Date:16/10/2023
*/
#include<stdio.h>
int main(){
int arr[2][2][3]={ {4,5,6},{7,8,9} };
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
for(int k=0;k<3;k++){
printf("%d\n",arr[i][j][k]);
}
}
}
return 0;
}
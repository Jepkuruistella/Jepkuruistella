#include <stdio.h>
int main(){
int x,y,z;
int arr[2][2][3]={{1,2,3},{4,5,6}};
for(x=0;x<2;x++){
for(y=0;y<2;y++){
for(z=0;z<3;z++){
printf("arr[x][y][z]=%d\n",x,y,z);
}
}
}
int a,b,c;
for(a=0;a<x;a++){
for(b=0;b<y;b++){
for(c=0;c<z;z++){
printf("%d",arr[x][y][z]);
}
}
}
printf("\n");
printf("\n");

return 0;
}

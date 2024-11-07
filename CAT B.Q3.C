#include<stdio.h>
int main(){
float calculate_grosspay(int hours_worked, float hourly_wage){
float grosspay;
if(hours_worked <40){
grosspay=hours_worked*hourly_wage;
}
else {
grosspay=( 40*hourly_wage)+(hours_worked-40)*hourly_wage*1.5;
}
return grosspay;
float calculate _taxes(float grosspay){
float taxes;
if (grosspay<600){
taxes=grosspay*0.15;
}
else {
taxes=(600*0.15)+(grosspay-600)*0.20;
}
return taxes;
}
printf("enter hours_worked in a week:);
scanf("%d",&hours_worked);
printf("enter hourly_wage:");
scanf("%f",&hourly_wage);
grosspay=hours_worked*hourly_wage;
taxes=grosspay-taxes;
printf("grosspay:$%.2f\n",grosspay);
printf("taxes:$%.2f\n",taxes);
printf("net pay:$%.2f\n",net pay);
}
return 0;
}

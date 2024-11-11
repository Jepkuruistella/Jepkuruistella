#include<stdio.h>
int main(){
float hours_worked,hourly_wage,gross_pay,tax,net_pay;
//prompt the user to enter details
printf("enter hours worked in a week:");
scanf("%f",&hours_worked);
printf("enter hourly wage;);
scanf("%f",&hourly_wage);
//calculate gross pay for overtime
if(hours_worked>40){
gross_pay=( 40*hourly_wage)+(hours_worked-40)*hourly_wage*1.5;
}else{
gross_pay=hours_workes*hourly_wage
}
//calculating tax
if(gross_pay<=600){
tax=gross_pay*0.15;
}else{
tax=(600*0.15)+((gross_pay-600)*0.20);
}
//calculating net pay
net_pay=gross_pay-tax;
//print results
printf("grosspay:$%.2f\n",gross_pay);
printf("tax:$%.2f\n",tax);
printf("net pay:$%.2f\n",net_pay);
return 0;
}

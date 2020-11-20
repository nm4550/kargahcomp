#include<stdio.h>
int main(){
float num1 , num2 , result ; 
int function;
printf("pleas print your two numbers ,sprate with space\n");
scanf("%f %f",&num1,&num2);
printf("please choose your function\n 1=plus \n 2=mines\n 3=zarb\n");
scanf("%d",&function);
if (function==1){
    result = num1 + num2;
}
if (function==2){
    result=num1-num2;
}
if (function==3){
    result=num1*num2;
}
printf("your result is= %f\n",result);
return 0;
}
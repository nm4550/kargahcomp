#include<stdio.h>
int main(){
    /* tarif moteghayer ha */
float num1 , num2 , result ; 
int function; 

/* gereftan adad az karbar*/
printf("pleas print your two numbers ,sprate with space\n");
scanf("%f %f",&num1,&num2);
printf("please choose your function\n 1=plus \n 2=mines\n 3=zarb\n 4=taghsim\n");
scanf("%d",&function);

/*function*/
if (function==1)
    result = num1 + num2;

if (function==2)
    result=num1-num2;

if (function==3)
    result=num1*num2;

if (function==4)
    result=num1/num2;

/*result*/
printf("your result is= %f\n",result);

return 0;}
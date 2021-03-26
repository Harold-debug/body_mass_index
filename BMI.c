#include<stdio.h>
#include<stdlib.h>
int main()
{
float h,w,W,d;
const b=25;
printf("Enter your height in meters: ");
scanf("%f",&h);
printf("\nEnter your actual weight in Kg: ");
scanf("%f",&W);
w=b*h*h;
printf("\nYour ideal weight is: %f\n",w);
d=abs(W-w);
if (d>0){
printf("\nyou have to gain %f Kg\n" ,d);}
else if (d<0){
 printf("\nyou have to lose %f Kg\n" ,d);
}
system("pause");
return 0;
}



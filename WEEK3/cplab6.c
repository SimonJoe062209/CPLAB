#include<stdio.h>
#include<math.h>
int main() {
float a,p,r,n,t;
printf("enter values of p,r,n,t");

scanf("%f%f%f%f",&p,&r,&n,&t);
a=p*pow(1+r/n,n*t);
printf("the compund interest is %f",a);
}

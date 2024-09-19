#include<stdio.h>
#include<math.h>
int main() {
int a,b,c;
float d,s;
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
d=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area of the traingle is %f",d);
}

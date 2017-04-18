#include<stdio.h>
#include<math.h>
#define pai 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679 
int r;
double a,b;
int main(){
scanf("%d",&r);
if((r>=0)&&(r<=10000)){
a=pai*r*r;
b=(r*r)+(r*r);
printf("%.6f\n%.6f",a,b);
}
}

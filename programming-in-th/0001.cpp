#include<stdio.h>
int a,b,c,x;
int main(){
   scanf("%d %d %d",&a,&b,&c);
   x = a+b+c;
   if(x>=0 && x<=49)
   printf("F");
   if(x>=50 && x<=54)
   printf("D");
   if(x>=55 && x<=59 )
   printf("D+");
   if(x>=60 && x<=64 )
   printf("C");
   if(x>=65 && x<=69 )
   printf("C+");
   if(x>=70 && x<=74 )
   printf("B");
   if(x>=75 && x<=79 )
   printf("B+");
   if(x>=80 && x<=100 )
   printf("A");
}

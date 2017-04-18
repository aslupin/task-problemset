#include<stdio.h>
int main(){
    int n,i,N,min,Max;
    int a[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
   min=a[0];
   Max=a[0];
   for(N=0;N<n;N++){
   if(min>=a[N]){
   min = a[N];
}
   if(Max < a[N]){
         Max = a[N];
}
}
printf("Min = %d",min);
printf("\nMax = %d",Max);
}

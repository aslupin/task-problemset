#include<stdio.h>
#include<string.h>
#include<ctype.h>
char a[10000];
int i,sum2,t,n,sum,j,p,k;
int main(){
sum = 0;
sum2 = 0;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++){
j = isupper(a[i]);
sum = sum+j;
if(islower(a[i])){
                 sum2++;
                 }
}
if(sum==n)
printf("All Capital Letter");
else{
if(sum2>0 && sum==0)
printf("All Small Letter");
else
printf("Mix");
}
getch();
}

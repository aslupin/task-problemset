#include<stdio.h>
#include<string.h>
#include<ctype.h>
char a[10000];
int i,sum2,n,sum,j;
int main(){
sum = 0;
sum2 = 0;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++){
/*j = isupper(a[i]);
sum = sum+j;*/
if(isupper(a[i])){
sum++;
}
if(islower(a[i])){
sum2++;
}
}
if(sum==n)
printf("All Capital Letter");
else{
if(sum2==n)
printf("All Small Letter");
else
printf("Mix");
}
}

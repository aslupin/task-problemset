#include<stdio.h>
int m,n,i,j;
int main(){
scanf("%d%d",&m,&n);
int a[m][n],b[m][n],sum[m][n];
for(i=0;i<m;i++){      
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}}                     
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&b[i][j]);
}}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
sum[i][j]=a[i][j]+b[i][j];
printf("%d ",sum[i][j]);
}
printf("\n");
}}


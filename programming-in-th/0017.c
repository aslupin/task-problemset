#include <stdio.h>
main(){
int n[4];
int temp,i,j;
int h,w;

for(i=0;i<4;i++){
    scanf("%d",&n[i]);
}
for(i=0;i<4;i++){
for(j=1;j<4;j++){
    
if(n[j] > n[j-1]){
    temp = n[j-1];
    n[j-1] = n[j];
    n[j] = temp;
    }
    
}}

if(n[0] > n[1]) h = n[1];
else h= n[0];

if(n[2] > n[3]) w = n[3];
else w = n[2];

printf("%d",w*h);

}

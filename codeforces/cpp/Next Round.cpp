#include <stdio.h>
main(){

int n[100],k,cou;
int i,check=0;



scanf("%d %d",&cou,&k);
k -= 1;

for(i=0;i<cou;i++)
scanf("%d",&n[i]);

for(i=0;i<cou;i++){
if(n[i] >= n[k] && n[i] > 0){
check++;
}
}

printf("%d",check);
}

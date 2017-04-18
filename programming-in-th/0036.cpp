#include <stdio.h>
unsigned long long nDota(unsigned long long n){
if(n == 0) return 1;
return n*nDota(n-1);
}

main(){
unsigned long long suml=1,i,n,r=0;
scanf("%llu",&n);

if(n<1 || n>25) return 0;

r = n/2;
for(i=n;i>(n-r);i--){
suml *= i;
}
if(n==1){
printf("2"); return 0;
}
else printf("%llu",suml / nDota(r));

}

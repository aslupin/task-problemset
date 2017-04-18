#include <stdio.h>
unsigned long long Euclid (unsigned long long a,unsigned long long b){
if(a%b==0) return b;
return Euclid(b,a%b);	
}

main(){
	unsigned long long int a,b;
	scanf("%llu %llu",&a,&b);
printf("%llu",Euclid(a,b));
}

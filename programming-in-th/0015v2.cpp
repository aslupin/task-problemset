#include <stdio.h>
main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",(c-b > b-a)? c-b-1:b-a-1 );
}

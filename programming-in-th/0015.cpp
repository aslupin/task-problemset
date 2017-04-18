#include <stdio.h>
unsigned long long Jingjo(int a,int b,int c){
	static int i=0;
	if(b == c-1)
	return i;
	else {
		int temp = b;
		b += 1;
		a = temp;
		i++;
		Jingjo(a,b,c);
	}
}

main(){	
	unsigned long long a,b,c;
	scanf("%llu%llu%llu",&a,&b,&c);
	printf("%llu",Jingjo(a,b,c));
}

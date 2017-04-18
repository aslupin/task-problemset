#include <stdio.h>
main(){
	char ABC[50];
	int sort=1,num;
	scanf("%s",&ABC);
	for(int i=0;i<=49;i++){
		if(ABC[i] == 'A'){
			if(sort==1)
			sort=2;
			else if(sort == 2)
			sort=1;
		}
		if(ABC[i] == 'B'){
			if(sort==2)
			sort=3;
			else if(sort==3)
			sort=2;
		}
		if(ABC[i] == 'C'){
			if(sort==1)
			sort=3;
			else if(sort==3)
			sort=1;
		}
	}	
	printf("%d",sort);
}

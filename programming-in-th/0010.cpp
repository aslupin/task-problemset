#include <stdio.h>
main(){
	char ABC[51];
	int sort[3],temp = 0;
	scanf("%s",ABC);
    sort[0] = 1;sort[1] = 0;sort[2] = 0;
	for(int i=0;i<=49;i++){
	    if(ABC[i]=='A'){
	    	temp = sort[0];
	    	sort[0]= sort[1];
		    sort[1]= temp;    
	    }
		if(ABC[i]=='B'){
			temp = sort[1];
		    sort[1]= sort[2];
		    sort[2]= temp;
		}

		if(ABC[i]=='C'){
			temp = sort[0];
			sort[0] = sort[2];
			sort[2] = temp;
		}
	}
	for(int j=0;j<=2;j++){
		if(sort[j] == 1)
		printf("%d",j+1);
	}	
}

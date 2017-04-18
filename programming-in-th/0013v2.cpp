#include <stdio.h>

int check(int x){

	
	
	
	
}

main(){ 
	int n[9],sum,Brek=0;
	int i,j,check;
	
	for(i=0;i<9;i++){
		scanf("%d",&n[i]);
		sum += n[i];
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			
			if(n[i]+n[j]+100 == sum){
				n[i] = 0;
				n[j] = 0;
			}
			
		}
	}
	
	for(int k=1;k<9;k++){
		if(n[k] != 0)
		printf("%d",n[k]);
	}
	return 0;
}

#include <stdio.h>



main(){
	//INPUT 9 OUTPUT 7 
	int n[9],sum=0;
	int i,j;
	
	for(i=0;i<9;i++){
		scanf("%d",&n[i]);
		if(n[i]>=1 && n[i]<=99)
		sum += n[i];
		else return 0;
	}
    sum = sum-100;
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			
			if(n[i]+n[j] == sum){
				n[i] = 0;
				n[j] = 0;
				
				goto label;
				//break;
			}
			
		}
		
	}
	label:
	if(sum+100 >= 100){

	for(i=0;i<9;i++){
		if(n[i] != 0)
		printf("%d\n",n[i]);
	}
}
}


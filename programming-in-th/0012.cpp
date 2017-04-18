#include <stdio.h>
main(){
	int n=0,j;
	char text[15]={};
	scanf("%s",text);
	for(int i=0;i<=14;i++){
		if((int)text[i] != 0){
			n++;
		}
	}
	
	//line 1
	if(n==1){
	printf("..");
    for(j=1;j<=n;j++){
    		if(j%3!=0)
    	    printf("#");
    	    else if(j%3==0)
    	    printf("*");
    	    printf(".");
    }
    printf(".\n");
	}
	if(n!=1){
		printf(".");
		for(j=1;j<=n;j++){
			printf(".");
			if(j%3!=0)
    	    printf("#");
    	    else if(j%3==0)
    	    printf("*");
    	    printf("..");
			
		}
		printf("\n");
		
	}
	
    
	//line 2  
    printf(".");
    for(int k=1;k<=n;k++){
    	if(k%3!=0){
    		printf("#.#");
    	}
    	else if(k%3==0){
    		printf("*.*");
    	}

    	printf(".");
    }
    printf("\n");

    

 //line3
    for(int w=1;w<=n;w++){
    
    	if(w%3!=0){
    		if(w%3!=1 || w<3)
    		printf("#.%c.",text[w-1]);
    		else if(w%3==1 && w>3)
    		printf(".%c.",text[w-1]);
    	}
    	else if(w%3==0){
    		printf("*.%c.*",text[w-1]);
    	}
    	
    	if(w==n){
    		if(w%3!=0)
    		printf("#");
    	}
    }
    printf("\n");
    
   
		//line 4  
    printf(".");
    for(int k=1;k<=n;k++){
    	if(k%3!=0){
    		printf("#.#");
    	}
    	else if(k%3==0){
    		printf("*.*");
    	}

    	printf(".");
    }
	printf("\n");
	 //line 5
	if(n==1){
	printf("..");
    for(j=1;j<=n;j++){
    		if(j%3!=0)
    	    printf("#");
    	    else if(j%3==0)
    	    printf("*");
    	    printf(".");
    }
    printf(".");
	}
	if(n!=1){
		printf(".");
		for(j=1;j<=n;j++){
			printf(".");
			if(j%3!=0)
    	    printf("#");
    	    else if(j%3==0)
    	    printf("*");
    	    printf("..");
			
		}
		//printf("");
		
	}
	
}

    
    
    
    

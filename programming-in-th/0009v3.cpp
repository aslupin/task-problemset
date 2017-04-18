#include<stdio.h>
main(){
	int n[2],temp;
	char abc[3];
	scanf("%d%d%d",&n[0],&n[1],&n[2]);
	if(n[0]<=100 && n[1]<=100 && n[2]<=100 && n[0]>=1 && n[1]>=1 && n[2]>=1){
	for(int j=0;j<=1;j++){
	for(int i=0;i<=1;i++){
		if(n[i] > n[i+1]){
		 temp = n[i];
		 n[i] = n[i+1];
		 n[i+1] = temp;
		}
	}}
    scanf("%s",&abc);
	
	if(abc[0] == 'A' && abc[1] == 'B' && abc[2] == 'C')
	printf("%d %d %d",n[0],n[1],n[2]);
	
	else if(abc[0] == 'A' && abc[1] == 'C' && abc[2] == 'B')
	printf("%d %d %d",n[0],n[2],n[1]);
	
	else if(abc[0] == 'B' && abc[1] == 'A' && abc[2] == 'C')
	printf("%d %d %d",n[1],n[0],n[2]);
	
	else if(abc[0] == 'B' && abc[1] == 'C' && abc[2] == 'A')
	printf("%d %d %d",n[1],n[2],n[0]);
	
	else if(abc[0] == 'C' && abc[1] == 'A' && abc[2] == 'B')
	printf("%d %d %d",n[2],n[0],n[1]);
	
	else if(abc[0] == 'C' && abc[1] == 'B' && abc[2] == 'A')
	printf("%d %d %d",n[2],n[1],n[0]);
	 
	else{
	 	
	}
}
}

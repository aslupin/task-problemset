#include <stdio.h>
void Check (int n,char ans[1000]){
int a[3] ={0,0,0};
for(int i=1;i<=n;i++){
	
	//Bruno
   if(i%4==1 || i%4==3){
   	if(ans[i-1] == 'B') {a[1]++;}
   }
   else if(i%4==2){
   	if(ans[i-1] == 'A') {a[1]++;}
   }
   else if(i%4==0){
   	if(ans[i-1] == 'C') {a[1]++;}
   }
   
   
   //Adrian Goran
	if(i%6==1){
		if(ans[i-1] == 'A'){a[0]++;}
		else if(ans[i-1] == 'C'){a[2]++;}
	}
	else if(i%6==2){
		if(ans[i-1] == 'B'){a[0]++;}
		else if(ans[i-1] == 'C'){a[2]++;}
	}
	else if(i%6==3){
		if(ans[i-1] == 'C'){a[0]++;}
		else if(ans[i-1] == 'A'){a[2]++;}		
	}
	else if(i%6==4){
		if(ans[i-1] == 'A'){a[0]++;a[2]++;}
		//else if(ans[i-1] == 'C'){a[1]++;}
	}
	else if(i%6==5){
		if(ans[i-1] == 'B'){
		//a[1]++;
		a[0]++;
		a[2]++;
		}
	}
	else if(i%6==0){
		 if(ans[i-1] == 'C'){a[0]++;}
		else if(ans[i-1] == 'B'){a[2]++;}
		
	}
}	

int max=0;
for(int j=0;j<3;j++){
	if(a[j]>max)
	max = a[j];
}

printf("%d\n",max);

for(int p=0;p<3;p++){
	if(a[p] == max){
		if(p==0)
		printf("Adrian\n");
		else if(p==1)
		printf("Bruno\n");
		else if(p==2)
		printf("Goran\n");
		
		
		
	}
}

}
main(){
	int nQ;
	char Sol[1000];
	scanf("%d %s",&nQ,Sol);
	Check(nQ,Sol);
}

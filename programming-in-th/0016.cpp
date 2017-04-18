#include <stdio.h>
int Check (int n,char ans[100]){
int a[3] ={0,0,0};
for(int i=0;i<n;i++){
	
	
   if(i%4==0 || i%4==2){
   	if(ans[i] == 'B') {a[1]++;}
   }
   else if(i%4==1){
   	if(ans[i] == 'A') {a[1]++;}
   }
   else if(i%4==3){
   	if(ans[i] == 'C') {a[1]++;}
   }
   
   
   
	if(i%6==0){
		if(ans[i] == 'A'){a[0]++;}
		//else if(ans[i] == 'B'){a[1]++;}
		else if(ans[i] == 'C'){a[2]++;}
		
	}
	else if(i%6==1){
		//if(ans[i] == 'A'){a[1]++;}
		if(ans[i] == 'B'){a[0]++;}
		else if(ans[i] == 'C'){a[2]++;}
	}
	else if(i%6==2){
		if(ans[i] == 'A'){a[2]++;}
		//else if(ans[i] == 'B'){a[1]++;}
		else if(ans[i] == 'C'){a[0]++;}
	}
	else if(i%6==3){
		if(ans[i] == 'A'){a[0]++;a[2]++;}
		//else if(ans[i] == 'C'){a[1]++;}
	}
	else if(i%6==4){
		if(ans[i] == 'B'){
		//a[1]++;
		a[0]++;
		a[2]++;
		}
	}
	else if(i%6==5){
		//if(ans[i] == 'A'){a[1]++;}
		if(ans[i] == 'B'){a[2]++;}
		else if(ans[i] == 'C'){a[0]++;}
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


/*
if(Adrian == Bruno && Bruno == Goran) printf("%d\nAdrian\nBruno\nGoran",Adrian);
else if((Adrian == Bruno) && (Adrian > Goran) ) printf("%d\nAdrian\nBruno",Adrian);
else if((Adrian == Goran) && (Adrian > Bruno) ) printf("%d\nAdrian\nGoran",Adrian);
else if((Goran == Bruno) && (Goran > Adrian) ) printf("%d\nBruno\nGoran",Bruno);
else if(Adrian > (Bruno >= Goran || Goran>=Bruno)) printf("%d\nAdrian",Adrian);
else if(Bruno > (Adrian >= Goran || Goran>=Adrian)) printf("%d\nBruno",Bruno);
else if(Goran > (Bruno >= Adrian || Adrian>=Bruno)) printf("%d\nGoran",Goran);
*/
}
main(){
	int nQ;
	char Sol[100];
	scanf("%d %s",&nQ,Sol);
	Check(nQ,Sol);
}

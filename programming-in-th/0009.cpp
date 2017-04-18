#include <stdio.h>

main(){
	int i1,i2,i3,n[3];
	char abc[3];
	scanf("%d%d%d%s",&i1,&i2,&i3,&abc);
	
//	if(i1<=100 && i2<=100 && i3<=100 && i1>=1 && i2>=1 && i3>=1){
		if(i1 > i2 && i1 > i3){		
			if(i2>i3){
			   n[0] = i3;
			   n[1] = i2;
			   n[2] = i1;
		    }
			if(i3>i2){
			   n[0] = i2;
			   n[1] = i3;
			   n[2] = i1;
			}
		}
		if(i2 > i1 && i2 > i3){
			if(i1>i3){
			   n[0] = i3;
			   n[1] = i1;
			   n[2] = i2;
			}
			if(i3>i1){
			   n[0] = i1;
			   n[1] = i3;
			   n[2] = i2;
			}	
		}
		if(i3 > i2 && i3 > i1){
			if(i1>i2){
			   n[0] = i2;
			   n[1] = i1;
			   n[2] = i3;
			}		
			if(i2>i1){
			   n[0] = i1;
			   n[1] = i2;
			   n[2] = i3;
			}
        }
        
        //scanf("%s",&abc);
        
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
//}
}

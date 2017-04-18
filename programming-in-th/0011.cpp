#include <stdio.h>
main(){
	int num[10],mods[42]={0},ans=0;
	for(int i=0;i<=9;i++){
		scanf("%d",&num[i]);
		
			for(int j=0;j<=41;j++){
				if(num[i]%42 == j)
				mods[j] = 1;
			}
	}
		for(int k=0;k<=41;k++){
		if(mods[k] == 1)
		ans++;	
	}	
	printf("%d",ans);
}

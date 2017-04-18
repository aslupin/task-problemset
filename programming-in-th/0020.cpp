#include <stdio.h>
main(){
    int input[5][5],sum[5],check_max=0,savenum=0;
    for(int i=0;i<5;i++){
        sum[i] = 0;
        for(int j=0;j<4;j++){            
            scanf("%d",&input[i][j]);
            sum[i] += input[i][j];
        }
        if(sum[i] > check_max){
             check_max = sum[i];
             savenum = i; 
        }
    }
printf("%d %d",savenum+1,check_max);
return 0;
}

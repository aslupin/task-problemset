#include <stdio.h>

struct check{
int nu;
int ch;
};

main(){
    struct check number[1001];
    int N,K,i,j;
    int check,cpy_k=0;
    scanf("%d %d",&N,&K);
    // int number[N];
    
    // INPUT 1-N
    for(i=0;i<N;i++){
     number[i].nu = i+1;
    }
    
    //SET CHECK =0
    for(i=0;i<N;i++){
     number[i].ch = 0;
    }
    
    
    for(i=0;i<N;i++){
   // printf("%d\n",number[i].nu);
    check = 0;
    
        for(j=1;j<=i;j++){
        if(number[i].nu % number[j].nu == 0)
        check++;
       // printf("prime %d\n ",number[i].nu);
        }
        
        // Ceck number[i].nu is prime number
        if(check == 1){
        
        for(j=0;j<N;j++){
            if((number[j].nu % number[i].nu == 0) && number[j].ch == 0){
                 number[j].ch = 1;
                 cpy_k++;
                 
                 if(cpy_k == K){
                 printf("%d",number[j].nu);
                 return 0;
                 
                 }
            }
        }
        }
        
    
    
    }

return 0;

}

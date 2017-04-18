#include <stdio.h>
long nos=0,sum=0,difMain=1000000,difCh=0;
long sumN=0,sumK=0;

struct NK{
    long N;
    long K;
    long M;
};
struct NK use[1000];


int loopfind(int a,int p){
    long i,j;
    if(a == nos) return 0;
    
    if(a < nos && a != p){
            for(i=0;i<nos;i++){
                
                
            }
            
            loopfind(a+1,p);
    }
    else if(a==p){
            loopfind(a+1,p);
    }




}



main(){
    scanf("%ld",&nos);
    
    for(int i=0;i<nos;i++){
        use[i].M = 0;
        scanf("%ld %ld",&use[i].N,&use[i].K);
        sum += use[i].N + use[i].K;
    }
    
    for(int p=0;p<nos;p++){
    loopfind(0,p);
    }
    
    
    printf("%ld",difMain);
    return 0;
}


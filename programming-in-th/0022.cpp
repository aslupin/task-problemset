#include <stdio.h>
main(){
int input=0,n=0,m=0,len=0;
scanf("%d",&input);

if(input%2 == 1){
    n = (input+1)/2;
    m = input-n;
    len = input;
}
else if(input%2 == 0){
    n = input/2;
    m = n;
    len = input-1;
}
//print lines of n 
for(int i=0;i<n;i++){
    for(int j=0;j<len;j++){
        
        if(j == (n+i)-1 || j == (n-i)-1) printf("*");
        else printf("-");
        
    }
    printf("\n");
}

//print lines of m
for(int i=0;i<m;i++){
    for(int j=0;j<len;j++){
        
        if(j == (n-m)+i || j == len-(n-m+i+1)) printf("*");
        else printf("-");
        
    }
    printf("\n");
}
}

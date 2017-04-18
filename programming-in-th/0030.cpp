#include <stdio.h>
#include <string.h>
int sum=0;
char num[1000000];

    
    
void cut2n(int i){
 for(i=0;i<=strlen(num)-1;i++){
            if(strlen(num)%2 == 0){
                if(i%2==1){
                 sum +=  ((num[i-1] - 48)*10)+(num[i] - 48);

                 }
            }
           else if(strlen(num)%2 == 1){
                
                 if(i==0) sum += num[i]-48;
                 else if(i%2 == 0 && i!=0){
                 sum +=  ((num[i-1] - 48)*10)+(num[i] - 48);

                 }
            }
    }
   
}


main(){
    scanf("%s",num);
    do{
             cut2n(0);
             sprintf(num, "%d", sum+48);
    }while(sum > 99);
    printf("%d %d",sum%3,sum%11);
    return 0;
}

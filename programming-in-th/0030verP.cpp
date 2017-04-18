#include <stdio.h>
#include <string.h>
main(){
    int r3=0,r11=0,check_unit=1;
    char n[1000000];
    
    scanf("%s",n);
    for(int i = strlen(n)-1;i>=0;i--,check_unit++){
        
        r3 += n[i]%3;
        
        if(check_unit%2==1) r11 += (n[i]-48)%11; 
        else r11 += ((n[i]-48)*10)%11;
        
    }
    printf("%d %d",r3%3,r11%11);
    

}

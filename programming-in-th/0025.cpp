#include <stdio.h>
main(){
    unsigned long long nubOne,nubTwo;
    char Ope[2];
    scanf("%llu %c",&nubOne,&Ope);
    scanf("%llu",&nubTwo);
    
    
    
    if(Ope[0] == '*') printf("%llu",nubOne*nubTwo);
    else if(Ope[0] == '+') printf("%llu",nubOne+nubTwo);



}

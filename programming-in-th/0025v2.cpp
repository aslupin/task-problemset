#include <stdio.h>
#include <string.h>

char Mul(char txtOne[1000],char txtTwo[1000]){
    int lenOne = strlen(txtOne);
    int lenTwo = strlen(txtTwo);
    printf("1");
    for(int i=1;i<=(lenOne+lenTwo)-2;i++){
        printf("0");
    }
    return 0;
}

char Sum(char txtOne[1000],char txtTwo[1000]){
    int lenOne = strlen(txtOne);
    int lenTwo = strlen(txtTwo);
    
    if(lenOne > lenTwo){
        printf("1");
        
        for(int i=1;i<=lenOne-1;i++){
            if(i == lenOne-lenTwo) printf("1");
            else printf("0");
        }
    }
    
    else if(lenTwo > lenOne){
        printf("1");
        
        for(int i=1;i<=lenTwo-1;i++){
            if(i == lenTwo-lenOne) printf("1");
            else printf("0");
        }
    }
    
    else if(lenTwo == lenOne){
    int lenOne = strlen(txtOne);
    printf("2");
    for(int i=1;i<=lenOne-1;i++) printf("0");
    }
    
    return 0;
}

main(){
    char txtOne[1000],txtTwo[1000],Opera[2];
    scanf("%s %c %s",txtOne,&Opera,txtTwo);
    
    if(Opera[0] == '*') Mul(txtOne,txtTwo);
    else if(Opera[0] == '+') Sum(txtOne,txtTwo);



}

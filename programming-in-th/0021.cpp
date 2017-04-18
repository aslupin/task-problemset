#include <stdio.h>
#include <string.h>
main(){
    char text[100],txtCopy[100];
    gets(text);
    int len = strlen(text);
    for(int i=0,j=0;i<len;i++,j++){
        
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u'){
            if(text[i+1] == 'p'){
                if(text[i+2] == text[i]){
                    i += 2;
                }
            }
        }
        
        txtCopy[j] = text[i];
        if(i==len-1) txtCopy[j+1] ='\0';
    }
    
    printf("%s",txtCopy);
    
    
    
    





}

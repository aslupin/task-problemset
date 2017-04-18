#include <stdio.h>
#include <string.h>
struct Instr{
    char textIn[1000];
    char firtxt[100];
    char lasttxt[100];
    int lendif2;
};

main(){
    struct Instr txt[1000];
    int ncount=0,nline;
    
    scanf("%d",&nline);
    
    while(ncount != nline){
       scanf("%s",txt[ncount].textIn);
       txt[ncount].lendif2 = strlen(txt[ncount].textIn);
       ncount++;
    }
    
    for(int i=0;i<nline;i++){
        if(txt[i].lendif2 > 10){
            printf("%c%d%c",txt[i].textIn[0],txt[i].lendif2-2,txt[i].textIn[txt[i].lendif2-1]);
        }
        else {
            printf("%s",txt[i].textIn);
        }
        printf("\n");
        
    }
    




}

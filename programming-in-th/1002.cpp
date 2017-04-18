#include <stdio.h>
main(){
    
    int i=0,v=0,x=0,l=0,c=0;
    int in=0,n=0,j=0;
    scanf("%d",&in);
    
    for(j=1;j<=in;j++){
        n = j/100;
        
        if(n==3)c+=3;
        if(n==2)c+=2;
        if(n==1)c+=1;
        
        n = j%100;
        n = n/10;
        
        if(n==9){c++;x++;}
        if(n==8){l++;x+=3;}
        if(n==7){l++;x+=2;}
        if(n==6){l++;x++;}
        if(n==5)l++;
        if(n==4){l++;x++;}
        if(n==3)x+=3;
        if(n==2)x+=2;
        if(n==1)x++;
    
       n = j%10;
        if(n==1)i++;
        if(n==2)i+=2;
        if(n==3)i+=3;
        if(n==4){v++;i++;}
        if(n==5)v++;
        if(n==6){v++;i++;}
        if(n==7){v++;i+=2;}
        if(n==8){v++;i+=3;}
        if(n==9){x++;i++;}
    }
    printf("%d %d %d %d",i,v,x,l,c);
    
    
    
    
    


}

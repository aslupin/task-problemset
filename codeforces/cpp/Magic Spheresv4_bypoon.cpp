#include <stdio.h>
int diff = 0;
int sum2ball = 0;
int temp_setting = 0;
int spheres[2][3];
int checktrue_var=0,check_t=0,check_tt=0,check_ttt=1;

main(){
    register int i,j;
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
        // input var
        if(i==0 || i==1){
        scanf("%d",&spheres[i][j]);
        if(i==0) checktrue_var += spheres[i][j];
        if(i==1){
           sum2ball += spheres[i][j];
          if(spheres[0][j] > spheres[i][j])
            check_t=1;
          
          if(spheres[0][j] == spheres[i][j])
            check_tt++;
          
        }}
       
        // process
        if(i==2){ 
        diff = 0;
        if(sum2ball == 0 && checktrue_var > 0) check_ttt = 0;
        
        if((spheres[0][j] > spheres[1][j]) && ((check_t) || (check_tt == 3)) && (check_ttt)){
        diff  = spheres[0][j] - spheres[1][j];
           if(diff%2 != 0) diff+=1;
        
           spheres[0][j] -= diff;
           temp_setting += diff/2;
        }
      
        
        }
    }}
    
    unsigned long long check = temp_setting +  spheres[0][0] + spheres[0][1] +spheres[0][2];
    printf("%s",(sum2ball == check)? "Yes":"No");
    return 0;
    


}

#include <stdio.h>
int diff = 0;
int sum2ball = 0;
int temp_setting = 0;
int spheres[2][3];
int checktrue_var=0;

main(){
    register int i,j;
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
        // input var
        if(i==0 || i==1){
        scanf("%d",&spheres[i][j]);
        if(i==0 && spheres[i][j] == 1) checktrue_var++;
        if(i==1) sum2ball += spheres[i][j];
        
        }
        
        // process
        if(i==2){ 
        diff = 0;
        if(spheres[0][j] > spheres[1][j] && (checktrue_var != 3)){
        diff  = spheres[0][j] - spheres[1][j];
           if(diff%2 != 0) diff+=1;
        
           spheres[0][j] -= diff;
           temp_setting += diff/2;
        }
      
        
        }
    }}
    
    unsigned long long check = temp_setting +  spheres[0][0] + spheres[0][1] +spheres[0][2];
   //printf("%llu %llu %llu\n",spheres[0][0],spheres[0][1],spheres[0][2]);
    //printf("%d\n",temp_setting);
    printf("%s",(sum2ball == check)? "Yes":"No");
    return 0;
    


}

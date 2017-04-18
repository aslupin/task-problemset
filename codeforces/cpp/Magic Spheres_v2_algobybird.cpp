#include <stdio.h>
int temp_diff = 0;
int temp_setting = 0;
unsigned long long spheres[2][3];

unsigned long long getmin_spheres(unsigned long long *spheres_syncI,unsigned long long *spheres_syncII,register int j){
    
    if((*spheres_syncI > *spheres_syncII) && (*spheres_syncI > 1)){
        *spheres_syncI -= 2;
        temp_setting += 1;
    }
    if(*spheres_syncI <= *spheres_syncII)
        return 0;
    
     getmin_spheres(&spheres[0][j],&spheres[1][j],j);
}
main(){
    register int i,j;
    
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(i==0 || i==1)
        scanf("%llu",&spheres[i][j]);
        if(i==2){ 
        getmin_spheres(&spheres[0][j],&spheres[1][j],j);
        temp_diff += spheres[1][j] - spheres[0][j];
        }
    }}
    
    
    
    printf("%s",(temp_setting == temp_diff)? "Yes":"No");
    return 0;
    


}

#include <stdio.h>
int spheres[3][3];
int spheres_cpy[3];


int check_i(int i){
spheres[0][i] = spheres[0][i]-2;

if(i != 2) //  position isn't 2 (last position) because last have not next
spheres[0][i+1] += 1;
else spheres[0][i-1] += 1;


if(spheres[0][i] != spheres[1][i]) 
check_i(i);
else return 0;
}




main(){
for(int j=0;j<2;j++){
for(int i=0;i<3;i++){
    scanf("%d",&spheres[j][i]);
}}

// base is [1][0] [1][1] [1][2]
for(int i=0;i<3;i++){
    if(spheres[0][i] !=  spheres[1][i]){
        if((spheres[0][i] > spheres[1][i]) && spheres[0][i]%2 == 0)
            check_i(i);
        else if((spheres[0][i] < spheres[1][i]) && spheres[0][i]%2 == 0)
            
    }


}

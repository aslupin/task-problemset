#include <stdio.h>
struct data_teamball{
    char name[10000];
    int score[4];
    int check_rmp[4] = {0};
    int sum_point=0;
};
main(){
    int j=0,i=0;
    struct data_teamball team[4];
    
    for(i=0;i<4;i++){ 
    scanf("%s",team[i].name);
    }
    
    for(j=0;j<4;j++){
    for(i=0;i<4;i++){
        scanf("%d",&team[j].score[i]);
    }}
    
    
    for(j=0;j<4;j++){
    for(i=0;i<4;i++){
        
        if(j!=i && team[j].check_rmp[i] != 1){
        if(team[j].score[i] == team[i].score[j]){
                team[j].sum_point += 1;
                team[i].sum_point += 1;
                
                team[i].check_rmp[j] = 1;
        }
        else if(team[j].score[i] > team[i].score[j]){
            team[j].sum_point += 3;
        }
        }
        
    }}
    
    int temp=0;
    int ranks[4] = {0,1,2,3};
    
    for(j=0;j<=10;j++){
    for(i=0;i<4;i++){
        /*if(team[ranks[i]].sum_point < team[ranks[i+1]].sum_point){
            temp = ranks[i+1];
            ranks[i+1] =  ranks[i];
            ranks[i] = temp;
        }*/
        if(team[ranks[i]].sum_point < team[ranks[i+1]].sum_point){
            temp = ranks[i+1];
            ranks[i+1] =  ranks[i];
            ranks[i] = temp;
        }
        
        }
    }
    
    for(i=0;i<4;i++){
       printf("%s %d\n",team[ranks[i]].name,team[ranks[i]].sum_point);
    }
        
    
    
    
    
    
    






}

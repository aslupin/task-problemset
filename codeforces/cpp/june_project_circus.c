#include <stdio.h>
#include <stdlib.h>
int main(){
    // int deck[13][4];
    int stack[53][2];
    int deck[13][4]; // null deck
    // int deck[] = {4,4,4,4,4,4,4,4,4,4,4,4,4}; // A 2 3 4 5 6 7 8 9 10 J Q K [C,D,H,S]
    int n_player,n_cards;
    int j,i,sum,pos_over;
    int r,rr;
    printf("Input n of player : ");
    scanf("%d",&n_player);
    
    //get deck
    for(i=0;i<=12;i++){
        for(j=0;j<=3;j++){
            deck[i][j] = 1; // A{C,D,H,S} => {1,1,1,1}
        }
    }
    //declare container
    int player[n_player][15][2];
    int score_player[n_player];

    for(i=1;i<=n_player;i++){ // player 1 -> n
        printf("PLAYER NO.%d = ",i);
        for(j=1;j<=15;j++){ // player i get 7 cards
           
            // process
            if(j <= 7){
                while(1){
                r = (rand() % 13)+1; // rand() % 12 mean random number 0 - 12 // 1 -13
                rr = (rand() % 4)+1; // 1 - 4
                if(deck[r-1][rr-1] != 0){
                    deck[r-1][rr-1]--;
                    player[i-1][j-1][0] = r;
                    player[i-1][j-1][1] = rr;
                    break;
            }}}
            else{
                player[i-1][j-1][0] = 0; // define 0 
                player[i-1][j-1][1] = 0;
            }
            printf("%d,%d ",player[i-1][j-1][0],player[i-1][j-1][1]);
        }
        printf("\n");
        
    }

    printf("GAME START\n");
    while(1){
        r = (rand() % 13)+1;
        rr = (rand() % 4)+1;
        if(deck[r-1][rr-1] != 0){
            deck[r-1][rr-1]--;
            stack[0][0] = r;
            stack[0][1] = rr;
            break;
        }}
    
    int ch_canplay_n,ch_canplay_s,ch_xiii;
    int turn = 1;
    int player_drawing = 1;
    int option,count_gg;
    while(1){
        ch_canplay_n = 0;
        ch_canplay_s = 0;
        ch_xiii = 0;

        printf("Top Of Stack : %d,%d\n",stack[turn - 1][0],stack[turn - 1][1]);
        if(player_drawing > n_player) player_drawing = 1;
        printf("PLAYER NO.%d\n",player_drawing);

        // show card on hand
        printf("cards on hand : ");
        for(i=0;i<=14;i++){
            if(player[player_drawing-1][i][0] != 0){
                printf("%d,%d ",player[player_drawing-1][i][0],player[player_drawing-1][i][1]);
                if(player[player_drawing-1][i][0] == stack[turn - 1][0]) ch_canplay_n = 1;
                if(player[player_drawing-1][i][1] == stack[turn - 1][1]) ch_canplay_s = 1;
                if(player[player_drawing-1][i][0] == 8) ch_xiii = 1;
            }
        }
        printf("\n");
        while(1){
        if(ch_canplay_n == 1) printf("[/] play with number of card %d (press 1)\n",stack[turn - 1][0]);
        else printf("[X] play with number of card %d (press 1)\n",stack[turn - 1][0]);
        if(ch_canplay_s == 1) printf("[/] play with symbol of card %d (press 2)\n",stack[turn - 1][1]);
        else printf("[X] play with symbol of card %d (press 2)\n",stack[turn - 1][1]);
        if(ch_xiii == 1) printf("[/] play with card 8 (press 3)\n");
        else printf("[X] play with card 8 (press 3)\n");
        if(ch_canplay_n == 0 && ch_xiii == 0) printf("[/] draw cards from deck (press 4)\n");
        else printf("[X] draw cards from deck (press 4)\n");
        
        printf("Enter your option : ");
        scanf("%d",&option);
        
        if(option == 1 && ch_canplay_n == 1){
            for(i=0;i<=14;i++){
                if(player[player_drawing-1][i][0] == stack[turn - 1][0]){
                    turn++;
                    stack[turn - 1][0] = player[player_drawing-1][i][0];
                    stack[turn - 1][1] = player[player_drawing-1][i][1];
                    player[player_drawing-1][i][0] = 0;
                    player[player_drawing-1][i][1] = 0;
                }
            }
            break;
        }
        else if(option == 2 && ch_canplay_s == 1){
            for(i=0;i<=14;i++){
                if(player[player_drawing-1][i][1] == stack[turn - 1][1]){
                    turn++;
                    stack[turn - 1][0] = player[player_drawing-1][i][0];
                    stack[turn - 1][1] = player[player_drawing-1][i][1];
                    player[player_drawing-1][i][0] = 0;
                    player[player_drawing-1][i][1] = 0;
                }
            }
            break;
        }
        else if(option == 3 && ch_xiii == 1){
            for(i=0;i<=14;i++){
                if(player[player_drawing-1][i][0] == 8){
                    turn++;
                    stack[turn - 1][0] = player[player_drawing-1][i][0];
                    stack[turn - 1][1] = player[player_drawing-1][i][1];
                    player[player_drawing-1][i][0] = 0;
                    player[player_drawing-1][i][1] = 0;
                    
                }
            }
            break;

        }
        else if(option == 4 && (ch_canplay_n == 0 && ch_canplay_s == 0 && ch_xiii == 0)){
            for(i=0;i<=14;i++){
                if(player[player_drawing-1][i][0] == 0){
                    j = i; // pos of 0 
                    break; // break for-loop
                }
                pos_over = player_drawing-1;
                j = 15; // game over
            }
            if(j == 15) break;

            while(1){
                r = (rand() % 13)+1;
                rr = (rand() % 4)+1;
                if(deck[r-1][rr-1] != 0){
                    deck[r-1][rr-1]--;
                    player[player_drawing-1][j][0] = r;
                    player[player_drawing-1][j][1] = rr;
                    break;
                }}

            // show card on hand
            printf("cards on hand : ");
            for(i=0;i<=14;i++){
                if(player[player_drawing][i][0] != 0){
                    printf("%d,%d ",player[player_drawing-1][i][0],player[player_drawing-1][i][1]);
                    if(player[player_drawing-1][i][0] == stack[turn - 1][0]) ch_canplay_n = 1;
                    if(player[player_drawing-1][i][1] == stack[turn - 1][1]) ch_canplay_s = 1;
                    if(player[player_drawing-1][i][0] == 8) ch_xiii = 1;
                }
            }
            printf("\n");

            continue;
        }
        else{
            printf("this option can't active,choose again pls.\n");
            continue;
        }
        }
        
        // check game over
        count_gg = 0;
        for(i=0;i<=14;i++){
            if(player[player_drawing-1][i][0] == 0) count_gg++;
        }
        if(j == 15) break;  // out of hand, game over
        if(count_gg == 14) break; // winner
        player_drawing += 1;
    }


    if(j == 15){
        // get score each player
        for(i=1;i<=n_player;i++){
            sum = 0;
            for(j=0;j<=14;j++){
                sum += player[i-1][j][0];
            }
            score_player[i-1] = sum;
        }
        score_player[pos_over] = 0; // del who's out of hand

        // who's winner 
        int pos_max = 0;
        int max = score_player[0];
        for(i=1;i<=n_player;i++){
            if(score_player[i-1] > max){
                max = score_player[i-1];
                pos_max = i;
            }
            
        }
        // winner 
        printf("Player No.%d's Winner",pos_max);
    }
    if(count_gg == 14){
        printf("Player No.%d's Winner",player_drawing);
    }
}
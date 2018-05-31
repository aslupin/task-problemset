#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // vector <int> ii;
    // vector <int,int> iii;
    // int sour,bitter;
    int dif;
    int n;
    cin >> n;
    int perket[n][2];
    for(int i=0;i<n;i++){
        // cin >> sour >> bitter;
        // dif = abs(sour - bitter);
        cin >> perket[i][0] >> perket[i][1];
        if(i==0) dif = fabs(perket[i][0] - perket[i][1]);
        if(fabs(perket[i][0] - perket[i][1]) < dif) dif = fabs(perket[i][0] - perket[i][1]);
        // if(abs(perket[i][0]*perket[i-1][0] - perket[i][1]+perket[i-1][0]) < dif && i > 0) dif = abs(perket[i][0]*perket[i-1][0] - perket[i][1]+perket[i-1][0]);
    }
    for(int i=0;i<n;i++){ // line
            
            for(int j=0;j<n;j++){
                int sour = perket[i][0],bitter = perket[i][1];
                for(int k=j;k<n;k++){
                    if(i != k){
                    sour *= perket[k][0];
                    bitter += perket[k][1];
                    // cout <<"dd  "<< i << " " << k <<" " << sour << " " << bitter << endl;
                    if(fabs(sour - bitter) < dif) dif = fabs(sour - bitter);
                    }
                }
            }
            
    }

    // for(int i=0;i<n;i++){
    //     int sour = 1,bitter = 0;
    //     for(int j=i;j<n;j++){
    //         sour *= perket[j][0];
    //         bitter += perket[j][1];
    //         if(abs(sour - bitter) < dif) dif = abs(sour - bitter);
    //     }
    // }
    cout << dif;
}
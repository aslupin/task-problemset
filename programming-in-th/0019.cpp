using namespace std;
#include <iostream>
#include <stdlib.h>
int main(){
    
    int n;
    cin >> n;
    int perket[n][3];
    for(int i=0;i<n;i++){
        cin >> perket[i][0] >> perket[i][1];
        perket[i][2] = abs(perket[i][0] - perket[i][1]);
    }
}
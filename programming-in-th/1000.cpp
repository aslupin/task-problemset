#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,len;
    int out = 0;
    cin >> len >> n;
    string txt[n];
    int ans;
    if(n==1) cout << txt[0];
    for(int i=0;i<n;i++){
        cin >> txt[i];
        int countNoChain=0;
            for(int c=len-1;c>=0;c--){
            if(txt[i-1][c] != txt[i][c]) countNoChain++;
            if(i == n-1){
                cout << txt[i];
                return 0;
            }
            if(countNoChain > 2){
                cout << txt[i-1];
                return 0;
            }
        }
    }
}
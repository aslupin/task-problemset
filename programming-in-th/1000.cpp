#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,len;
    int out = 0;
    cin >> len >> n;
    // string txt[n];
    string txtone,txttwo;
    cin >> txtone;
    int ans;
    if(n==1) cout << txtone;
    for(int i=1;i<n;i++){
        // cin >> txt[i];
        cin >> txttwo;
        int countNoChain=0;
            for(int c=0;c<len;c++){
            if(txtone[c] != txttwo[c]) countNoChain++;
            if(i == n-1){
                cout << txttwo;
                return 0;
            }
            if(countNoChain > 2){
                cout << txtone;
                return 0;
            }
        }
        txtone = txttwo;
    }
}
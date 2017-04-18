using namespace std;
#include <iostream>
#include <iomanip>
main(){
    int n;
    cin >> n;
    
    double m[n],mm[n];
    double ch_point = 999999;
    int ch_i=0;
    double sum=0;
    
    for(int i=0;i<n;i++){
        cin >> m[i] >> mm[i];
        
        if(mm[i]/m[i] < ch_point){
     //   cout << "ch_i : " << mm[i]/m[i]; 
        ch_point = mm[i]/m[i];
        ch_i = mm[i]; 
        }
        
        sum += m[i]*ch_i;
        
    }
    cout << setprecision(0) << fixed << sum;
    
    
}

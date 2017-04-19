using namespace std;
#include <iostream>
#include <algorithm>
main(){
    int n_food,n_ignore;
    //size-save-food
    cin >> n_food >> n_ignore;
    int food[n_food],ignore_food[n_ignore];
    // input ignore-food
    for(int i=0;i<n_ignore;i++) cin >> ignore_food[i];
    // bf-time-test
    for(int i=0;i<n_food;i++)food[i] = i+1; 
    do{
      if(find(&ignore_food[0],&ignore_food[n_ignore],food[0]) == &ignore_food[n_ignore]){
            for(int i=0;i<n_food;i++) cout << food[i] << " ";
        cout << endl;
       }
    }while(next_permutation(&food[0],&food[n_food]));
    
    

}

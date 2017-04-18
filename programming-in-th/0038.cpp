using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
main(){
    vector<string> vec;
    vector<string>::iterator it;
    int n;
    string temp;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    it = unique(vec.begin(),vec.end());
    vec.resize(distance(vec.begin(),it));
    for(vector<string>::iterator itr = vec.begin();itr!=vec.end();itr++){
       cout << *itr << endl; 
    }
}

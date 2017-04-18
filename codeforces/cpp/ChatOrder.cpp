using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

main(){
    vector<string> chatod;
    vector<string> get_ans;
    int n,i;
    string txt,txt2;
    vector<string>::iterator p,q;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> txt;
        chatod.push_back(txt);
    }
    for(q = chatod.end(); q != chatod.begin() ;q--){
        p = find(get_ans.begin(),get_ans.end(),*q);
        cout << *q;
        if(p != get_ans.end()){
        }
        else get_ans.push_back(*q);
            
    }
    for(p = get_ans.begin();p!=get_ans.end();++p){
        cout << *p <<endl;
    }

}

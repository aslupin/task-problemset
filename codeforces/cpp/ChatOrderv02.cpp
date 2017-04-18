using namespace std;
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <list>

main(){
    list<string> chatod;
    list<string> get_ans;
    
    int n,i;
    string txt,txt2;
    list<string>::iterator p,q;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> txt;
        chatod.push_back(txt);
    }
    //chatod.unique();
     for(p = chatod.begin();p!=chatod.end();++p){

        q = find(get_ans.begin(),get_ans.end(),*p);
        //not found
        if(q == get_ans.end()){
            get_ans.push_back(*p);
            //chatod.pop();
        }
        // found
        else {
            get_ans.remove(*q);
            get_ans.push_back(*q);
        }
    }
    
    
    get_ans.reverse();
    for(p = get_ans.begin();p!=get_ans.end();++p){
        cout << *p <<endl;
    }
    /*
    for(i=1;i<=n;i++){
        txt = chatod.top();

        p = find(get_ans.begin(),get_ans.end(),txt);
        if(p == get_ans.end()){
            get_ans.push_back(txt);
            chatod.pop();
        }
        else {
            
            
            chatod.pop();
        }
    }
   
    for(p = get_ans.begin();p!=get_ans.end();++p){
        cout << *p <<endl;
    } */
}

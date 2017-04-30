using namespace std;
#include <iostream>
main(){
int score=0;
string number;
cin >> number;
int i =0;
while(number[i]!='\0'){
    if(number[i] == '0' || number[i] == '4' || number[i] == '6' || number[i] == '9') score++;
    if(number[i] == '8') score+=2;
i++;
}
cout << score;
}

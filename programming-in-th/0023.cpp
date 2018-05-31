#include <iostream>
using namespace std;
int main(){
    string day[12] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
// int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int month[] = {0,31,59,90,120,151,181,212,243,273,304,334};
    // int month[] = {31,59,90,120,150,180,211,242,272,302,332,363};
    int d,m;
    cin >> d >> m;
    cout << day[((month[m-1] + d) % 7)];

}
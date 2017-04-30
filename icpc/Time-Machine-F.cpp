using namespace std;
#include <iostream>
#include <map>
int main() {
    
    map<string,int> month;
    map<int, string> revM;
    revM[1] = "JAN";
    revM[2] = "FEB";
    revM[3] = "MAR";
    revM[4] = "APR";
    revM[5] = "MAY";
    revM[6] = "JUN";
    revM[7] = "JUL";
    revM[8] = "AUG";
    revM[9] = "SEP";
    revM[10] = "OCT";
    revM[11] = "NOV";
    revM[12] = "DEC";
    month["JAN"] = 1;
    month["FEB"] = 2;
    month["MAR"] = 3;
    month["APR"] = 4;
    month["MAY"] = 5;
    month["JUN"] = 6;
    month["JUL"] = 7;
    month["AUG"] = 8;
    month["SEP"] = 9;
    month["OCT"] = 10;
    month["NOV"] = 11;
    month["DEC"] = 12;
    //int ar[12] = {} 
    int temp;
    string mon_input;
    int num_input;
    cin >> mon_input >> num_input;
    if(num_input >= 0){
        if(month[mon_input] + num_input <= 12){
        temp = (month[mon_input] + num_input);
        if(temp>12)temp = temp % 12 +1;
        }
        else{
        temp = (month[mon_input] + num_input);
        if(temp>12)temp = temp % 12;
        
            
        }
        
    }
    else{
        // case timeback in cur-mon
        if(month[mon_input] + num_input >= 1){
            temp = month[mon_input] + num_input;
        }
        else{
            temp = 13 - (((num_input*-1)-(month[mon_input]-1))%12);
            if(temp==13) temp=1;
        }

    }
      
    cout << revM[temp] ;
    

}

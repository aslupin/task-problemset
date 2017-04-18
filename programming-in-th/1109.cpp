using namespace std;

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>


main(){
    double sum = 0.0;
    typedef pair<int,int> ii;
    vector<ii> vii;
    int n,a,b;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        vii.push_back(ii(a,b));
    }
    sort(vii.begin(),vii.end());
    for(vector<ii>::iterator itr = vii.begin()+1;itr != vii.end();itr++){
            for(vector<ii>::iterator itrr = vii.begin();itrr!= vii.end();itrr++){
                ii ooi = *itrr; //b
                ii ooii = *itr; //a
               //  cout << "a : b" << itr << " : " << itrr << "  :  ";
                if(itr != itrr && ooi.second <= n && ooii.first > ooi.first && ooi.second > ooii.second){
                    double temp = ooii.first + ooi.first;
                    sum += temp;
                   // cout << ooii.first << " : " << ooi.first << endl;
                    
                }
                
                
            }
    }
    
    printf("%.0lf",sum);
    
    
}

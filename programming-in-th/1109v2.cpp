using namespace std;

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>


main(){
    double sum = 0.0;
    typedef pair<double,double> ii;
    vector<ii> vii;
    int n;
    double a,b;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%lf %lf",&a,&b);
        vii.push_back(ii(a,b));
    }
   
    sort(vii.begin(),vii.end());
    for(vector<ii>::iterator itr = vii.begin();itr != vii.end();itr++){
            
            for(vector<ii>::iterator itrr = itr;itrr!=vii.begin()-1;--itrr){
                ii ooi = *itrr; //b
                ii ooii = *itr; //a
                
                
                if(ooii.first != ooi.first && ooi.second > ooii.second && ooi.second <= n){
                sum += ooii.first + ooi.first;;
                //cout << ooii.first << " " << ooii.second << " : " << ooi.first << " " << ooi.second << endl;
               }
                }
    }
            
            
            
    printf("%.0lf",sum);
    
    
}

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
    
    
    for(int i=n-1;i!=-1;i--){
        for(int j=i-1;j!=-1;j--){
            if(vii[i].first != vii[j].first && vii[j].second > vii[i].second && vii[j].second <= n){
          
                sum += vii[i].first + vii[j].first;
                //cout << ooii.first << " " << ooii.second << " : " << ooi.first << " " << ooi.second << endl;
                }
            
        }
    }
    
                
                
            
            
            
    printf("%.0lf",sum);
    
    
}

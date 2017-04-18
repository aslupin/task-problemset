#include <stdio.h>  
int main()  
{  
    int n,r[10],a[42]={0},ans=0;  
    for(int i=0;i<10;i++)  
    {  
        scanf("%d",&n);  
        r[i]=n%42;  
        for(int j=0;j<42;j++)  
        {  
            if(r[i]==j)  
            a[j]++;  
        }  
    }  
    for(j=0;j<42;j++)  
    {  
        if(a[j]!=0)  
        ans++;  
    }  
    printf("%d",ans);
    
	
	//return 0;  
}  

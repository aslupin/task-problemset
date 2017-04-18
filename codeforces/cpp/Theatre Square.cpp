#include <stdio.h>
#include <math.h>
main(){
    double n,m,a;
    scanf("%lf %lf %lf",&n,&m,&a);
    printf("%0.0lf",ceil(n/a)*ceil(m/a));
}

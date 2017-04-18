#include <stdio.h>
main(){
long num;
scanf("%ld",&num);
printf("%s",(num%2 == 0) &&(num>2) ? "YES":"NO");
}

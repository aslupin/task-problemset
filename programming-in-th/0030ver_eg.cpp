#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int r3,r11;
int b=1;
char st[1000000];
main (){
    
scanf ("%s",st);
for (int len=strlen(st)-1;len>=0;len--){
r3+=(st[len]-'0')%3;

if (b%2==1) r11+=(st[len]-'0')%11; // first : Number N*1
else r11+=((st[len]-'0')*10)%11; // second : Number N*10

b++;
}
printf ("%d %d",r3%3,r11%11);

}

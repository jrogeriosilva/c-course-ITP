#include <stdio.h>

int main (){
    int a, b, c, d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    d = (a*60*60) + (b*60) + c;
    
    printf ("%d",d);
    return 0;
}

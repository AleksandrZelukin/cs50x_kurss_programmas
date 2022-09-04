
#include <stdio.h>

int main (void)

{
    int  a,b,c,d,e;
    a = scanf("%d\n", &a);
    //a = 47;
    b = a / 25;
    c = (a - b * 25)/10;
    d = (a - b * 25 - c *10)/5;
    e = (a - b * 25 - c *10 - d * 5)/1;
    printf("Quarter %d\n", b );
    printf("Disme %d\n", c);
    printf("Nickel %d\n", d );
    printf("Penny %d\n", e );
     

}

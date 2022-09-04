
#include <stdio.h>


int main ()

{
int  Coins, Quarter, Disme, Nickel, Penny;
    printf("Get coins:  ");
    scanf("%u", &Coins);


    Quarter = Coins / 25;
    Disme = (Coins - Quarter * 25)/10;
    Nickel = (Coins - Quarter * 25 - Disme *10)/5;
    Penny = (Coins - Quarter * 25 - Disme *10 - Nickel * 5)/1;


    printf("Quarter (25c) %d\n", Quarter );
    printf("Disme (10c) %d\n", Disme );
    printf("Nickel (5c) %d\n", Nickel );
    printf("Penny (1c) %d\n", Penny );
    printf("Control: ");
    printf("%d\n", Coins);

}

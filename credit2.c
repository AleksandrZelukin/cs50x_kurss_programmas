//Project Using Luhn's Algorithm - Credit Card validation

//#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main()
{
   long long ccnum = 0;



    int digitcounter = 0 ;
    char result[11] ;
    int sum = 0 ;
    int  divisor = 10 ;

    do
    {
      ccnum = get_long("Enter your credit card number: ") ;
    }
    while (ccnum <= 0) ;

//--------------------CHECKSUM--------------------------------

    //Case-01(Multiply every other digit by 2):

    long long tempccnum = ccnum ;
    while (tempccnum > 0)
    {
        int lastdigit = tempccnum % 10 ;
        sum = sum + lastdigit ;
        tempccnum = tempccnum / 100 ;
    }

    // Case-02(Multiplication every other digit by 2):

    tempccnum = ccnum / 10 ;
    while(tempccnum > 0)
    {
        int secondlastdigit = (tempccnum % 10) ;

        int tempmultiply = secondlastdigit*2 ;

        sum = sum + (tempmultiply % 10) + (tempmultiply / 10)  ;

        tempccnum = tempccnum / 100 ;
    }
//----------first two digit extraction------------

   long long initdigit = 0, tempinitdigit = 0 ;

   while(ccnum)
   {
     initdigit = tempinitdigit  ; // initdigit will hold the first two digits.
     tempinitdigit = ccnum  ;
     ccnum = ccnum/10 ;
   }




//-------------Digit counter----------
    while(ccnum != 0)
    {
          // iterate until ccnum becomes 0
         // remove last digit from ccnum in each iteration
        // increase digitcounter by 1 in each iteration

        ccnum = ccnum / 10 ;
        digitcounter++ ;
    }
  //------------------Final part - Condition checking------------------------

    if(sum % 10 == 0)
    {
        if (digitcounter == 15 && (initdigit == 34 || initdigit == 37))
        {
            strcpy(result, "AMEX\n") ;
        }

        else if (digitcounter == 16 && (initdigit >= 51 && initdigit <=55))
        {
             strcpy(result,"MASTERCARD\n") ;
        }

        else if ((digitcounter == 13 || digitcounter == 16) && tempinitdigit == 4)
        {
             strcpy(result,"VISA\n") ;
        }

        else
        {
             strcpy(result,"INVALID\n") ;
        }

    }

    else
    {
        strcpy(result,"INVALID\n") ;
    }
    printf("%s\n", result) ;
}
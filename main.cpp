 /*
    Glenn Ahearne
    06/11/17
    Exercise 6
    Binary Decimal Conversions
  */

    /**Preprocessive Directives*/
#include <iostream>
#include <math.h>


using namespace std;

  /**Function prototypes*/
long int bin_2_dec(long int);
long int dec_2_bin(long int);

  /**Main Function*/
int main()
{
      /**variable Declarations*/
    long int b, d, bin2dec, dec2bin;

    char input;


      /**Read out Title of Exercise*/
    cout<< "\n\t\tDecimal/Binary Numbering Systems Conversion\n\n";


      /**Do while loop for Switch case to read out titles*/
    do

    {
        cout<<  "\t\tChoose One of the Following Options:\n\n"<<
                "\t\tPress b for Binary to Decimal Conversion\n"<<
                "\t\tPress d for Decimal to Binary Conversion\n"<<
                "\t\tPress q to Quit!"<< endl;

        cout<<  "\n\t\tValue Entered is : ";
        cin >>  input;



          /**Switch case statement which calls function depending on input character*/
        switch (input)

        {

            case 'b': cout << "\n\n\t\t Enter Binary Value to be converted : ";
                      cin >> b;
                      bin2dec = bin_2_dec(b);
                      cout << "\n\n\t\tBinary to Decimal Conversion is : " << bin2dec <<"\n" <<endl;
                      break;

            case 'd': cout << "\n\n\t\t Enter Decimal Value to be converted : ";
                      cin >> d;
                      dec2bin = dec_2_bin(d);
                      cout << "\n\n\t\tDecimal to Binary Conversion is : " << dec2bin <<"\n"  <<endl;
                      break;

            case 'q': cout << "\n\n\t\t Goodbye!"<< "\n" <<endl;
                      break;

            default : cout<<"\n\n\t\t Please Try Again!\t\t"<<endl;
                      break;


        }

    }

      /**do above while input character is not equal to Q*/
        while (input != 'q');


    return 0;
}

    /**Binary to Decimal function */
long int bin_2_dec(long int b)

{
      /**assigning values to variables*/
    long int bin2dec = 0;
    long int remainder, n = 0;

    /**while loop if B is not equal to 0*/
    while (b != 0)

   {
       remainder = b % 10;

        b = b / 10;

        bin2dec =  bin2dec + (remainder * pow(2,n));

        n++;

   }

     /**Return value binary to decimal*/
    return bin2dec;


}

  /**decimal to function*/
long int dec_2_bin(long int d)
{
    /**assigning values to variables*/
    long int  dec2bin = 0;
    long int remainder , n = 0;


    /**while loop for d not equal to zero*/
    while (d != 0)

    {

        /**Calculating decimal to binary*/
        remainder = d % 2;

        d = d / 2;

        dec2bin = dec2bin + remainder * pow(10, n);

        n++;
    }


    /**Return Value to dec2bin in main function*/
    return dec2bin;


}



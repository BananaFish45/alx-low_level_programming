#include "main.h"



/**
*print8ing alphabets
*the retur 0
*/

void print_alphabet_x10(void)
{
   
   int j =0;
   for (j=0 ; j<10 ; j++)
   {
       char i ='a';
       while (i <= 'z') {
        _putchar(i);
        i ++;
    }
   _putchar('\n');
   }

}

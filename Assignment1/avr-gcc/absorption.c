#include <avr/io.h>
int main (void)
{
   int X;
   int A=0,B=1;
   DDRB    |= ((1 << DDB5));
   while(1){

      X= A || (A && B);

      if(X==1)
        PORTB = ((1 <<  PB5));

    }

  return 0;

}

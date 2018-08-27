/******************************************************************************

Author : RISHU RAJ
Code in c to find nth prime number.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int isprime (int n)
{
  int i, flag = 1, sqrt_n = sqrt (n) + 1;	// did +1 in sqrt to avoid equality for exact squares. 
  if (n == 2)
    flag = 1;			// since 2 i prime.
  else if ((n == 1) || (n % 2 == 0))
    return 0;			//since 1 and even nos are not prime. 
  else
    for (i = 3; i < sqrt_n; i += 2)
      {
    	if (n % i == 0)		//genral rule to check for prime
        	{
        	    flag = 0;
        	    break;
            }
        }
  return flag;			// flag = 1 if prime else 0;
}

int main ()
{
  int n, count = 1, i = 3;
  printf ("enter n to find nth prime no.");
  scanf ("%d", &n);
  if(n<1)
  {
      printf("enter +ve n\n");
      main();
  }
  while (count < n)
    {
      if (isprime (i) == 1)
    	count++;
      i += 2;			//excluding dividing by even nos.
    }
  if (n == 1)
    printf ("2");
  else
    printf ("%d", i - 2);	// due to extra increment in i in last interation

  return 0;
}

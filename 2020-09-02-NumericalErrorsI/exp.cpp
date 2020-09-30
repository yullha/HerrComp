#include <iostream>
#include <cstdlib>

using namespace std;

typedef double REAL;

REAL suma(double x, int Nmax);

int main(int argc, char *argv[])
{
  cout.precision(15);
  cout.setf(ios::scientific);
  
  REAL xval = atof(argv[1]);
  int N = atoi(argv[2]);
  cout << suma(xval, N) << "\n";
  
  return 0;
}

REAL suma(double x, int Nmax)
{
  /*
  Since
  e(-x) = 1 - x + x²/2! - x³/3! + ...
  but, note that the n and n+1-terms are
  a_n = (-x)^n/n!,
  a_{n+1} = (-x)^{n+1}/(n+1)!,
          = (-x)(-x)^n/n!(n+1),
          = (-x)/(n+1)*a_n,
  where a_0 = 1.
  */

  REAL term = 1.0;    // a_0 = 1
  REAL sum = term;    // e(-x) = sum_{n=0}^Nmax a_n = a_0
  /* test line
  cout << 0 << "\t" << term << "\t" << sum << "\n";  
  */

  for(int i = 1; i <= Nmax; i++)
  {
    term = (-x)/i*term;   // a_i
    sum = sum + term;
    /* test line
    cout << i << "\t" << term << "\t" << sum << "\n";
    */
  }
  
  return sum;
}

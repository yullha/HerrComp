/*
Imprime valores de los polinomios no asociados de Legendre de orden N, entre -1 y 1, en pasos de 0.1.
*/

#include <iostream>
#include <cmath>

const int N = 5; 
const double xmin = -1;
const double xmax = 1;
const double dx = 0.01;

void set()
{
  std::cout.precision(15);
  std::cout.setf(std::ios::scientific);
}

int main()
{
  set(); 
  for(double x = xmin; x <= xmax; x=x+dx)
  {
    std::cout << x << "\t" << std::legendre(N, x) << '\n';
  }

  return 0;
}

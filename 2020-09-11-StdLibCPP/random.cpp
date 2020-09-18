#include <iostream>
#include <random>

const int seed = 0;       // seed for random generator
const double xmin = 0.0;  // random number x
const double xmax = 1.0;

const int N = 10000;      // N random numbers generated
const int Nbins = 20;     //
const double dxhisto = (xmax - xmin)/Nbins;

double histo[Nbins] = {0.0};
         
void generate(int s, int a, int b, int N)
{
  // Declara el generador con semilla s
  std::mt19937 gen(s);
  // Genera número aleatorio entre a y b
  std::uniform_real_distribution<double> dis(a,b);

  for(int i = 0; i < N; i++)
  {
    double r = dis(gen);
    int bin = int((r-xmin)/dxhisto);
    histo[bin] += 1;
  }  

  for(int i = 0; i < Nbins; i++)
  {
    std::cout << xmin + i*dxhisto << "\t" << histo[i] << "\n";
  }
}

int main()
{
  generate(seed, xmin, xmax, N);

  return 0;
}

/*
gnuplot
*/
#include <iostream>
#include <cstdlibd>

using namespace std;

int main(int argc, char *argv[])
{
  /*
  argc := cuenta el numero de argumentos en la linea de comandos
  argv[] := guarda los argumentos de la linea de comandos

  cout << "Se ingresaron "<< argc << "argumentos" << "\n";
  cout << "El primer argumento es "<< argv[0] << "\n";
  cout << "El segundo argumento es "<< argv[1] << "\n";
  */

  cout.precision(15);
  cout.setf(ios::scientific);

  double under = 1.0, over = 1.0;
  int N = atoi(argv[1]);
  
  for(int i = 0; i <= N; i++)
  {
    cout << i << "\t" << under << "\t" << over << "\n";
    under /= 2.0;
    over *= 2.0;
  }

  return 0;
}

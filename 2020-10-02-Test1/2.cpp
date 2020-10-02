# include <iostream>

void f1(void);
void f2(void);
void f3(void);
void f4(void);

int main()
{
    f1();
    f2();
    f3();
    f4();
    return 0;
}

void f1(void)
{
    // double b = 1;           // -W: b no se usa
    //double *z = new char [100] {0.0}
    char *z = new char [100];  // -W: z se cambia de double a char
    // double a = 2;           // -W: a no se usa
    // z[-1] = 25;
    z[0] = 25;                 // -W: el arreglo debe comenzar en [0].
    delete [] z;
}

void f2(void)
{
    char *y = new char [10];
    y[9] = 'a';               // -valgrid: y[10] sesalía del tamaño del char
    delete [] y;              // -valgrid: y[] must be deleted
}

void f3(void)
{
    int x;
    x=0;          // -W: x debe inicializarse para ser usada en el if()
    
    if(x == 0)    // -W: el argumento del if se cambió de "x=0" a "x==0"
    {
        std::cout << "X is zero: " << x <<"\n";
    }
}

void f4(void)
{
    int x;
    x=0;          // -W: x debe inicializarse para ser usada en cout
    std::cout << "x = " << x << "\n";
    
    int i, j;
    int a[10];    // -W: se borra "b[10]" porque no se usa

    j=0;          // -Valgrid: j debe inicializarse antes de acumularse en el for()
    for(i = 0; i < 10; i++)  //-Valgrid: i<= 10, el último paso sale de a[]
    {
        a[i] = i;   // -Valgrid: a[] debe ser inicializada
        j += a[i];    
    }    
   
    if (j == 77)   // -W: el argumento del if se cambió de "j=7" a "j==77"
        std::cout << "hello there\n"; // se cambia comillas españolas por <<
}

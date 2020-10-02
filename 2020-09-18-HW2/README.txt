** Homework II
El objetivo de esta práctica es que usted practique la instalación de programas 1) desde las fuentes y 2) usando spack.

Debe enviar screenshots por este medio (Google Classroom), no por correo. Se puede entregar en grupos máximo de 3 personas. Los nombres de los integrantes del grupo deben aparecer en los screenshots o similar. 

1) La primera parte del ejercicio consiste en instalar desde las fuentes la libreria fmt: https://github.com/fmtlib/fmt. Como evidencia, el primer screenshot debe contener lo siguiente:
   1.a) La salida del comando (se espera que aparezca instalada alli parte de fmt)  
        ls $HOME/local/include/fmt
   1.b) La linea de comando usada para compilar exitosamente el siguiente programa:
        #include <fmt/color.h>
        int main() {
          fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold,
             "Hello, {}!\n", "world");
          fmt::print(fg(fmt::color::floral_white) | bg(fmt::color::slate_gray) |
             fmt::emphasis::underline, "Hello, {}!\n", "мир");
          fmt::print(fg(fmt::color::steel_blue) | fmt::emphasis::italic,
             "Hello, {}!\n", "世界");
        }
   1.c) La ejecucion del anterior programa.

2) En la segunda parte de este ejercicio usted usará spack para instalar una
libreria y mostrará el resultado en el screenshot. La utilidad a instalar, con spack, es eigen version 3.3.1.

Una vez instalada, debe tomar un screenshot que incluya la salida de los tres siguientes comandos, en ese orden:
       echo $CPATH
       spack load eigen@3.3.1
       echo $CPATH
       spack unload eigen@3.3.1
       echo $CPATH
(NOTA: CPATH es una variable de entorno en donde los compiladores gnu, como g++, buscan encabezados para incluir).

** Solution

1) Instalar desde las fuentes la libreria fmt
    [X] Descargar fmt desde https://github.com/fmtlib/fmt.
    [X] Ir a Descargas
        cd Downloads
    [X] Descomprimir el archivo
        unzip fmt-master.zip
    [X] Entrar en el directorio del .zip
        cd fmt-master
    [X] Hacer el cmake
        mkdir build_dir
        cd build_dir
        cmake ../ -DCMAKE_INSTALL_PREFIX=$HOME/local
    [X] Compilar e instalar
        make -j 2 install
    
   1.a) La salida del comando (se espera que aparezca instalada alli parte de fmt)  
        [X] ls $HOME/local/include/fmt
    
   1.b) Para compilar exitosamente el siguiente programa:

        #include <fmt/color.h>
        int main() {
          fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold,
             "Hello, {}!\n", "world");
          fmt::print(fg(fmt::color::floral_white) | bg(fmt::color::slate_gray) |
             fmt::emphasis::underline, "Hello, {}!\n", "мир");
          fmt::print(fg(fmt::color::steel_blue) | fmt::emphasis::italic,
             "Hello, {}!\n", "世界");
        }

        Se usó la línea de comando
        [ ] g++ -std=c++17 -I $HOME/local/include fmt.cpp
        
   1.c) La ejecucion del anterior programa.
        [ ] Tomar captura de pantalla con 1a), 1b) y 1c) en la terminal.

2) [X] Instalar eigen versión 3.3.1
       spack info eigen
       spack install eigen@3.3.1
   [X] Usar los comandos solicitados    
       echo $CPATH
       spack load eigen@3.3.1
       echo $CPATH
       spack unload eigen@3.3.1
       echo $CPATH
   [X] Tomar captura de pantalla.

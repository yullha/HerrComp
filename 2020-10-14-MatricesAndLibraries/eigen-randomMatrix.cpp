#include <iostream>
#include <eigen3/Eigen/Dense>

int main(int argc, char**argv)
{
    //matriz uniformemente distribuida entre -1 y 1
    srand(2);
    Eigen::MatrixXd m = Eigen::MatrixXd::Random(3,3);
    std::cout << "Distribuida entre -1 y 1" <<std::endl;
    std::cout << m <<std::endl;

    //Distribuida entre 0 y 1
    m = (m + Eigen::MatrixXd::Constant(3,3,1))/2;
    std::cout << "Distribuida entre 0 y 1" <<std::endl;
    std::cout << m <<std::endl;

    /*
    //Distribuida entre a y b
    double a = 3, b =6;
    m = m + (b-a)*Eigen::MatrixXd::Constant(3,3,1);
    std::cout << "Distribuida entre a y b" <<std::endl;
    std::cout << m <<std::endl;
    */
    // Usando el operador ,
    Eigen::Matrix2d m2;
    m2 << 1, 2,
        4, -5;
    std::cout << "Usando el operador," <<std::endl;
    std::cout << m2 <<std::endl;

    return 0;
}

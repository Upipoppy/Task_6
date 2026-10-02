#include <iostream>
#include <cmath>
int main(){
   double A, x, D, S, b;
    std::cout <<"input  D, x, b"<< std::endl;
    std::cin >> D >> x;
    b=x+D;
    A=D*x/b;
    S=(A*A+b*cos(x))/(D*D*D+(A+D-b));
    std::cout <<"S = "<<S;
    return 0;
}
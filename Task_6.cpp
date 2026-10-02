#include <iostream>
#include <cmath>
int main(){
   double A, D, x, b, S;
    std::cout <<"input A, D, x, b"<< std::endl;
    std::cin >> A >> D >> x >> b;
    S=(A*A+b*cos(x))/(D*D*D+(A+D-b));
    std::cout <<"S = "<<S;
    return 0;
}
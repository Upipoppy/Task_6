#include <iostream>
#include <cmath>
int main(){
   double A, D, p, y, K, C, B, x;
    std::cout <<"input K, D, C, p, x"<< std::endl;
    std::cin >> K >> D >> C >> p;
    A=x+sin(p);
    B=exp(K);
    y=1+K*K/(2*A*B)-B+D*C;
    std::cout <<"y = "<<y;
    return 0;
}
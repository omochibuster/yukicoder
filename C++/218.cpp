#include<iostream>
#include<cmath>

int main(){
    double a, b, c;
    std::cin >> a >> b >> c;

    if(ceil(a / b) * 2 >= ceil(a / c) * 3) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}

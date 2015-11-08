#include<iostream>
#include<iomanip>
int main(){
    int a, b, x, y;
    std::cin >> a >> b>> x >> y;

    std::cout << std::setprecision(10);
    if(x * (a + b) / static_cast<double>(a) <= x + y){
        std::cout << x * (a + b) / static_cast<double>(a) << std::endl;
    }else{
        std::cout << y * (a + b) / static_cast<double>(b) << std::endl;
    }

    return 0;
}

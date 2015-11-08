#include<iostream>

int main(){
    long long n, h, m, t;
    std::cin >> n >> h >> m >> t;

    m += t * (n - 1);
    h += m / 60;
    m %= 60;

    h %= 24;
    std::cout << h << std::endl;
    std::cout << m << std::endl;

    return 0;
}

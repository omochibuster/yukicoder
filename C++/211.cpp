#include<iostream>
#include<map>
#include<iomanip>

int main(){
    std::cout << std::setprecision(12);
    int prime[6] = {2,3,5,7,11,13};
    int cn[6] = {4,6,8,9,10,12};

    std::map<int, int> m;
    for (size_t i = 0; i < 6; i++) {
        for (size_t j = 0; j < 6; j++) {
            m[prime[i] * cn[j]]++;
        }
    }

    int num;
    std::cin >> num;
    std::map<int, int>::iterator it = m.find(num);
    if(it != m.end()) std::cout << it->second / 36.0 << std::endl;
    else std::cout << 0 << std::endl;

    return 0;
}

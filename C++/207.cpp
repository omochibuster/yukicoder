#include<iostream>
#include<string>
#include<algorithm>

int main(){
    long long a, b;
    std::cin >> a >> b;

    for (long long i = a; i <= b; i++) {
        if(i % 3 == 0) std::cout << i << std::endl;
        else{
            std::string s;
            s = std::to_string(i);
            if(std::count(s.begin(), s.end(), '3')) std::cout << i << std::endl;
        }
    }
    return 0;
}

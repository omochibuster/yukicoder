#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string str;
    std::cin >> str;

    // descending sort
    std::sort(str.rbegin(), str.rend());

    std::cout << str << std::endl;
    return 0;
}

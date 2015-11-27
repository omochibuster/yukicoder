#include<iostream>
#include<string>

int main(){
    int n;
    std::cin >> n;

    std::string str, str2;
    std::cin >> str >> str2;

    int ans = 0;
    for (size_t i = 0; i < n; i++) {
        if(str[i] != str2[i]) ans++;
    }

    std::cout << ans << std::endl;
    return 0;
}

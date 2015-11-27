#include<iostream>
#include<string>
#include<algorithm>

int main(){
    std::string week;
    for (size_t i = 0; i < 2; i++) {
        std::string s;
        std::cin >> s;
        week += s;
    }

    int max = 0;
    for (int i = 0; i < 14; i++) {
        if(week[i] == 'o'){
            int j = i;
            while (week[j] == 'o') {
                j++;
            }
            max = std::max(max, j - i);
        }
    }
    std::cout << max << std::endl;
    return 0;
}

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            std::string greet;
            std::cin >> greet;
            if(greet == "nyanpass") v[j]++;
        }
    }

    int max = *std::max_element(v.begin(), v.end());
    if(max != n - 1 || std::count(v.begin(), v.end(), max) != 1){
        std::cout << -1 << std::endl;
        return 0;
    }
    for (size_t i = 0; i < v.size(); i++) {
        if(v[i] == max){
            std::cout << i + 1 << std::endl;
            return 0;
        }
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>

#define COST 30000 * 100

int main(){
    int n;
    std::cin >> n;

    std::vector<int> v;
    for(int i = 0; i < n; i++) {
        int death_penalty, exp;
        std::cin >> exp >> death_penalty;
        v.push_back(exp - death_penalty * 30000);
    }

    int max = *std::max_element(v.begin(), v.end());

    if(max * 6 < COST) std::cout << "NO" << std::endl;
    else{
        std::cout << "YES" << std::endl;
        for (size_t i = 0; i < v.size(); i++) {
            if(v[i] == max){
                for (size_t j = 0; j < 6; j++) {
                    std::cout << i + 1 << std::endl;
                }
                break;
            }
        }
    }
    return 0;
}

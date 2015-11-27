#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n;
    std::cin >> n;

    std::vector<int> score(n), ps(101);
    for(int i = 0; i < n; i++) std::cin >> score[i];
    for(int i = 0; i < n; i++){
        int num;
        std::cin >> num;
        ps[num] += score[i];
    }

    if(ps[0] >= *std::max_element(ps.begin(), ps.end())) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

    return 0;
}

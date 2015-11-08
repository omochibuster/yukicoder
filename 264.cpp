#include<iostream>

int main(){
    int n, k;
    std::cin >> n >> k;

    if(n == k) std::cout << "Drew" << std::endl;
	else if((n + 1) % 3 == k) std::cout << "Won" << std::endl;
	else std::cout << "Lost" << std::endl;

	return 0;
}

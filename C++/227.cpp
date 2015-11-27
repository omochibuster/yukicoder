#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    std::vector<int> cards(13);

    for (size_t i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        cards[num - 1]++;
    }

    int two_cards = 0, three_cards = 0;
    for (size_t i = 0; i < 13; i++) {
        if(cards[i] == 2) two_cards++;
        else if(cards[i] == 3) three_cards++;
    }

    if(three_cards && two_cards) std::cout << "FULL HOUSE" << std::endl;
    else if(three_cards) std::cout << "THREE CARD" << std::endl;
    else if(two_cards == 2) std::cout << "TWO PAIR" << std::endl;
    else if(two_cards == 1) std::cout << "ONE PAIR" << std::endl;
    else std::cout << "NO HAND" << std::endl;

    return 0;
}

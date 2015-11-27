#include<iostream>
#include<list>
#include<vector>
#include<algorithm>

long long max(std::list<long long> l, long long plus, long long minus){
    l.sort();

    // '+'と'-'の数+1個の項を作る
    if(l.size() != minus + plus + 1){
        long long num = 0;
        while(l.size() != minus + plus){
            num = num * 10 + l.back();
            l.pop_back();
        }
        l.push_front(num);
    }

    l.sort();
    l.push_front(l.back());
    l.pop_back();
    while(minus){
        long long num = l.front(); l.pop_front();
        num -= l.front(); l.pop_front();
        l.push_front(num);
        minus--;
    }

    long long ans = l.front(); l.pop_front();
    while(!l.empty()) {
        ans += l.front(); l.pop_front();
    }

    return ans;
}

long long min(std::list<long long> l, long long plus, long long minus){
    l.sort();
    if(minus == 0){
        std::vector<long long> v(plus + 1); // 計算には'+'+1個の項が必要
        long long n = 0;
        while(!l.empty()){
            v[n] = v[n] * 10 + l.front();
            l.pop_front();
            n++;
            n %= plus + 1;
        }
        while(v.size() != 1){
            long long num = v.back(); v.pop_back();
            num += v.back(); v.pop_back();
            v.push_back(num);
        }
        return v.front();
    }

        long long num = 0;
        while(l.size() != plus + minus){
            num = num * 10 + l.back();
            l.pop_back();
        }
        num = l.front() - num;
        l.pop_front();
        minus--;

        for(long long i = 0; i < plus; i++){
            num += l.front();
            l.pop_front();
        }
        while(minus){
            num -= l.front(); l.pop_front();
            minus--;
        }
        return num;
}

int main(){
    long long n;
    std::cin >> n;

    std::list<long long> l;
    long long plus = 0, minus = 0;
    for(long long i = 0; i < n; i++) {
        char c;
        std::cin >> c;
        if(c == '+') plus++;
        else if(c == '-') minus++;
        else l.push_back(c - '0');
    }

    std::cout << max(l, plus, minus) << " " << min(l, plus, minus) << std::endl;
    return 0;
}

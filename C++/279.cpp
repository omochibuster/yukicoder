#include<iostream>
#include<string>
#include<algorithm>
#include<map>

int main(){
  std::string str;
  std::cin >> str;

  std::map<char, int> m;
  for (size_t i = 0; i < str.size(); i++) {
    m[str[i]]++;
  }

  int ans = std::min(m['t'], std::min(m['r'], m['e'] / 2));
  std::cout << ans << std::endl;
  return 0;
}

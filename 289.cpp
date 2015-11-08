#include<iostream>
#include<string>

int main(){
  std::string str;

  std::cin >> str;

  int ans = 0;
  for (size_t i = 0; i < str.size(); i++) {
    if(isdigit(str[i])) ans += str[i] - '0';
  }

  std::cout << ans << std::endl;
  return 0;
}

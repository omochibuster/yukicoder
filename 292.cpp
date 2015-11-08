#include<iostream>
#include<string>
#include<algorithm>

int main(){
  std::string name;
  int t, u;

  std::cin >> name >> t >> u;

  if(t > u) std::swap(t, u);
  if(t != u) name.erase(u, 1);
  name.erase(t, 1);

  std::cout << name << std::endl;
  return 0;
}

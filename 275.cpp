#include<iostream>
#include<vector>
#include<algorithm>

int main(){
  int n;
  std::cin >> n;

  std::vector<int> v(n);
  for(int i = 0; i < n; i++) std::cin >> v[i];

  std::sort(v.begin(), v.end());

  double ans = 0;
  if(v.size() % 2 == 0){
    ans = (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2.0;
  }else{
    ans = v[v.size() / 2];
  }

  std::cout << ans << std::endl;
  return 0;
}

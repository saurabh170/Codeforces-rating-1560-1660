#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int cros = pow(n/3,2);
  int ts=0;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      char p;
      cin>>p;
      if (p=='#') {
        ts++;
      }
    }
  }
  if(ts%5==0 && ts/5<=cros){
    std::cout << "YES" << '\n';
  }
  else{
    std::cout << "NO" << '\n';
  }
  return 0;
}

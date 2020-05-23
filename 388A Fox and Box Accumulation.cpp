#include "bits/stdc++.h"
using namespace std;
#define _ long long int

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  vector<int> a;
  for (size_t i = 0; i < n; i++) {
    int p;
    cin>>p;
    a.push_back(p);
  }
  sort(a.begin(),a.end());
  vector<int>::iterator it;
  it = a.begin();
  int ans=0;
  while(a.size()!=0){
    ans++;
    int boxes=1;
    it = a.begin();
    a.erase(it);
    while (it!=a.end()) {
      // std::cout << "/* message */" << '\n';
      if (*it>=boxes) {
        a.erase(it);
        boxes++;
      }
      else{
        it++;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}

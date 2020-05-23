#include "bits/stdc++.h"
using namespace std;
#define _ long long int
vector<int> v;
int smallest_divisor(_ n){
  int k = sqrt(n)+1;
  for (int i = 2; i < k; i++) {
    if (n%i==0) {
      return i;
    }
  }
  return -1;
}

int main(int argc, char const *argv[]) {
  _ n;
  cin>>n;

  v.push_back(2);
  int k = sqrt(n)+1;
  if (n%2==0) {
    cout<<(n/2)<<endl;
  }
  else{
    int tt = smallest_divisor(n);
    if (tt==-1) {
      cout<<"1"<<endl;
    }
    else{
      _ ans = 1+(n-tt)/2;
      cout<<ans<<endl;
    }
  }

  return 0;
}

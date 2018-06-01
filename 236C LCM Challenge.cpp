#include "bits/stdc++.h"
#define _ long long int
using namespace std;
int main(int argc, char const *argv[]) {
  _ n;
  cin>>n;
  if (n==1 || n==2) {
    cout<<n<<endl;
    return 0;
  }
  if (n%2==1) {
    cout<<(n*(n-1)*(n-2))<<endl;
    return 0;
  }
  if (n==4 || n==6) {
    cout<<((n*(n-1)*(n-2))/2)<<endl;
    return 0;
  }
  if (n%3==0) {
    cout<<((n-1)*(n-2)*(n-3))<<endl;
    return 0;
  }
  cout<<(n*(n-1)*(n-3))<<endl;
  return 0;
}

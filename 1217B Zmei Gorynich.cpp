#include "bits/stdc++.h"
using namespace std;
#define _ long long int

int main(int argc, char const *argv[]) {
  int t;
  cin>>t;
  for (size_t i = 0; i < t; i++) {
    _ n,x;
    cin>>n>>x;
    _ maxd = 0;
    _ maxdiff = 0;
    _ wed = 0;
    _ weh = 0;

    cout << fixed << setprecision(15);
    for (size_t i = 0; i < n; i++) {
      _ d,h;
      cin>>d>>h;
      maxd = max(maxd, d);
      if ((d-h)>maxdiff) {
        maxdiff = d-h;
        wed = d;
        weh = h;
      }
    }
    if (x<=maxd) {
      cout<<"1"<<endl;
    }
    else if (maxdiff<=0) {
      cout<<"-1"<<endl;
    }
    else{
      // cout<<x<<"  "<<maxdiff<<endl;
      double a = double(x-maxd)/double(maxdiff);
      cout<<int(ceil(a)+1)<<endl;
    }
  }
  return 0;
}

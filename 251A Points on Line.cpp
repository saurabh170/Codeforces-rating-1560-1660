#include "bits/stdc++.h"
using namespace std;
#define _ long long int

int main(int argc, char const *argv[]) {
  _ n,d;
  cin>>n>>d;
  _ a[n];
  for (_ i = 0; i < n; i++) {
    cin>>a[i];
  }
  if (n<3) {
    cout<<"0"<<endl;
    return 0;
  }
  int i=0,j=2;
  _ ans = 0 ;
  while(j<n){
    if ((j-i)<=2 && ((a[j] - a[i]) >d)) {
      i++;
      j++;
    }
    else if (j-i<2) {
      j++;
    }
    else{
      while(j<n-1 && (a[j+1]-a[i])<=d){
        j++;
      }
      _ pp = j-i;
      pp = pp*(pp-1)/2;
      // cout<<pp<<" "<<j<<" "<<i<<endl;
      ans+=pp;
      i++;
    }
  }
  cout<<ans<<endl;

  return 0;
}

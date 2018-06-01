#include "bits/stdc++.h"
using namespace std;

#define _ long long int

_ maxSum(_ a[],_ n){
  _ sum=0;
  _ max=0;
  // _ l=0;
  for (size_t i = 0; i < n; i++) {
    sum=sum+a[i];
    // cout<<abs(a[i+1]-a[i])*pow(-1,(i-l))<<endl;
    if (sum>max) {
      max=sum;
    }
    if (sum<0) {
      sum=0;
      // l=i;
    }
    // cout<<"sum="<<sum<<" l "<<l<<endl;

  }
  return max;
}

int main(int argc, char const *argv[]) {
  _ n;
  cin>>n;
  _ a[n-1];
  _ b[n-2];
  for (size_t i = 0; i < n; i++) {
    cin>>a[i];
  }
  for (size_t i = 0; i < n-1; i++) {
    b[i]=abs(a[i+1]-a[i])*pow(-1,i);
    
  }
  _ c[n-2];
  for (size_t i = 0; i < n-1; i++) {
    c[i]=abs(a[i+1]-a[i])*pow(-1,i+1);

  }
  cout<<max(maxSum(b,n-1),maxSum(c,n-1))<<endl;
  return 0;
}

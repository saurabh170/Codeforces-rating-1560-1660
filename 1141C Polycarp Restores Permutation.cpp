#include "bits/stdc++.h"
using namespace std;
#define _ long long int

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int a[n];
  a[0] = n;
  int minn = a[0];
  for (size_t i = 1; i < n; i++) {
    int q;
    cin>>q;
    a[i] = a[i-1] + q;
    minn = min(minn, a[i]);
  }

  // for (size_t i = 0; i < n; i++) {
  //   cout<<a[i]<<" ";
  // }
  // cout<<"ds"<<endl;
  for (size_t i = 0; i < n; i++) {
    a[i] = a[i] - minn + 1;
  }
  int count[n+1];
  for (size_t i = 0; i <=n; i++) {
    count[i]=0;
  }
  for (size_t i = 0; i < n; i++) {
    if (a[i]<1 || a[i]>n){
      cout<<"-1"<<endl;
      return 0;
    }
    count[a[i]]++;
  }
  for (int i = 1; i <= n; i++) {
    if (count[a[i-1]]!=1){
        cout<<"-1"<<endl;
        return 0;
    }
  }
  for (size_t i = 0; i < n; i++) {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;
}

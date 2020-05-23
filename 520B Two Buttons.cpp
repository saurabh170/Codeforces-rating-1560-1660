#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[]) {
  int n,m;
  cin>>n>>m;
  if(m<=n){
    cout<<(n-m)<<endl;
  }
  else{
    int ans=0;
    while(m>n){
      if(m%2==0){
        m=m/2;
        ans++;
      }
      else{
        m=m/2;
        m++;
        ans+=2;
      }
      // cout<<"m = "<<m<<endl;
    }
    ans+=(n-m);
    cout<<ans<<endl;
  }
  return 0;
}

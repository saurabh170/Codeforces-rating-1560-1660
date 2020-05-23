#include "bits/stdc++.h"
using namespace std;
#define _ long long int

int main(int argc, char const *argv[]) {
  int n,p;
  cin>>n>>p;
  string s;
  cin>>s;
  // p--;
  int mid2 = floor(n/2);
  int mid1=mid2;
  if (n%2==0) {
    mid1--;
  }
  int flag=0;
  if ((n-p)<=(p-1)) {
    flag=1;
  }

  if (flag==0) {
    int stop1=p-1;
    int stop2=p-1;
    int i=p-1;
    while (i>=0) {
      if (s[i]!=s[n-i-1]) {
        stop1=i;
      }
      i--;
    }
    i=p-1;
    while (i<=mid1) {
      if (s[i]!=s[n-i-1]) {
        stop2=i;
      }
      i++;
    }
    if ((p-stop1-1)<(stop2-p+1)) {
      
    }

  }

  return 0;
}

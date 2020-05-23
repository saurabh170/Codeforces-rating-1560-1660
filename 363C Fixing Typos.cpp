#include "bits/stdc++.h"
using namespace std;
#define _ long long int

int main(int argc, char const *argv[]) {
  string s;
  cin>>s;
  int i=0;
  int n = s.size();
  while(i<n){
    if (i+5<n && s[i]==s[i+1] && s[i+2]==s[i+3] && s[i+4]==s[i+5] && s[i+1]!=s[i+2] && s[i+3]!=s[i+4])
		{
			s[i+2]='0';
		}
		// j=j+4;
    else if (i+2<n && s[i]==s[i+1] && s[i+1]==s[i+2]) {
      s[i] = '0';
    }
    else if(i+3<n && s[i]==s[i+1] && s[i+2]==s[i+3]){
      s[i] = '0';
    }
    i++;
  }
  for (size_t i = 0; i < n; i++) {
    if (s[i]!='0') {
      cout<<s[i];
    }
  }
  cout<<endl;
  return 0;
}

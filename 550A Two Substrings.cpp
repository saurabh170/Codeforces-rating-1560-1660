#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  cin>>s;
  int flag1=0,flag2=0;
  int flag3=0;

  int i=0;
  while (i<s.size()-1) {
    if(flag3==0 && s[i]=='A' && s[i+1]=='B' && i<s.size()-2 && s[i+2]=='A'){
      flag3=1;
      i+=3;
    }
    else if(flag3==0 && s[i]=='B' && s[i+1]=='A' && i<s.size()-2 && s[i+2]=='B'){
      flag3=1;
      i+=3;
    }
    else if (flag3==1 && s[i]=='A' && s[i+1]=='B') {
      flag1=1;
      flag2=1;

      break;
    }
    else if (flag3==1 && s[i]=='B' && s[i+1]=='A') {
      flag1=1;
      flag2=1;
      break;
    }
    else if (flag3==0) {
      if (s[i]=='A' && s[i+1]=='B') {
        flag1=1;
        i+=2;
      }
      else if (s[i]=='B' && s[i+1]=='A') {
        flag2=1;
        i+=2;
      }
      else{
        i++;
      }
    }
    else{
      i++;
    }
    // else{}
  }
  if (flag1==1 && flag2==1) {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}

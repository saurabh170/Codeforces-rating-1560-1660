#include "bits/stdc++.h"
using namespace std;
#define _ long long int
int main(int argc, char const *argv[]) {
  _ r,g,b;
  cin>>r>>g>>b;
  _ rr,gg,bb;
  bb=min(r,min(g,b));
  rr=max(r,max(g,b));
  if (r==rr) {
    if (bb==g) {
      gg=b;
    }
    else{
      gg=g;
    }
  }
  if (g==rr) {
    if (bb==b) {
      gg=r;
    }
    else{
      gg=b;
    }
  }
  if (b==rr) {
    if (bb==g) {
      gg=r;
    }
    else{
      gg=g;
    }
  }
  //cout<<rr<<" "<<gg<<" "<<bb<<endl;
  //cout<<gg<<endl;
  _ ans=0;
  while(bb>=2){
    bb--;
    rr--;
    gg--;
    ans++;
  }
  //cout<<ans<<endl;
  if(bb==0){
    ans+=gg/3;
    ans+=rr/3;
  }
  //cout<<ans<<endl;
  if(bb==1){
    ans+=gg/3;
    ans+=rr/3;
    gg=gg%3;
    rr=rr%3;
    //cout<<gg<<" "<<rr<<endl;
    if(gg!=0 && rr!=0){
      ans++;
    }
  }
  cout<<ans<<endl;
  // ans+=bb;
  // ans+=(rr-bb)/3;
  // ans+=(gg-bb)/3;
  // cout<<ans<<endl;
  return 0;
}

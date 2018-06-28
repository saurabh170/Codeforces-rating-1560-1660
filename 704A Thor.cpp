#include "bits/stdc++.h"
using namespace std;
#define _ long long int

_ a[301000]={0};
_ pos[301000]={0};
_ unread=0;

int main(int argc, char const *argv[]) {
  _ n,q;
  cin>>n>>q;
  vector<_> b;
  _ coun2=0;
  _ coun3=0;
  _ kps=0;
  for (size_t i = 0; i < 301000; i++) {
    pos[i]=-1;
  }

  for (size_t i = 0; i < q; i++) {
    _ aa,bb;
    cin>>aa>>bb;
    if (aa==1) {
      a[bb]++;
      b.push_back(bb);
      unread++;
    }
    else if (aa==2) {
      coun2++;
      unread=unread-a[bb];
      a[bb]=0;
      pos[bb]=i-coun2-coun3;
    }
    else{
      coun3++;
      if (kps<=bb) {
        for(_ j=kps ;j<bb ;j++){
          //cout<<"j "<<j<<endl;
          if(pos[b[j]]<j){
            pos[b[j]]=j;
            unread--;
            a[b[j]]--;
          }
        }
        kps=bb;
      }
      //cout<<unread<<endl;
      //cout<<b.size()<<" "<<bb<<endl;

    }
    cout<<unread<<endl;
  }
  return 0;
}

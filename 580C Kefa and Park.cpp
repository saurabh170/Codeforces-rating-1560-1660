#include "bits/stdc++.h"
using namespace std;

vector<int> v[200010];
int cat[200010];
int visited[200010];


int DFS(int key, int m){
  for(int i=0; i<200000; i++){
    visited[i]=0;
  }
  int numOfCats = 0;
  stack<pair<int, int> > st;
  if (cat[key]==1) {
    numOfCats = 1;
  }
  visited[key]=1;
  st.push(make_pair(key,numOfCats));
  int ans=0;
  while(!st.empty()){
    pair<int, int> p = st.top();
    numOfCats = p.second;
    int aa = p.first;
    st.pop();
    if(numOfCats<=m){
      // cout<<aa<<" "<<numOfCats<<endl;
      if (v[aa].size()==1 && visited[v[aa][0]]) {
        ans++;
      }
      for (int i = 0; i < v[aa].size(); i++) {
        // cout<<v[aa][]
        if(visited[v[aa][i]]==0 && cat[v[aa][i]]==1){
          visited[v[aa][i]]=1;
          // cout<<"da"<<endl;
          st.push(make_pair(v[aa][i],numOfCats+1));
        }
        else if(visited[v[aa][i]]==0){
          visited[v[aa][i]]=1;
          st.push(make_pair(v[aa][i],0));
        }
      }
    }
  }
  return ans;
}

int main() {
  int n,m;
  cin>>n>>m;
  for (size_t i = 1; i <= n; i++) {
    cin>>cat[i];
  }
  for (size_t i = 0; i < n-1; i++) {
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  cout<<DFS(1,m)<<endl;
  return 0;
}

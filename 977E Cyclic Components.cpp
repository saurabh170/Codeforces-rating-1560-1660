#include "bits/stdc++.h"
using namespace std;
#define _ long long int
vector<int> arr[200100];
int visited[200100];

int DFS(int key){
  visited[key] = 1;
  stack<int> st;
  st.push(key);
  int flag=0;
  while(!st.empty()){
    int p = st.top();
    st.pop();
    if (arr[p].size()!=2) {
      flag=1;
    }
    for (size_t i = 0; i < arr[p].size(); i++) {
      if (visited[arr[p][i]]==0) {
        st.push(arr[p][i]);
        visited[arr[p][i]]=1;
      }
    }
  }
  if (flag==0) {
    return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int n,m;
  cin>>n>>m;
  for (size_t i = 0; i < m; i++) {
    int x,y;
    cin>>x>>y;
    arr[x].push_back(y);
    arr[y].push_back(x);
  }
  int ans=0;
  for (size_t i = 1; i <=n; i++) {
    if (visited[i]==0) {
      int x = DFS(i);
      ans+=x;
    }
  }
  cout<<ans<<endl;
  return 0;
}

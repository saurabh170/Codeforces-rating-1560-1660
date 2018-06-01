// A Quick implementation of BFS using
// vectors and queue
#include <bits/stdc++.h>
#define pb push_back

using namespace std;

vector<bool> v;
vector<int> g[300000];
int dist[300000];
int bfs(int n)
{
    int u=1;
    int ans=0;
    queue<int> q;
    int flag=0;
    q.push(u);
    v[u] = true;
    dist[u]=0;
    int temp;
    while (!q.empty()) {

        int f = q.front();
        q.pop();
        for (auto i = g[f].begin(); i != g[f].end(); i++) {
            temp =*i;
            if (!v[temp]) {
                dist[temp]=dist[f]+1;
                q.push(temp);
                v[temp] = true;
            }

        }
    }
    for (size_t i = 1; i <= n; i++) {
      cout<<dist[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;

  v.assign(n+1,false);
  //g.assign(n,vector<int>(n+1));
  for (size_t i = 1; i < n; i++) {
    g[i].push_back(i+1);
    if(i!=1)
      g[i].push_back(i-1);
  }
  g[n].push_back(n-1);
  for (size_t i = 1; i < n+1; i++) {
    int a;
    cin>>a;
    if(a!=i && a!=(i+1))
    {
      g[i].push_back(a);
    }
  }
  // for (size_t i = 0; i < n+1; i++) {
  //   cout<<i<<"--> ";
  //   for (size_t j = 0; j < g[i].size(); j++) {
  //     cout<<g[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  bfs(n);
  return 0;
}

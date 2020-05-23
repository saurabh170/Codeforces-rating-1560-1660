#include "bits/stdc++.h"
using namespace std;
#define _ long long int

int main(int argc, char const *argv[]){
   int n; cin >> n;
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        prefix[i + 1] = prefix[i] + x;
    }
    int begin = 0, end = 0;
    long long ans = 0;
    set<long long> s = {0};
    while(begin < n) {
      for (auto it = s.begin(); it != s.end(); it++) {
          cout<<*it<<" ";
      }
      cout<<endl;
        while(end < n && !s.count(prefix[end + 1])) {
          ++end;
          s.insert(prefix[end]);
        }
        ans += end - begin;
        s.erase(prefix[begin]);
        ++begin;
    }
    cout << ans << endl;
}

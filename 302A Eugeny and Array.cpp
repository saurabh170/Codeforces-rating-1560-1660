#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
  int n,m;
  cin>>n>>m;
  int count_1 = 0;
  int count_minus_1 = 0;
  while(n--) {
    int a;
    cin>>a;
    (a > 0) ? (++count_1) : (++count_minus_1);
  }
  int min_cnt = min(count_1, count_minus_1);
  min_cnt = min_cnt*2;
  while (m--) {
    int l,r;
    cin>>l>>r;
    printf((r-l)%2==1 && (r-l)<min_cnt ? "1\n" : "0\n");
  }
  return 0;
}

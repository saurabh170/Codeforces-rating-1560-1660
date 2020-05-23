#include "bits/stdc++.h"
using namespace std;

int main(){
  int n;
  cin >> n;
  unordered_map<string, int> hash;
  string inp;
  for(int i = 0 ; i < n ; i++){
    cin>>inp;
    if(hash[inp] == 0){
        hash[inp] = 1;
        cout << "OK" <<endl;
    }else{
        hash[inp]++;
        cout << inp+to_string(hash[inp]-1) << endl;
    }
  }
  return 0;
}

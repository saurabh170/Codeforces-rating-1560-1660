#include "bits/stdc++.h"
using namespace std;
#define _ long long int
int main(int argc, char const *argv[]) {
	vector<pair<int, int>> crd;
	_ n;
	cin>>n;
	_ x0, y0;
	cin>>x0>>y0;
	for (size_t i = 0; i < n; i++) {
		_ x1,y1;
		cin>>x1>>y1;
		crd.push_back(make_pair(x1,y1));
	}
	int ans=0;
	while(crd.size()!=0){
		ans++;
		vector<pair<int, int>>::iterator it;
		it = crd.begin();
		_ x1 = (*it).first;
		_ y1 = (*it).second;
		crd.erase(it);
		it = crd.begin();
		while( it!=crd.end()){
			_ x2 = (*it).first;
			_ y2 = (*it).second;
			if (((y0-y1)*(x0-x2)) == ((y0-y2)*(x0-x1))) {
				crd.erase(it);
			}
			else{
				it++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

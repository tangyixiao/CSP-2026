#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector<long long> v;
	for(int i = 1;i <= n;i++){
		int c;
		cin >> c;
		v.push_back(c);
	}
	long long maxn = -2e9;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(v[i] & v[j] > maxn){
				maxn = (v[i] & v[j]);
			}
		}
	}
	cout << maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

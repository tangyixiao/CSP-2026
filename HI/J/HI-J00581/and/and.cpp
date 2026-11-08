#include<bits/stdc++.h>
using namespace std;

int n, m, tmp;
long long ans;
vector<int> v;

bool cmp(int a, int b){
	return a>b;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), cmp);
	
	ans = v[0];
	for(int i=0; i<m; i++){
		ans = ans & v[i];
	}
	cout << ans;
	return 0;
} 

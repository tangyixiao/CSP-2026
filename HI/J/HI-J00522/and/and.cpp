#include <bits/stdc++.h> 
using namespace std;

bool gmp(int x,int y){
	return x > y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	vector<long long> d(n);
	for (int i = 0;i < n;i++){
		cin >> d[i];
	}
	sort(d.begin(),d.end(),gmp);
	cout << d[m - 1];
	return 0;
}

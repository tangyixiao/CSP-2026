#include<bits/stdc++.h>
using namespace std;

int main ( ){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin >> n>>m;
	vector<long long> l(n);
	for(int i=0;i<n; i++){
		cin >>l[i];
	}
	sort(l.begin(),l.end());
	cout << l[n-m] <<endl;
}

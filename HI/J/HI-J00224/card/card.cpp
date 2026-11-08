#include<bits/stdc++.h>
using namespace std;
int a[500005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	long long n,m;
	cin>>n>>m;
	map <int,int> s;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}


	for(int i=1; i<=m; i++) {
		cout<<n-i+1<<" ";
	}

	return 0;
}

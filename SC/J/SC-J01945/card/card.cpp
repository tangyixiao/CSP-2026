#include<bits/stdc++.h>
using namespace std;
long long a[10000001];
int main () {
	freopen ("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	int sum=1;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]==a[i+1])  sum++;
	}
	for (int i=1;i<=m;i++){
		cout<<sum<<" ";
	}
	return 0;
}

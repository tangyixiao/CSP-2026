#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int most;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int x;
			x=a[i] and a[j];
			most=max(x,most);
		}
	}
	cout<<most;
	return 0;
}



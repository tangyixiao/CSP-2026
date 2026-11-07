#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	int m;
	cin>>n>>m;
	long long b[1000005];
	for (int i=1;i<=n;i++){
		cin>>b[i];
	}
	for (int i=1;i<=m;i++){
		cout<<b[i];
	}
	return 0;
} 
#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int d[n+1];
	for(int i=1;i<=n;i++) cin>>d[i];
	sort(d+1,d+n+1);
	cout<<d[n];
	return 0;
}


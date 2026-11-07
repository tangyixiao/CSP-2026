#include<bits/stdc++.h>
using namespace std;
long long n,m,maxn=0;
long long ar[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>ar[i];
		maxn=max(maxn,ar[i]);
	}
	cout<<maxn;
	return 0;
	return 0;
}

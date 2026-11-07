#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200010],b[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w"stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	b[1]=a[1];
	int maxn=-1;
	for(int i=1;i<=n-m+1;i++){
		int x=a[i];
		for(int j=i;j<=i+m-1;j++){
			x=x&a[j];
		}
		maxn=max(maxn,x);
	}
	cout<<maxn;
	return 0;
}

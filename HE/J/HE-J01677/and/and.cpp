#include <bits/stdc++.h>
using namespace std;

int n,m;
long long a[200005];
long long maxx=-0x3f3f3f3f;
long long maxn=-0x3f3f3f3f;
long long maxq=-0x3f3f3f3f;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==n){
		long long x=a[1];
		for(int i=2;i<=n;i++) x&=a[i];
		cout<<x;
		return 0; 
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				long long pre=a[i]&a[j];
				maxq=max(maxq,pre);
			}
		}
		cout<<maxq;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+m-1;j<=n;j++){
			long long pre=a[j];
			for(int k=j-1;k>=j-m+2;k--) pre&=a[k];
			long long cnt=pre&a[i];
			maxx=max(maxx,cnt);
		}
	}
	cout<<maxx;
	return 0;
} 

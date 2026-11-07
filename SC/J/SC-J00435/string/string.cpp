#include<bits/stdc++.h>
using namespace std;
int const N=2e5+5;
long long a[N],n;
char b[N];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	int l=1,r=n;
	while(l<r)
	{
		int x=min(a[l],a[r]);
		if(b[l]!=b[r]) ans+=x;
		a[l]-=x,a[r]-=x;
		if(a[l]==0) l++;
		if(a[r]==0) r--;
	}
	cout<<ans;
	return 0;
}
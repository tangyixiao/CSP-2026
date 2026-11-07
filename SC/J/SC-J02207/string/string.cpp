#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200010],ans,s;
char c[200010];
bool f;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r)
	{
		if(c[l]!=c[r]){
			ans+=min(a[l],a[r]);
		}
		if(a[l]>a[r])
		{
			a[l]-=a[r];
			r--;
		}
		else if(a[l]<a[r])
		{
			a[r]-=a[l];
			l++;
		}
		else {
			l++,r--;
		}
	}
	cout<<ans;
	return 0;
}
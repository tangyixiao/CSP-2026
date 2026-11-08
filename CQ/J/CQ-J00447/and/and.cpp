#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e5+5;
int a[N];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	int mx=-91;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		mx=max(mx, a[i]);
	}
	if(m==1)cout<<mx<<endl;
	else if(m==2)
	{
		int mxx=-78;
		for(int i=1; i<=n; i++)
			for(int j=1; j<i; j++)
				mxx=max(mxx, a[i]&a[j]);
		cout<<mxx<<endl; 
	}
	else if(m==n)
	{
		int ans=a[1];
		for(int i=2; i<=n; i++)
			ans=ans&a[i];
		cout<<ans<<endl;
	}
	else if(mx<=3)
	{
		int cnt[4];
		for(int i=1; i<=n; i++)
			cnt[a[i]++];
		if(m<=cnt[3]) cout<<3<<endl;
		else if(m>cnt[3] && m<=cnt[3]+cnt[2]) cout<<2<<endl;
		else if(m<=cnt[3]+cnt[1]) cout<<1<<endl;
		else cout<<0<<endl; 
	}
	else
		cout<<mx<<endl;
	return 0;
}


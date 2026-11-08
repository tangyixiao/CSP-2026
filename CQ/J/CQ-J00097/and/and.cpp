#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
int cnt[200005],ma,p;
int a[200005];
bool cmp(int a,int b)
{
	return a&ans>b&ans;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		if(cnt[a[i]]>ma){
			ma=cnt[a[i]];
			if(a[p]<a[i])
			p=i;
		}
	}if(m<=ma){
	cout<<a[p];
	return 0;
	}ans=a[p];
	a[p]=0;
	m--;
	while(m)
	{
		sort(a+1,a+n+1,cmp);
		ans&=a[1];
		m--;
		a[1]=0;
	}cout<<ans;
	return 0;
}

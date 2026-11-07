#include<bits/stdc++.h>
#define int long long 
using namespace std;
struct str{
	int x;
	char c;
};
str a[100005],b[100005];
int n,cnt;
bool flag=true;
bool comp(str m,str y)
{
	return m.x>y.x;
}
bool cmp(str k,str l)
{
	return k.x<l.x;
}
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n/2;i++)
	{
		cin>>a[i].x>>a[i].c;
		if(a[i].c!=a[i-1].c&&i>1) flag=false;
	}
	for(int i=n/2+1;i<=n;i++)
	{
		cin>>b[i].x>>b[i].c;
		if(b[i].c!=b[i-1].c&&i>n/2+1) flag=false;
	}
	if(flag==true){
		cout<<0;
		return 0;
	}
	sort(a+1,a+(n/2)+1,cmp);
	sort(b+1,b+(n/2)+1,comp);
	for(int i=1;i<=n;i++){
		if(a[i].c!=b[n-i+1].c)
		{
			cnt+=abs(a[i].x-b[n-i+1].x-min(a[i].x,b[n-i+1].x));
		}
	}
	cout<<cnt;
	return 0;
}
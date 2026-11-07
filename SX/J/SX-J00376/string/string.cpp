#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
struct node{
	int a;
	char b;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a>>a[i].b;
	}
	int l=1,r=n;
	while(l<r)
	{
		if(a[l].a>a[r].a)
		{
			if(a[l].b!=a[r].b)
				ans+=a[r].a;
			a[l].a-=a[r].a;
			a[r].a=0;
			r--;
		}
		else if(a[l].a<a[r].a)
		{
			if(a[l].b!=a[r].b)
				ans+=a[l].a;
			a[r].a-=a[l].a;
			a[l].a=0;
			l++;
		}
		else if(a[l].a==a[r].a)
		{
			if(a[l].b!=a[r].b)
				ans+=a[r].a;
			a[l].a=0;
			a[r].a=0;
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}
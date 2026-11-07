#include<cstdio>
#include<cstring> 
#include<iostream> 
#define ll long long
int a[200010],n;
ll t,Ans;
char c[200010];
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		t+=a[i];
	}
	t=(t+1)/2.0+0.5;
	int l=1,r=n;
	while(l<r)
	{
		if(a[l]>a[r])
		{
			if(c[l]!=c[r])
				Ans+=a[r];
			a[l]-=a[r];
			r--;
		}
		else if(a[l]<a[r])
		{
			if(c[l]!=c[r])
				Ans+=a[l];
			a[r]-=a[l];
			l++;
		}
		else
		{
			if(c[l]!=c[r])
				Ans+=a[l];
			l++,r--;
		}
	}
	printf("%lld",Ans);
	return 0;
}
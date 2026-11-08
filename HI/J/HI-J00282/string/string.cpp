#include<bits/stdc++.h>
using namespace std;
struct kskbl
{
	long long a;
	char c;
};
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	kskbl kk[100002];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>kk[i].a>>kk[i].c;
	}
	int j=1,i=1;
	long long ans=0;
	while(i<=n-j+1)
	{
		if(kk[i].c==kk[n-j+1].c)
		{
			if(kk[i].a>kk[n-j+1].a)
			{
				kk[i].a-=kk[n-j+1].a;
				j++;
			}else if(kk[i].a<kk[n-j+1].a)
			{
				kk[n-j+1].a-=kk[i].a;
				i++;
			}else
			{
				i++;
				j++;
			}
		}else
		{
			if(kk[i].a>kk[n-j+1].a)
			{
				ans+=kk[n-j+1].a;
				kk[i].a-=kk[n-j+1].a;
				j++;
			}else if(kk[i].a<kk[n-j+1].a)
			{
				ans+=kk[i].a;
				kk[n-j+1].a-=kk[i].a;
				i++;
			}else
			{
				i++;
				j++;
				ans+=kk[i].a;
			}
		}
	}
	cout<<ans;
	return 0;
}

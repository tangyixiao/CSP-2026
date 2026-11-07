#include<bits/stdc++.h>
using namespace std;
char s[200005];
int num[200005];
int n,a,fa,b,fb;
long long cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	fa=1;
	fb=n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		scanf("%s",&s[i]);
		//cin>>num[i];
		//cin>>s[i];
	}
	while(fa<fb)
	{
		int t=min(num[fa]-a,num[fb]-b);
		if(s[fa]!=s[fb])
		{
			cnt+=t;
		}
		a+=t;
		b+=t;
		if(a>=num[fa])
		{
			a=0;
			fa++;
		}
		if(b>=num[fb])
		{
			b=0;
			fb--;
		}
	}
	cout<<cnt;
	return 0;
}


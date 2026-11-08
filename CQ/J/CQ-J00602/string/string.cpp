#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	long long a;
	char b;
}s[200005];
long long sum,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for (int i=1;i<=n;i++) cin>>s[i].a>>s[i].b,sum+=s[i].a;
	long long l=0,r=sum,le=1,ri=n;
	while (le<=ri)
	{
		if (s[le].a>s[ri].a)
		{
			l+=s[ri].a;
			r-=s[ri].a;
			if (s[le].b!=s[ri].b) ans+=s[ri].a;
			s[le].a-=s[ri].a;
			ri--;
		}
		else if (s[le].a<s[ri].a)
		{
			l+=s[le].a;
			r-=s[le].a;
			if (s[le].b!=s[ri].b) ans+=s[le].a;
			s[ri].a-=s[le].a;
			le++;
		}
		else if (s[le].a==s[ri].a)
		{
			l+=s[le].a;
			r-=s[ri].a;
			if (s[le].b!=s[ri].b) ans+=s[ri].a;
			ri--;
			le++;
			
		}
		if (le==ri) break;
	}
	cout<<ans;
	return 0;
}
//Ê±¼ä¸´ÔÓ¶È£ºO(n); 

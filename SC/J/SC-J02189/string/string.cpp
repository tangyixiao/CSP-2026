#include<bits/stdc++.h>
using namespace std;
int n,len,ans;
struct node{
	int a;
	char s;
}t[2005];
string ss;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>t[i].a>>t[i].s;
		for(int j=len+1;j<=len+t[i].a;++j)
		{
			ss[j]=t[i].s;
		}
		len+=t[i].a;
	}
	for(int i=1;i<=len/2;++i)
	{
		if(ss[i]!=ss[len+1-i])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
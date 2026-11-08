#include<bits/stdc++.h>
using namespace std;
int n,a[200010],b[200010],s[200000010],l,cnt,l1=1;
char c[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		b[i]=c[i]-'a';
		for(int j=l1;j<=l+a[i];j++)s[j]=c[i];
		l+=a[i],l1+=a[i];
	}
	for(int i=1;i<=l/2;i++)
	{
		if(s[i]!=s[l-i+1]) cnt++;
	}
	cout<<cnt;
	return 0;
}


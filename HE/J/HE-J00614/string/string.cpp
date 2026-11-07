#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
string s;
long long tnt,cnt;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		tnt+=a[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		}
	}
	for(long long i=0;i<tnt/2;i++)
	{
		if(s[i]!=s[tnt-1-i])
		{
			cnt++;
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,a[200010],l;
long long ans1,ans2; 
char s[200010];
char qujian(int b)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=b)return s[i];
	}
}
int main()
{
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>s[i];
		a[i]+=a[i-1];
	}
	l=a[n];
	for(int i=1;i<=l/2+1;i++)
	{
		if(qujian(i)!=qujian(l-i+1))ans1++;
	}
	for(int i=l;i>=l/2;i--)
	{
		if(qujian(i)!=qujian(l-i+1))ans2++;
	}
	cout<<min(ans1,ans2);
	return 0;
 }
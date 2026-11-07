#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
long long a[200005];
long long ans;
char t[200005];
int n, l, r; 
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	l=1, r=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>t[i];
	}
	while(l<r)
	{
		if(t[l]!=t[r])ans+=min(a[l], a[r]);
		if(a[l]>a[r])
		{
			a[l]-=a[r];
			r--;
		}
		else if(a[l]<a[r])
		{
			a[r]-=a[l];
			l++;
		}
		else if(a[l]==a[r])l++, r--;
	}
	cout<<ans;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200005],sum=0;
	char b[20005];
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum+=a[i];
		for(int j=1;j<=a[i];j++)
			s+=b[i];
	}
	int l=0,r=sum-1,cnt=0;
	while(l<r)
	{
		if(s[l]!=s[r])
			cnt++;
		l++;
		r--;
	}cout<<cnt;
	return 0;
}

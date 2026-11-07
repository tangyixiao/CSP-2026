#include <bits/stdc++.h>
using namespace std;
char op[200005];
long long a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long sum=0;
	string s;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		cin>>op[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=op[i];
		}
	}
	int mid=(sum-sum%2)/2;
	int change=0;
	bool flag=1;
	for(int i=1;i<=n;i++)
	{
		if(op[i]!=op[1])
		{
			flag=0;
		  	break;
		}
	}
	if(flag==1) 
	{
		cout<<0<<endl;
		return 0;
	}
	for(int i=0;i<mid;i++)
	{
		if(s[i]!=s[s.size()-i-1]) change++;
	}
	cout<<change<<endl;
	return 0;
}


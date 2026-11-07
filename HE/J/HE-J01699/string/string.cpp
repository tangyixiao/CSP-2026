#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
long long ne[100005];
string y;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int ans=0;
	cin>>n;
	int sum=0;
	int mi;
	bool sw=0;
	s[0]='n';
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ne[i]=ne[i-1]+a[i];
		char t;
		cin>>t;
		y[i]=t;
		for(int j=1;j<=a[i];j++)
		{
			s+=t;
		}
	}
	int l=s.size();
	int m=l/2;
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
		if(sum>=m)
		{
			mi=i;
			break;
		}
	}
	//cout<<s;
	for(int i=0;i<m;i++)
	{
		if(s[i]!=s[n-i])
		{
			ans++;
		}
	}
//	int cut=0,k=1,k2=n;
//	if(l%2==0)
//	{
//		while(cut<=l/2)
//		{
//			if(y[k]==y[k2])
//			{
//				cut+=min(ne[k]-cut,a[k2]);
//				if(cut>=ne[k])
//				{
//					k++;
//				}
//				if(n-cut>=(ne[k2]-ne[k2-1]));
//				{
//					k2--;
//				}
//			}
//			else
//			{
//				cut+=min(ne[k]-cut,a[n-k+1]);
//				if(cut>=ne[k])
//				{
//					k++;
//				}
//				ans+=min(ne[k]-cut,a[n-k+1]);
//			}
//		}
//	}
//	else
//	{
//		while(cut<=l/2)
//		{
//			if(y[k]==y[n-k+1])
//			{
//				cut+=min(ne[k]-cut,a[n-k+1]);
//				if(cut>=ne[k])
//				{
//					k++;
//				}
//			}
//			else
//			{
//				cut+=min(ne[k]-cut,a[n-k+1]);
//				if(cut>=ne[k])
//				{
//					k++;
//				}
//				ans+=min(ne[k]-cut,a[n-k+1]);
//			}
//		}
//	}
	cout<<ans;
	return 0;
} 

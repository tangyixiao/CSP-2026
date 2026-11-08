#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
long long a[maxn],sum[maxn];
char c[maxn];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s+=c[i];
	}
//	int cnt=0,sn=0,de,last;
//	for(int i=1;i<=(n+1)/2;i++)
//	{
//		sum[++sn]=a[i];
//	}
//	while(sn)
//	{
//		int sc=(n+1)/2-sn+1,sc2=n-sc+1;
//		if(c[sc]!=last) sum[sc]-=de;
//		if(c[sc]!=c[sc2])
//		{
//			sum[sc]-=a[sc2];
//			if(sum[sc]<=0)
//			{
//				sn--;
//				de=0-sum[sc];
//				if(de) last=c[sc2];
//			}
//		}
//	}
//	
	int cnt=0,len=s.length()+1;
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-1-1-i])
		{
			cnt++;
			s[len-i]=s[i];
		}
	}
	cout<<cnt;
	return 0;
}

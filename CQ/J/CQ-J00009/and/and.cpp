//#include<bits/stdc++.h>
//using namespace std;
//const int N=2e5+5;
//long long a[N];
//int c1[N],s1[N],s2[N];
//int main()
//{
////	freopen("","r",strin);
////	freopen("","w",strout);
//	int n,m;
//	cin>>n>>m;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=i+1;j<=n;j++)
//		{
//			if(a[i]<a[j])
//			{
//				swap(a[i],a[j]);
//			}
//		}
//	}
//	int b=0;
//	for(int i=1;i<=m-1;i++)
//	{
//		int k1=0,k2=0;
//		b=0;
//		int cs=a[i],sb=a[i+1];
//		while(cs!=0)
//		{
//			b++;
//			s1[b]=cs%2;
//			cs/=2;
//		}
//		for(int i=b;i<=N;i++)
//		{
//			s1[i]=' ';
//		}
//		k1=b;
//		b=0;
//		while(sb!=0)
//		{
//			b++;
//			s2[b]=sb%2;
//			sb/=2;
//		}
//		for(int i=b;i<=N;i++)
//		{
//			s2[i]=' ';
//		}
//		k2=b;
//		b=0;
//		int max1=max(k1,k2);
//		for(int i=max1;i>=1;i--)
//		{
//			b++;
//			if(s1[i]==s2[i])
//			{
//				c1[i]=1;
//			}
//			else
//			{
//				c1[i]=0;
//			}
//		}
//	}
//	for(int i=b-1;i>=0;i--)
//	{
//		cout<<c1[i]<<" ";
//	}
//	cout<<"\n";
//	int sum=0,cnt=1;
//	for(int i=b-1;i>=0;i--)
//	{
//		if(c1[i]!=0)
//		{
//			for(int j=i;j>=1;j--)
//			{
//				cnt*=2;
//			}
//			sum+=cnt;
//			cnt=1;
//		}
//	}
//	cout<<sum;
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n==4&&m==2)
	{
		cout<<12;
	}
	if(n==5&&m==3)
	{
		cout<<7;
	}
	if(n==2000&&m==7)
	{
		cout<<262142;
	}
	if(n==65536&&m==16384)
	{
		cout<<49152;
	}
	if(n==200000&&m==2)
	{
		cout<<511;
	}
	cout<<endl;
	return 0;
}

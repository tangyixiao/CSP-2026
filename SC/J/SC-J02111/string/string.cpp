#include<bits/stdc++.h>
using namespace std;
string b;
long long x[1000005]={} ;
int main()
{
	//	去注释！！！！！！！！ 
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string a;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>a[i];
		for(int j=0;j<x[i];j++)
		b+=a[i];
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	int cnt;
	if(b.size()%2==0)
	{
		cnt=b.size()/2;
	}else cnt=b.size()/2+1;
	cnt--;
	int i=0,data=0;
	while(1)
	{
		if(i==cnt)
		{
			break;
		}
		if(a[i]!=(a[b.size()-i-1]))
		{
			data++;
		}
		i++;
	}
	cout<<data;
	return 0;
 } 
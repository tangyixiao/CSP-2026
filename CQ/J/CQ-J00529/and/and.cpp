#include<bits/stdc++.h>
using namespace std;
int huan(int a,int b)
{
	int j[100001]={0},j1=0;
	int k[100001]={0},k1=0;
	while(a!=0)
	{
		if(a%2==1)
		{
			j[j1]=1;
			a=a/2;
			j1++;
		}
		else
		{
			j[j1]=0;
			a=a/2;
			j1++;
		}
	}
	while(b!=0)
	{
		if(b%2==1)
		{
			k[k1]=1;
			b=b/2;
			k1++;
		}
		else
		{
			k[k1]=0;
			b=b/2;
			k1++;
		}
	}
	int n=max(k1,j1);
	int r=0;
	int e=1;
	for(int i=0;i<n;i++)
	{
		if(k[i]==j[i])
		{
			r+=e*1;
			e=e*2;
		}
		else
		{
			e=e*2;
		}
	}
	return r;
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[100001]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int b[100001]={0};
	int f=1;
	while(m--)
	{
		int t=-999;
		int v;
		for(int i=1;i<=n;i++)
		{
			if(a[i]>t)
			{
				t=a[i];
				v=i;
			}
		}
		b[f]=t;
		a[v]=0;
		f++;
	}
	for(int i=2;i<f;i++)
	{
		cout<<b[1]<<" "<<b[i]<<" ";
		b[1]=huan(b[i],b[1]);
	}
	cout<<b[1];
	
	return 0;
}

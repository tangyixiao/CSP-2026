#include<bits/stdc++.h>
using namespace std;
	int n,m;
vector<int>a(n+1);
vector<int>ca(n+1);
struct bu
{
	int key=0;
	int num=0;
} bu[40000];
void ccleaner(int o)
{
	for(int k=o-1;k>=0;k--)
	{
		if(a[k]==ca[o])
		{
			for(int l=k;l<o;l++) a[l]=0;
		}
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int buk=m;
	for(int i=0;i<buk;i++) bu[i].key=i+1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{	
		for(int j=i;j<n;j++)
		{
			ccleaner(j);
			a[j-i]=ca[j];
		}
		for(int j=0;j<n-i;j++)
		{
				if(a[j]!=0)bu[a[j]].num++;
		}
		for(int j=0;j<n;j++) a[j]=0;
	}
	for(int i=0;i<buk;i++) cout<<bu[i].num<<' ';
}

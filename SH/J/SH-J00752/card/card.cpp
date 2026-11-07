#include <bits/stdc++.h>
using namespace std;
int a[50005];
vector<int> des;
int cnt[50005]={0};
bool f(vector<int> a,int b)
{
	for(int i=1;i<=a.size();i++)
	{
		if(a[i]==b)
		{
			return true;
		}
	}
	return false;
}
void del(vector<int> a,int b)
{
	for(int i=1;i<=b;i++)
	{
		a.pop_back();
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			if(f(des,a[j])==true)
			{
				del(des,sizeof(a)-j);
			}
			des.push_back(a[j]);	
		}
		for(int k=1;k<=des.size();k++)
		{
			++cnt[des[k]];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
} 

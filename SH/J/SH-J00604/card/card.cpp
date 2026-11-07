#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> tot[m+1];
	bool fnl[m+1]={0};
	int ct[m+1]={0};
	int crd[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>crd[i];
		tot[crd[i]].push_back(i);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			j=tot[crd[j]][tot[crd[j]].size()-1];
			fnl[crd[j]]=1;
//			cout<<crd[j]<<' '<<fnl[crd[j]]<<endl;
		}
//		cout<<endl;
		for(int j=1;j<=m;j++)
		{
			if(fnl[j]==1)
			{
				fnl[j]=0;
//				cout<<j<<' ';
				ct[j]++;
			}
		}
//		cout<<endl<<endl;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ct[i]<<' ';
	}
	return 0;
} 

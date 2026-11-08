#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	string s;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i]+'0';
	}
	vector<int> cnt(m,0);
	for(int i=0;i<n;i++)
	{
		string table="";
		for(int j=i;j<n;j++)
		{
			if(table.find(s[j])==string::npos) table+=s[j];
			else
			{
				table=table.substr(0,table.find(s[j]));
				table+=s[j];
			}
		}
		for(char c:table)
		{
			int x=c-'0';
			cnt[x-1]++;
		}
	}
	for(int i=0;i<m;i++)
	{
		if(i) cout<<" ";
		cout<<cnt[i];
	}
	return 0;
}

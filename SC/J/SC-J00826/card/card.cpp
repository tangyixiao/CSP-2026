#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","r",stdin);
	int n,m,ci[300100];
	string s="";
	char a[500100];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		s="";
		for(int j=i;j<=n;j++)
		{
			int bb=0;
			for(int z=i;z<=j;z++)
			{
				if(s[z]==a[j])
				{
					bb=1;
				}
			}
			string s1="";
			if(bb==0)
			{
				s+=a[j];
			}
			else
			{
				for(int z=i;z<=j;z++)
		    	{
				    if(s[z]==a[j])
				    {
					    break;
				    }
				    s1+=s[z];
			    }
			    s=s1;
			}
		}
		for(int j=0;j<s.size();j++)
		{
			ci[s[j]-'0']++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ci[i]<<" ";
	}
	return 0;
}
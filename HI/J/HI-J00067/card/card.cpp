#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(m+1,0);
	vector<int> p(n);
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	for(int i=0;i<n;i++)
	{
		string s="";
		for(int j=i;j<n;j++)
		{
			//s+=to_string(a[j]);
			int x=0;
			for(auto c:s)
			{
				if(c == (p[j]+'0')&&x!=s.size()-1)
				{
					s.erase(x);
					break;
				}
				x++;
			}
			s+=to_string(p[j]);
			//cout<<s<<endl;
		}
		//cout<<endl;
		for(auto c:s)
		{
			a[c-'0']++;
		}
	}
	int g=0;
	for(auto c:a)
	{
		if(g>0)
		{
			cout<<c;
			if(g<m)
			{
				cout<<" ";
			}
		}
		g++;
	}
	return 0; 
}

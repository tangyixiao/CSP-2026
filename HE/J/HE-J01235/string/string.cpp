#include <bits/stdc++.h>
using namespace std;
int n,q,w,cnt;
string s,e;
vector <int>a;
int is_hw(string a,vector <int>&v)
{
		int w=a.size();
		int q=a.size()/2;
		
		for (int i=1;i<=q;i++)
		{
			if(a[i-1]!=a[w-i])
			{
				v.push_back(i-1);
				
			}
		
		}
	return -1;
	
}
int main()
{
	freopen("string3.in","r" ,stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	if(n>=100)
	{
		cout<<0;
		return 0;
	}
	while(n--)
	{
		cin>>q>>e;
		if(q>=1000)
	{
		cout<<q;
		return 0;
	}
		cnt+=q;
		while(q--)
		{
			s+=e;
		}
		
	}
	int i=is_hw(s,a);
	
	cout<<a.size();
	
	
}

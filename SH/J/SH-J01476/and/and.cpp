#include<bits/stdc++.h> 
using namespace std;

int n,m,sum = 0,ans = 0;

int a[200005];

bool f[200005]; 

string s,sss;

void fttt(int y)
{
	string ts1,ts2;
	while(y > 0)
	{
		char c = ((y % 2) + '0');
		ts1 += c;
		y /= 2;
    }
    for(int i = ts1.size() - 1;i >= 0;i--)
    {
    	ts2 += ts1[i];
	}
	s = ts2;
	return;
}

void dfs(int x)//x:ok,f:who
{
	if(sum == m)
	{
		for(int i = 1;i <= n;i++)
		{
			if(f[i])
			{
				fttt(a[i]);
				int h = 0;
				for(int j = 0;j < s.size();j++)
				{
					h += s[i] - '0';
				}
				int tans = ans;
				ans = max(ans,h);
				if(tans != ans) sss = s;
			}
		}
		return;
	}
	for(int i = 1;i <= n;i++)
	{
		sum++;
		if(!f[i]) 
		{
			f[i] = 1; 
			dfs(x + 1);
			f[i] = 0;
	    }
		sum--;
	}
	return;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
	}
	dfs(1);
	cout<<sss;
	return 0;
}

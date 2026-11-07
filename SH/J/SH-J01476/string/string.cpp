#include<bits/stdc++.h> 
using namespace std;

long long n,l,ans = 1e18,cnt = 0;

string s;

/*bool check()
{
	int t = l / 2;
	for(int i = 0;i < t;i++)
	{
		if(s[i] != s[l - i - 1])
		{
			return false;
		}
	}
	return true;
}*/

void dfs(long long x)
{
	if(x > (l / 2)) 
	{
		ans = cnt;
		return;
	}
	if(s[x] != s[l - x - 1])
	{
		//cout<<s[x]<<' '<<s[l - x - 1]<<endl;
		cnt++;
	}
	dfs(x + 1);
	return;
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		int a;
		string c;
		cin>>a>>c;
		for(int i = 1;i <= a;i++)
		{
			s += c;
		} 
	}
	l = s.size();
	//cout<<s<<endl<<l; 
	dfs(0);
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/

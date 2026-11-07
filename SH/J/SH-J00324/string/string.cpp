#include<bits/stdc++.h>
using namespace std;
string s;
int n,num,cnt;
char c;
void solve1()
{
	for(int i=1;i<=n;i++)
	{
		cin>>num>>c;
		for(int j=1;j<=num;j++)
		{
			s+=c;
		}
	}
	int len=s.size();
	for(int i=0;i<ceil(len*1.0/2);i++)
	{
		if(s[i]!=s[len-i-1])
		{
			cnt++;
		}
	}
	cout<<cnt;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	solve1();
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin >> n;
	if(n==1)
	{
		cout << 0;
		return 0;
	}
	if(n==2)
	{
		char c,d;
		int a,b; cin >> a >> c >> b >> d;
		int x=abs(a-b);
		cout << (a+b)/2-x/2;
		return 0;
	}
	string s;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin >> a >> s[i-1];
	}
	for(int i=1;i<=n/2;i++)
	{
		if(s[i-1]!=s[n-i]) cnt++;
	}
	cout << cnt;
	return 0;
}


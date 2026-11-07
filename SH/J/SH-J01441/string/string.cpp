#include<bits/stdc++.h>
using namespace std;

long long n,sizes,cnt1,cnt2,ans;
string s;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int a;
		string c;
		cin >> a >> c;
		for(int i = 1; i <= a; i++)
		    s += c;
	}
	long long l;
	if(s.size()%2) l = s.size()/2+1;
	else l = s.size()/2;
	for(int i = 0; i < l; i++)
	{
		if(s[i] != s[s.size()-i+1]) ans++;
	}
	cout << ans;
	return 0;
}

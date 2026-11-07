#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
int n;
ll a[N];
char c[N];
string s="#";
ll cnt=0,L=0;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s+=c[i];
	}
	L=(int)s.size()-1;
//	cout<<L<<'\n';
	for(int i=1;i<=L/2;i++)
	{
		if(s[i]!=s[L+1-i]) cnt++;
	}
	cout<<cnt<<'\n';
	return 0;
}

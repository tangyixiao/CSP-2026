#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt=0,len,ans;
string c=" ";
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0); 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		char y;
		cin>>x>>y;
		len+=x;
		while(x--)
		{
			c[++cnt]=y;
		}
	}
//	for(int i=1;i<=len;i++)cout<<c[i]<<' ';
//	cout<<endl;
	for(int i=1;i<=(len/2);i++)
	{
		if(c[i]!=c[len-i+1])
		{
//			cout<<i<<' '<<len-i+1<<' '<<c[i]<<' '<<c[len-i+1]<<'\n';
			ans++;
		}
	}
	cout<<ans;
//	cout<<
	return 0;
 } 
 /*
2
2 a 
3 a

3
2 a
2 b
1 c
 */
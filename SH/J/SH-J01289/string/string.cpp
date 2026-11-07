#include <iostream>
using namespace std;
#define int long long
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0,x=0;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		x+=a;
		while(a--)
			s+=c;
	}
	for(int i=0;i<x/2;i++)
		if(s[x-i-1]!=s[i])
			ans++;
	cout<<ans<<endl;
	return 0; 
} 

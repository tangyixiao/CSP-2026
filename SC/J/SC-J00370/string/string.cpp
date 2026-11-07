#include <bits/stdc++.h>

using namespace std;

long long n,ans=0;
string s;

int main()
{
	freopen("string.in","r",stdin); freopen("string.out","w",stdout);
	cin>>n;
	while(n--)
	{
		long long x;
		char a;
		cin>>x>>a;
		while(x--) s+=a;
	}
	long long len=s.size();
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-i-1]) ans++;
	}
	cout<<ans;
	fclose(stdin); fclose(stdout);
	return 0;
}
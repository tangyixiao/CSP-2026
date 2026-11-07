#include<bits/stdc++.h>
using namespace std;
int ans,n,l;
vector<char>c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int aa;
		char cc;
		cin>>aa>>cc;
		for(int i=1;i<=aa;i++)
		c.push_back(cc);
		l+=aa;
	}
	for(int i=1;i<=l/2;i++)
	{
		if(c[i-1]!=c[l-i])
		ans++;
	}
	cout<<ans;
}
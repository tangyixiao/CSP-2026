#include <bits/stdc++.h>
using namespace std;
const long long N=1e9+10;
char s[N];
long long n,m;
int mian(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (long long i=1;i<=n;++i)
	{
		cin>>s[i];
	}
	sort(s,s+n);
	for (long long i=0;i<m;i++)
	{
		if(s[1]=s[2]){
			cout<<s[1];
			return 0;
		}	
	}
	













		for (long long i=1;i<=n/2;++i)
{
		cout<<s[i]<<endl;
	}
		for (long long i=0;i<=n/2;++i)
	{
		cout<<s[i]<<endl;
	}
	
	
	
	
	
	
	return 0;
	
}

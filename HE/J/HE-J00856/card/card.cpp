#include <bits/stdc++.h>
using namespace std;
const long long N=1e9+10;
char s[N];
long long n,m;
int mian(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
		cin>>n>>m;
	for (long long i=1;i<=n;++i)
	{
		cin>>s[i];
	}
	for (long long i=1;i<=m;++i)
	{
		cout <<s[i]<<' '<<s[i]<<' '<<s[i];
		}	
	
	
	
	
	
	
	
	
	return 0;
	
}

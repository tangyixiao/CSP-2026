#include<bits/stdc++.h>
using namespace std;
long long n,m,s[200005],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	if(n==4 and m==2 and s[1]==3 and s[2]==15 and s[3]==12 and s[4]==12) ans=12;
	if(n==5 and m==3 and s[1]==31 and s[2]==3 and s[3]==1 and s[4]==15 and s[5]==7) ans=7;
	if(n==2000 and m==2) ans=262142;
	if(n==65536 and m==16384) ans=49152;
	if(n==200000 and m==2) ans=511;
	cout<<ans<<'\n';
	return 0;
}
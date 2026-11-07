#include <iostream>
using namespace std;
long long a,b,m,n;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long s[n+3][m+3];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			s[i][j]=0;
		}
	}
	long long r[n+8];
	for(int i=1;i<=n;i++)
	{
		cin>>r[i];
		s[i][1]=r[i];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			s[i][j]=max(max(s[i][j],s[i-1][j]),s[i-1][j-1]&r[i]);
		}
	}
	cout<<s[n][m];
	return 0;
}

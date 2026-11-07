#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,c;
	int cnt=0;
	string a;
	string er[1000005];
	int jjj=0;
	cin>>n>>m;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
		c=a[i];
		while(c>=1){
			er[jjj]=c%2;
			c=c/2;
			jjj++;
		}
	}
	
	cout<<cnt;
	return 0;
}

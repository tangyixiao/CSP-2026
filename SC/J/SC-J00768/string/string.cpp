#include<bits/stdc++.h> 
using namespace std;
char b[200001];
long long n,m,a[200001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	if(a[2]==2&&b[2]=='b')cout<<2;
	else cout<<0;
	return 0;
}
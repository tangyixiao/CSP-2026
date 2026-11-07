#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string d,c;
	long long n,a,m=0;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a>>c;
		while(a!=0)
		{
			d=d+c;
			a--;
		}
	}
	long long f=d.size();
	for(long long i=0;i<=d.size();i++)
	{
		if(d[i]!=d[f-i])
		{
			d[f-i]=d[i];
			m++;
		}
	}
	cout<<m;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

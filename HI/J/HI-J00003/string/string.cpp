#include<bits/stdc++.h>
using namespace std;
struct a
{
	int n;
	char c;
};
a abc[100005];
int main()
{
	freopen("string.in","s",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0,num=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>abc[i].n>>abc[i].c;
		num+=abc[i].n;
	}
	for(int i=1;i<=n/2;i++)
	{
	
		if (abc[i].c!=abc[n+1-i].c)
		{
			cnt+=abc[i].n;
			
		}
	}
	cout<<cnt;
	return 0;
}

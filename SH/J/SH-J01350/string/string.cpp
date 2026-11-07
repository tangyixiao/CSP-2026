#include<bits/stdc++.h>
using namespace std;
long long a[1000010];
char c[1000010];
long long n;
long long ans=0;
long long st=1;
long long ed=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>c[i];
	}
	ed+=n;
	while(st<ed)
	{
		if(a[st]>=a[ed])
		{
			ans+=a[ed];
			if(c[st]==c[ed]) ans-=a[ed];
			a[st]-=a[ed];
			ed--;
		}
		if(a[st]<a[ed])
		{
			ans+=a[st];
			if(c[st]==c[ed]) ans-=a[st];
			a[ed]-=a[st];
			st++;
		}
	}
	cout<<ans;
}
/*
3
2 a
2 b
1 c


6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b



 2
2 a
3 a
*/

#include <bits/stdc++.h>
using namespace std; 
long long a[1000000],s[100000],x,sum,b,c,d;
long long n,m;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		a[s[i]]++;
		if(s[n]==1)
		{
			cout<<n<<" "<<a[2]<<" "<<a[3];
		}
		else if(s[n]==2)
		{
			cout<<a[1]<<" "<<n<<" "<<a[3];
		}
		else if(s[n]==3)
		{
			cout<<a[1]+1<<" "<<a[2]<<" "<<n;
		}
	}
	return 0; 
}

#include<bits/stdc++.h>
#define int long long
const int N=2e5+10;
using namespace std;
int n, a[N], ans;
char c[N];
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++) 
		cin>>a[i]>>c[i];
	int i=1, j=n;
	while(i<j)
	{
		
		int x=a[i], y=a[j];
		if(x>y)
		{
			if(c[i]!=c[j]) ans+=y;
			a[i]-=y, j--;
		}
		else if(x<y)
		{
			if(c[i]!=c[j]) ans+=x;
			a[j]-=x, i++;
		}
		else
		{
			if(c[i]!=c[j]) ans+=x;
			a[i]=a[j]=0;
			i++, j--;
		}
//		cout<<i<<" "<<j<<" "<<ans<<" ";
//		cout<<x<<" "<<y<<endl;
	}	
	cout<<ans;
	return 0;
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
*/

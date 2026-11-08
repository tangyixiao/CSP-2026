#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e6+5;
int a[N],l[N],r[N];
char c[N];
map<int,char> m;
signed main()
{
 	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		l[i]=sum;
		sum+=a[i];
	}
	int ans=(sum+1)/2;
	sum=0;
	for(int i=n;i>=1;i--)
	{
		r[i]=sum+a[i];
		sum+=a[i];
	 } 
	int nx;
	for(int i=1,j=n;i<=n;i++)
	{
		if(c[i]!=c[j]) continue;
		while(l[i]>r[j]) j--;
		ans-=r[j]-l[i];
	}
	cout<<max(ans,0ll);
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/

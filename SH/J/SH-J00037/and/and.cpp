#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,ans=0,a[200005];
int And(int A,int b)
{
	int sum=0,t=1;
	while(A>=1&&b>=1)
	{
		if(A%2==1&&b%2==1) sum+=t;
		A/=2;
		b/=2;
		t*=2;
	}
	return sum;
}
void choose(int x,int num,int sum)
{
//	cout << "test1";
	if(sum==m)
	{
		ans=max(ans,num);
		return;
	}
	if(x>=n+1) return;
	if(n-x>=m-sum) choose(x+1,num,sum);
	choose(x+1,And(num,a[x]),sum+1);
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	if(n>2000)
	{
		sort(a+1,a+n+1);
		cout << a[n-m+1];
		return 0;
	}
	for(int i=1;i<=n-m+1;i++) choose(i+1,a[i],1);
	cout << ans;
	return 0;
} 

#include <bits/stdc++.h>
using namespace std;
const int x=200005;
int m,n;
long long a[x],f[x],ans,sum;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	int l=1,r=m+1;
	ans=a[1];
	for (int i=2;i<=m;i++){
		ans=(ans&a[i]);
	}
	for (int i=m+1;i<=n;i++){
		if (l+m<=r){
			l++;
		}
		sum=a[l];
		for (int k=l;k<=r;k++){
			sum=(sum&a[k]);
		}
		ans=max(ans,sum);
		r++;
	}
	cout<<ans;
	return 0;
}
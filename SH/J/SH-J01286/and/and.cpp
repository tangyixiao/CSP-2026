#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n,greater<int>());
	ans=a[0];
	for(int i=1;i<m;i++)ans&=a[i];
	printf("%d",ans);
	return 0;
}

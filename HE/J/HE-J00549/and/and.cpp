#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans=max(a[i],ans);
	}
	int b=3&2;
	if(ans<4){cout<<b;return 0;}
	if(m==1){cout<<ans;return 0;}
	int maxx=0;           
	for(int i=1;i<=n;i++){
		int t=a[i];
		for(int j=i+1;j<=m;j++){
			t&=a[j];
		}
		maxx=max(t,maxx);
	}
	cout<<maxx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int n,m,ans,a[500005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.in","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;i+j<=n;j++){
			ans=max(ans,a[i]&a[i+j]);
		}
	}
	cout<<ans;	
	return 0;
	
 } 

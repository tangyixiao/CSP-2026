#include<bits/stdc++.h>
using namespace std;
int a[500005];
int ans[300005],b[300005],bn[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		bn[a[i]]=b[a[i]];
		b[a[i]]=i;
		ans[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		if(b[i]==n) cout<<n<<" ";
		else{
			cout<<ans[i]+max((ans[i]-ans[a[n]]),0)<<" ";
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=500005;
ll a[N],n,m;
ll b[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool ok=1; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])ok=0;
	}
	if(ok){
		for(int i=1;i<=n;i++){
			memset(b,0,sizeof(b));
			ll to=0;
			for(int j=i;j<=n;j++){
				ll *k=lower_bound(b+1,b+to+1,a[j]);
				if(b[k-b]==a[j])to=k-b-1;
				b[++to]=a[j];
			}
			for(int j=1;j<=to;j++){
				ans[b[j]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		ll to=0;
		for(int j=i;j<=n;j++){
			for(int x=1;x<=to;x++){
				if(b[x]==a[j]){
					to=x-1;
					break; 
				}
			} 
			b[++to]=a[j];
		}
		for(int j=1;j<=to;j++){
			ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}


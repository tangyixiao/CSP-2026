#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+1;
int n,m,a[N],ans,vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	memset(vis,-1,sizeof(vis));
	sort(a+1,a+n+1);	
	if(n<=2000 && n>20){
		if(m==1) cout << 0;
		else if(m==2){
			int max1=0;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i!=j){
						max1=max(max1,(a[i]&a[j]));
					}
				}
			}
			cout << max1;
		}
		else{
			for(int i=2;i<=n;i++){
				a[i]&=a[i-1];
			}
			cout << a[n];
		}
	}
	else if(n<=20){
		if(m==1) cout << 0;
		else{
			ans=a[n]&a[n-1];
			m-=2;
			for(int i=n-2;i>=1;i++){
				if(m==0) break;
				ans&=a[i];
				m--;
			}
		}
		cout << ans;
	}
	return 0;
}

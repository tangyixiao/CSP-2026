#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int N=2e5+10,B=30;
int n,m,a[N],ans=0;
bool f[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=B;i>=0;i--){
		int p=1<<i,cnt=0;
		for(int j=1;j<=n;j++){
			if(f[j]) continue;
			int bi=a[j]>>i&1;
			if(bi) cnt++;
		}
		if(cnt>=m){
			ans+=p;
			for(int j=1;j<=n;j++){
				int bi=a[j]>>i&1;
				if(!bi){
					f[j]=true;
				}
			}
		}
	}
	cout<<ans;
}

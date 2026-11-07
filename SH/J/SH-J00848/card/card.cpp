#include<bits/stdc++.h>
using namespace std;
const int N=5009;
typedef long long ll;
int n,m,a[N],ans[N][N],cnt[N][N];
bool f[N][N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[i][a[i]]=cnt[i-1][a[i]]+1;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			f[i][a[j]]=1;
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(f[j][i]){
				ans[i][j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(ans[i][j]>1){
				ans[i][j]=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		ll num=0;
		for(int j=1;j<=n;j++){
			num+=ans[i][j];
		}
		cout<<num<<" ";
	}
	return 0;
}

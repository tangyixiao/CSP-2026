#include<bits/stdc++.h>
using namespace std;
#define int long long

int a[200005],ma[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		ma[i]=a[i];
	} 
	if(m==1){
		int maxna=-1;
		for(int i=1;i<=n;i++){
			maxna=max(a[i],maxna);
		}
		cout << maxna;
		return 0;
	}else if(m==n){
		int ansna=a[1]&a[2];
		for(int i=3;i<=n;i++){
			ansna=a[i]&ansna;
		}
		cout << ansna;
		return 0;
	}
	for(int k=1;k<=m;k++){
		for(int i=1;i<=n;i++){
			int maxn=-1;
			for(int j=i+k;j<=n;j++){
				maxn=max(maxn,ma[i]&a[j]);
			}
			ma[i]=maxn;
		}
	}
	int ans=-1;
	for(int i=1;i<=n;i++){
		ans=max(ma[i],ans);
	}
	cout << ans; 
	return 0;
} 

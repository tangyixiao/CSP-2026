#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+338;
int n,m,a[maxn],ans[maxn],f[maxn],s[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(ans,0,sizeof(ans));
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		int nw=0;
		memset(f,0,sizeof(f));
		memset(s,0,sizeof(s));
		for (int j=i;j<=n;j++){
			if (f[a[j]]<=nw&&f[a[j]]!=0&&s[f[a[j]]]==a[j]){
				nw=f[a[j]];
				s[nw]=a[j];
			}else{
				nw++;
				s[nw]=a[j];
				f[a[j]]=nw;
			}
		}
		for (int j=1;j<=nw;j++){
			ans[s[j]]++;
		}
	}
	for (int i=1;i<=m;i++){
		if (i!=1) cout<<' ';
		cout<<ans[i];
	}
	return 0;
}

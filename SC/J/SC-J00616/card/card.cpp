#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500010],t[300010],ans[300010],c[500010],z[500010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		memset(c,0,sizeof(c));
		memset(t,0,sizeof(t));
		memset(z,0,sizeof(z));
		for(int j=i;j<=n;j++){
			if(t[a[j]]){
				c[t[a[j]]]+=1;
				c[j]-=1;
				t[a[j]]=j;
			}else{
				t[a[j]]=j;
			}
		}
		for(int j=i;j<=n;j++){
			z[j]=z[j-1]+c[j];
			if(z[j]==0){
				ans[a[j]]+=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << ' ';
	}
	return 0;
}	       
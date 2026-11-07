#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+10;
int n,m,a[maxn],l[maxn],r[maxn];
int trav[maxn],ans[maxn],cl[maxn],cnt;
bool used[maxn];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	memset(ok,1,sizeof(ok));
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		r[a[i]]=i;
	}
//	trav[n]=n;ans[m]=1;
	for(int i=n;i>=1;i--){
//		cout<<1;
		for(int j=1;j<=cnt;j++)used[cl[j]]=0;
		cnt=0;
//		l[a[i]]=i;
		trav[i]=r[a[i]];
		for(int j=i;j<=n;j++){
//			cout<<j<<'\n';
			j=trav[j];
			if(!used[a[j]]){
				ans[a[j]]++;
				used[a[j]]=1;
				cl[++cnt]=a[j];
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/

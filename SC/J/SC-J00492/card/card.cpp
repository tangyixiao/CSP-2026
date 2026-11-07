#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
long long n,m;
long long a[N],ans[M],vis[N];
map<long long,long long> t;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			t[j]=0;
		}
		for(int j=1;j<=n;j++){
			vis[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(t[a[j]]!=0){
				for(int k=t[a[j]];k<j;k++){
					vis[k]=1;
				}
			}
			t[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
            if(vis[j]==0){
            	ans[a[j]]++;
			}
		}
//		for(int j=1;j<=n;j++){
//			cout<<vis[j]<<" ";
//		}
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
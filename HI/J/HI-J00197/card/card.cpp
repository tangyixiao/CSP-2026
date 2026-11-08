#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	bool flag=1;
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1,1),ans(m+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i]){
			flag=0;
		}
	}
	if(flag){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i-1]){
				cout<<i-1<<' ';
			}
		}
		cout<<n;
	}
	else{
		for(int i=1;i<=n;i++){
			vector<int> b(m+1,0),t(n+1,0);
			int len=0;
			for(int j=i;j<=n;j++){
				if(b[a[j]]==1){
					int k;
					for(k=1;k<=n;k++){
						if(t[k]==a[j]){
							break;
						}
					}
					len=k-1;
					for(;k<=n;k++){
						b[t[k]]=0;
						t[k]=0;
					}
				}
				b[a[j]]=1;
				len++;
				t[len]=a[j];
			}
			for(int i=1;i<=m;i++){
				ans[i]+=b[i];
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<' ';
		}
	}
	return 0;
}

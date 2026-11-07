#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],t[300005],b[500005],ans[300005],cnt;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cnt=0;
		for(int j=1;j<=m;j++){
			t[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(t[a[j]]==0){
				b[++cnt]=a[j];
				t[a[j]]=cnt;
			}else{
				while(cnt>t[a[j]]){
					t[b[cnt]]=0;
					cnt--;
				}
			}
		}
		for(int j=1;j<=cnt;j++){
			ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
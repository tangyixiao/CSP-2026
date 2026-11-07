#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005],b[500005],ans[3005];
map<int,int> mp;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int cnt=0;
		mp.clear();	
		for(int j=i;j<=n;j++){
			if(mp[a[j]]!=0){
				for(int k=mp[a[j]];k<=cnt;k++){
					mp[b[k]]=0;
					b[k]=0;
				} 
			}
			b[++cnt]=a[j];
			mp[a[j]]=cnt;	
		}
		for(int k=1;k<=m;k++){
			if(mp[k]!=0) ans[k]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}

#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+100;
int n,m,a[N],cnt,vis1[N],vis2[N],ans,op;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=30;~i;i--){
		cnt=0;
		memset(vis1,0,sizeof(vis1));
		for(int j=1;j<=n;j++){
			if(vis2[j]==0&&op==1)continue;
			if(a[j]&(1<<i)){
				cnt++;
				vis1[j]=1;
			}
		}
		if(cnt>=m){
			ans+=(1<<i),op=1;
			for(int j=1;j<=n;j++){
				if(vis1[j]!=1){
					vis2[j]=0;
				}else{
					vis2[j]=1;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
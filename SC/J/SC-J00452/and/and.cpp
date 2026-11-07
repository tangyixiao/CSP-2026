#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m;
int a[N],vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int ans=0;
	for(int i=1;i<=n;i++) cin>>a[i];
	int used=0;
	for(int j=30;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if((a[i]>>j) & 1 && vis[i]==0){
				cnt++;
			}else{
				vis[i]=1;
			}
		}
		if(cnt>=m) {
			ans+=1<<j;
			used=1;
		}else if(used==0){
			for(int i=1;i<=n;i++){
				vis[i]=0;
			}
		}
	}
	cout<<ans;
	
}
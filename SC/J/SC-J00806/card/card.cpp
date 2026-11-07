#include<bits/stdc++.h> 
using namespace std;
int a[500005];
int b[500005];
struct Node{
	int id,v;
};
Node cnt[300005];
int ans[300005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	int len=0;
	for(int l=1;l<=n;l++){
		for(int i=l;i<=n;i++){
			if(cnt[a[i]].v==0){
				cnt[a[i]].v=1;
				b[++len]=a[i];
				cnt[a[i]].id=len;
			}else{
				for(int j=cnt[a[i]].id+1;j<=len;j++){
					cnt[b[j]].v=0;
				}
				len=cnt[a[i]].id;
			}
		}
		for(int i=1;i<=len;i++){
			ans[b[i]]++;
			cnt[b[i]].v=0;
		}
		len=0; 
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
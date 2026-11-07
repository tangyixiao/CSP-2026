#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],zq[500005],cnt[300005];
bool yfw[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(ans[a[i]]!=0){
			zq[i]=ans[a[i]];
			ans[a[i]]=i;
			cnt[a[i]]=i;
		}else{
			ans[a[i]]=i;
			cnt[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(zq[i]!=0){
			for(int j=i-1;j>=zq[i]+1;j--){
				cnt[j]--;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
} 
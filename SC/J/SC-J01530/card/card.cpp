#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int p=0;
int a[500005],b[500005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(b[a[i]]==0){
			b[a[i]]=i;
		}
	}
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]) p=1; 
	}
	if(p==0){
		for(int i=1;i<=m;i++){
			cout<<b[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int j,k=0,k2=0,pos;
		for(j=i-1;j>=1;j--){
			if(b[a[j]]>i){
				k=1;
				break;
			}
			if(a[j]==a[i]&&k2==0){
				k2=1;
				pos=j;
			}
		}
		if(k==1&&k2==0){
			ans[a[i]]+=(i-j);
		}
	    if(k==0){
			ans[a[i]]=i;
		}
		if(k==1&&k2==1){
			ans[a[i]]+=(i-pos);
		}
	}
    for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
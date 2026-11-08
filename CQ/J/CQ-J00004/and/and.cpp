#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,a[200005],maxn,l,ans,uva[200005],tot; 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	sort(a+1,a+n+1);
	while(1){
		bool vis=0;
		for(int i=30;i>=0;i--){
			if(a[n]<(1<<i)){
				continue;
			}
			int x=lower_bound(a+1,a+n+1,(1<<i))-a,s=0;
			for(int j=1;j<=n;j++){
				if((a[j]>>i)&1){
					s++;
				}
			}
			if(s>=k){
				tot=0;
				for(int j=1;j<=n;j++){
					if((a[j]>>i)&1){
						a[j]-=(1<<i);
						uva[++tot]=a[j];
					}
				}
				n=tot;
				for(int j=1;j<=n;j++){
					a[j]=uva[j];
				}
				vis=1;
				ans+=(1<<i);
				break;
			}
		}
		if(!vis){
			break;
		}
	}
	cout<<ans;
	return 0;
} 
//9:47
//900n 

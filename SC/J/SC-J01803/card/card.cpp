#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,tot,x,y,z,cnt,mid,mxt,mnt;
int a[500005],b[300005],ans[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=0){
				for(int k=b[a[j]];k<=j;k++){
					b[a[k]]=0;
				}
			}
			b[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=0) ans[a[j]]++;
			b[a[j]]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
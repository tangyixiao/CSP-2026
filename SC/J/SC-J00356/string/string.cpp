#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int n,r;
int a[N],nw[N];
char c[N];
ll ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i],nw[i]=a[i];
	for(int l=1;l<=n;l++){
		if(l==r)break ;
		while(1){
			if(nw[l]>=nw[r]){
				if(c[l]!=c[r])ans+=nw[r];
				nw[l]-=nw[r];
				r--;
			}
			else{
				if(c[l]!=c[r])ans+=nw[l];
				nw[r]-=nw[l];
				break ;
			}
			if(l==r)break ;
		}
		if(l==r)break ;
	}
	cout<<ans;
	return 0;
}

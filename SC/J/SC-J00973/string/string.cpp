#include<bits/stdc++.h>
#define int long long
using namespace std;
using namespace std;
int n,a[200001],ss[200001],cnt,s,ans,last,x=1,ans2;
char c[200001];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[x]>>c[x];
		s+=a[x];
		if(c[x]==c[x-1]&&x!=1){
			a[x-1]+=a[x];
			x--;
		}
		ss[x]=ss[x-1]+a[x];
		x++;
	} 
	x--;
	ans=s/2;
	n=x; 
	last=n;
	if(n==1){
		cout<<0;
		return 0;
	} 
	for(int i = 1;i<=n;i++){
		if(ss[i]>s/2){
			break;
		} 
		int l=lower_bound(ss+1,ss+n,s+1-ss[i])-ss,r=lower_bound(ss+1,ss+n,s+1-ss[i-1])-ss;
		if(l<=n/2){
			l=n/2+1;
		}
		for(int j = l;j<=r,j<=n;j++){
			if(i==j)continue;
			if(c[i]==c[j]){
				if(j==l){
					ans2+=ss[j]-(s+1-ss[i]-a[i])+1;
				}
				else if(j==r){
					ans2+=(s+1-ss[i])-ss[j-1]+1;
				}
				else{
					ans2+=a[j];
				}
			}
		}
	}
	cout<<ans-ans2;
	return 0;
}
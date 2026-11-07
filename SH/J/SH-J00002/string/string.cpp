#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,c[200010],a[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		char cha;
		cin>>c[i]>>cha;
		a[i]=cha-'a'+1;
	}
	int l=1,r=n;
	int ans=0;
	while(l<r){
		if(c[l]<c[r]){
			if(a[l]!=a[r]){
				ans+=c[l];
			}
			l++;
			c[r]-=c[l-1];
		}else if(c[l]>c[r]){
			if(a[l]!=a[r]){
				ans+=c[r]; 
			}
			r--;
			c[l]-=c[r+1];
		}else{
			if(a[l]!=a[r])ans+=c[l];
			l++;
			r--;
		}
//		cout<<l<<' '<<r<<' '<<c[l]<<' '<<c[r]<<endl;
	}
	cout<<ans<<endl;
}
//Trick||Treat!

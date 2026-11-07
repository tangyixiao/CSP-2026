#include<bits/stdc++.h>
using namespace std;
//define ll long long
const int N=2e5+7;
int a[N],n,m;
int main(){

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20){
		int ans=0;
		for(int i=1;i<(1<<n);i++){
			int cnt=1073741823,sum=0;
			for(int j=1;j<=n;j++){
				if(i>>(n-j)&1) sum++,cnt&=a[j];
			}
			if(sum==m) ans=max(ans,cnt);
		}
		cout<<ans;
	}
	else if(n<=2000){
		
		if(m==1) {
			int ans=0;
			for(int i=1;i<=n;i++) ans=max(a[i],ans);
			cout<<ans;
		}
		if(m==n){
			int ans=1073741823;
			for(int i=1;i<=n;i++) ans&=a[i];
			cout<<ans;
		}
		if(m==2){
			int ans=0;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					ans=max(ans,a[i]&a[j]);
				}
			}
			cout<<ans;
		}
	}else{
		int flag=1;
		for(int i=1;i<=n;i++) if(a[i]!=i-1) {flag=0;break;}
		if(flag){
			cout<<n-m;
		}else {
			sort(a+1,a+1+n,[&](int x,int y){
				return x>y;
			});
			cout<<a[m];
		}
	}
	
	

	return 0;
}


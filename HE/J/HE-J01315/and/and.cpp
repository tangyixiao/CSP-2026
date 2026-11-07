#include<bits/stdc++.h>
using namespace std;
int a[200010],n,m,ans,mx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],mx=max(mx,a[i]);
	if(n<=20){
		int d=1;
		for(int i=1;i<=n;i++) d*=2;
		d--;
		for(int i=d;i>=1;i--){
			int cnt=0,dd=i,sum=0;
			for(int j=1;j<=n;j++){
				if(dd%2)
				{
					if(!cnt) sum=a[j];
					else sum&=a[j];
					cnt++;
				}
				dd>>=1;
			}
			if(cnt==m) ans=max(ans,sum);
		}
	}
	else if(m==1){
		ans=mx;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	else if(m==n){
		int aaa=a[1];
		for(int i=2;i<=n;i++) aaa&=a[i];
		ans=aaa;
	}
	cout<<ans;
	return 0;
}

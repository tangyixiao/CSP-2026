#include<bits/stdc++.h>
using namespace std;
int n,a[200005],m,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		for(int i=1;i<(1<<n);i++){
			int cnt=0,idx=0,j=i,y=0;
			bool f=0;
			while(j){
				idx++;
				if((j&1!=0)&&(f==0)){
					y=a[idx];
					f=1;
					cnt++;
				} 
				else if(j&1){
					y&=a[idx];
					cnt++;
				}
				j>>=1;
			}
			if(cnt==m) ans=max(ans,y);
		}
		cout<<ans;
	}
	else if(n<=2000){
		if(m==1){
			for(int i=1;i<=n;i++){
				ans=max(ans,a[i]);
			}
		}
		else if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i==j) continue;
					ans=max(ans,a[i]&a[j]);
				}
			}
		}
		else if(m==n){
			ans=a[1];
			for(int i=2;i<=n;i++){
				ans&=a[i];
			}
		}
		cout<<ans;
	}
	else{
		int cnt[200005];
		for(int i=1;i<=n;i++){
			int j=a[i],idx=0;
			while(j){
				idx++;
				if(j&1) cnt[idx]++;
				j>>=1;
			}
		}
		for(int i=1;(1<<i)<=m;i++){
			if(cnt[(1<<i)]>=m){
				ans+=(1<<i);
			}
		}
		cout<<ans;
	}
	return 0;
}

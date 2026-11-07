#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int ans=0,mx=0;
int n,m;
void yu(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j){
				mx=max(mx,a[i]&a[j]);
			}
		}
		ans=max(ans,mx);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
	}else if(m==2){
		yu();
		cout<<ans;
	}else{
		for(int i=1;i<=m;i++){
			mx=0;
			for(int j=1;j<=n;j++){
				mx=max(mx,a[j]);
			}
			for(int j=1;j<=n;j++){
				if(a[j]==mx){
					a[j]=0;
					break;
				}
			}
			if(ans==0){
				ans=mx;
				continue;
			}
			ans&=mx;
		}
		cout<<ans;
	}
	return 0;
} 

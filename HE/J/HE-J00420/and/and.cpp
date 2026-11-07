#include<bits/stdc++.h>
using namespace std;
long long q[200010];
int n,m,b,ans1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	cin>>q[1];
	b=q[1];
	ans1=max((long long)ans1,q[1]);
	for(int i=2;i<=n;i++){
		cin>>q[i];
		b&=q[i];
		ans1=max((long long)ans1,q[i]);
	}if(m==1){
		cout<<ans1;
		return 0;
	}if(m==2){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					ans=max((long long)ans,q[i]&q[j]);
				}
				
			}
		}
		cout<<ans;
	}if(m==n){
		cout<<b;
	}
	if(m==n-1){
		int ans=-1;
		for(int i=1;i<=n;i++){
			ans=max((long long)ans,b&q[i]);
		}cout<<ans;
	}
	
	
	return 0;
}

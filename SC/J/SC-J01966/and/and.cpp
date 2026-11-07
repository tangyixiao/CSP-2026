#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int ans=-0x7f7f7f7f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			int c=a[i]&a[j];

			ans=max(ans,c);
		}
	}
	if(m==2)
		cout<<ans;
	if(m==n){
		int c=a[1];
		for(int i=2;i<=n;i++){
			c=c&a[i];
		}
		cout<<c;
		
	}
	if(m==n-1){
		int c=a[1];
		for(int i=2;i<n;i++){
			c=c&a[i];
		}
		int b=a[2];
		for(int i=3;i<=n;i++){
			b=b&a[i];
		}
		cout<<max(c,b);
	}
	if(m==1){
		int maxx=-0x7f7f7f;
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
	}
	return 0;
}
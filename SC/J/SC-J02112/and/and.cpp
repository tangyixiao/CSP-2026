#include<bits/stdc++.h>
using namespace std;
long long n,m,ans;
long long a[200050];
long long vis[200050];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	if(n<=20){
		for(long long i=1;i<=n;i++){
			cin>>a[i];
		}
		for(long long i=1;i<=m;i++){
			long long t=-1,id;
			for(long long i=1;i<=n;i++){
				if(vis[i]==1) continue;
				else{
					long long zq=t;
					t=max(t,a[i]);
					if(t!=zq) id=i;
				}
			}
			vis[id]=1;
			if(i==1){
				ans=t;
			}
			else{
				ans=ans&t;
			}
			
			
		}
		cout<<ans;
	}
	else if (n<=2000){
		if(m==1){
			for(long long i=1;i<=n;i++){
				cin>>a[i];
			}
			long long t=0;
			for(long long i=1;i<=n;i++){
				t=max(t,a[i]);
			}
			cout<<t;
		}
		else if(m==2){
			for(long long i=1;i<=n;i++){
				cin>>a[i];
			}
			long long t=0,id;
			for(long long i=1;i<=n;i++){
				long long zq=t;
				t=max(t,a[i]);
				if(zq!=t) id=i;
			}
			long long l=0;
			for(long long i=1;i<=n;i++){
				if(i!=id) l=max(l,a[i]);
			}
			t=t&l;
			cout<<t;
		}
		else{
			for(long long i=1;i<=n;i++){
				cin>>a[i];
			}
			long long g=a[1];
			for(long long i=2;i<=n;i++){
				g=g&a[i];
			}
			cout<<g;
		}
	}
	else{
		if(m==1){
			for(long long i=1;i<=n;i++){
				cin>>a[i];
			}
			long long t=0;
			for(long long i=1;i<=n;i++){
				t=max(t,a[i]);
			}
			cout<<t;
		}
		else{
			for(long long i=1;i<=n;i++){
				cin>>a[i];
			}
			long long t=LONG_LONG_MAX,id;
			for(long long i=1;i<=n;i++){
				long long zq=t;
				t=min(t,a[i]);
				if(zq!=t) id=i;
			}
			int l=1;
			if(l==id) l++;
			long long k=a[l];
			for(long long i=l+1;i<=n;i++){
				if(i!=id) k=k&a[i];
			}
			cout<<k;
		}
	}
	return 0;
}
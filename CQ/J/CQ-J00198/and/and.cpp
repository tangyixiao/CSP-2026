#include<bits/stdc++.h>
using namespace std;

const int N=2*1e5+5;
int n,m;
long long ans,a[N];
bool j[N];

void f(int pos,long long ad){
	if(pos>m){
		ans=(ans<ad?ad:ans);
		return;
	}
	if(pos==1){
		for(int i=1;i<=n;++i){
			j[i]=1;
			f(pos+1,a[i]);
			j[i]=0;
		}	
	}
	for(int i=1;i<=n;++i){
		if(j[i]) continue;
		j[i]=1;
		f(pos+1,ad&a[i]);
		j[i]=0;
	}
	return;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	if(m==n){
		long long ans;
		cin>>ans;
		for(int i=1;i<n;++i){
			long long x;
			cin>>x;
			ans&=x;
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		long long ans=-1;
		cin>>ans;
		for(int i=1;i<n;++i){
			long long x;
			cin>>x;
			ans=(ans<x?x:ans);
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;++i) cin>>a[i];
	f(1,1);
	cout<<ans;
	return 0;
}

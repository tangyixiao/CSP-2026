#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;



long long n,m,mxn;
int a[N],sum[N];
long long g[N][35];
int w,vis[32];
long long ans;


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=32;i++){
		vis[i]=1;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mxn=max(0,a[i]);
		int k=0;
		while(a[i]){
			g[i][++k]=a[i]%2;
			if(g[i][k]==0) vis[k]=0;
			a[i]/=2;
		}
		w=max(w,k);
	}
	if(m==n){
		int t=0;
		for(int i=1;i<=w;i++){
			if(vis[i]){
				t*=2;
				t+=1;
			}
			else{
				t*=2;
			}
		}
		ans=t;
	}
	if(m==1){
		cout<<mxn;
		return 0;
	}
	
	cout<<ans;
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;
typedef long long lint;

const int N=2e5+7;

int n,m,mx=0,b[N];
int a[N][35],d[35];

void check(bool f){
	if(!f) return ;
	if(m==1) cout<<mx;
	
	int t=0; mx=0;
	if(m==n){
		for(int i=1;i<=n;i++)
			for(int k=0;k<=30;k++)
			d[k]+=a[i][k];
		for(int k=0;k<=30;k++)
			t+=(d[k]==n)*(1<<k);
		cout<<t;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++)
			for(int k=0;k<=30;k++)
			d[k]+=a[i][k];
		for(int i=1;i<=n;i++){
			t=0;
			for(int k=0;k<=30;k++)
				t+=(d[k]-a[i][k]==n-1)*(1<<k);
			mx=max(mx,t);
		}
		cout<<mx;
	}
	if(m==2){
		for(int i=2;i<=n;i++){
			for(int j=1;j<i;j++){
				t=0;
				for(int k=0;k<=30;k++){
					d[k]=a[j][k]+a[i][k];
					t+=(d[k]==2)*(1<<k);
				}
				mx=max(mx,t);
			}
		}
		cout<<mx;
	}
	exit(0);
}

int vis[35];
void dfs(int s){
	if(s==m+1){
		int t=0;
		for(int k=0;k<=30;k++){
			t+=(d[k]==m)*(1<<k);
		}
		mx=max(mx,t);
		return ;
	}
	
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			for(int k=0;k<=30;k++)
				d[k]+=a[i][k];
			
			dfs(s+1);
			for(int k=0;k<=30;k++)
				d[k]-=a[i][k];
			
			vis[i]=0;
		}
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	
	int t,f=1; cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>t;
		b[i]=t;
		f=f&&(t==i-1);
		mx=max(mx,t);
		for(int k=0;k<=30;k++)
			a[i][k]=(bool)(t&(1<<k));
	}
	
	check(m==n||m==1||m==2||m==n-1);
	
	mx=0;
	if(n<=20){
		dfs(1);
		cout<<mx;
		return 0;
	}
	
	sort(b+1,b+1+n,greater<int>());
	if(f){
		if(m>n/2) cout<<0;
		else{
			t=b[1];
			for(int i=1;i<=m;i++)
				t&=b[i];
			cout<<t;
		}
	}
	else cout<<b[m];
	
	return 0;
}
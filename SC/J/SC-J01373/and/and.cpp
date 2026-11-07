#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
multiset<int> se[30];
int a[N],ans=-1e18;
int pre[N],sug[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<30;j++){
			if(a[i]&(1<<j)){
				se[j].insert(-a[i]);
			}			
		}
	}
	if(n<=300){
		for(int i=1;i<=n;i++){
			int sum=a[i];
			vector<bool> vis(1005,0);
			vis[i]=1;
			for(int k=1;k<m;k++){
				int cnt=-1e18,f;
				for(int j=1;j<=n;j++){
					if(!vis[j]){
						if((sum&a[j])>cnt){
							cnt=(sum&a[j]);
							f=j;
						}
					}					
				}
				vis[f]=1;
				sum=cnt;
			}		
			ans=max(ans,sum);
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		int sum=a[1];
		for(int i=2;i<=n;i++)	sum&=a[i];
		cout<<sum;
		return 0;
	}
	if(m==2&&n<=10000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)	continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		pre[1]=a[1];
		sug[n]=a[n];
		for(int i=2;i<=n;i++)	pre[i]=pre[i-1]&a[i];
		for(int i=n-1;i>=1;i--)	sug[i]=sug[i+1]&a[i];
		for(int i=1;i<=n;i++)	ans=max(ans,pre[i-1]&sug[i+1]);
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=0;j<30;j++)
			if(a[i]&(1<<j))	sum+=se[j].size()-1;
		if(sum>=m-1)	ans=max(ans,a[i]);
	}
	if(ans==-1e18){
		cout<<0;
		return 0;
	}
	for(int i=0;i<30;i++)
		if(ans&(1<<i))	se[i].erase(-ans);
	while(--m){
		bool o=0;
		for(int i=29;i>=0;i--){
			if(ans&(1<<i)){
				if(!se[i].empty()){
					int t=-*se[i].begin();
					ans&=t;
					for(int j=0;j<30;j++)
						if(t&(1<<j))	se[j].erase(-t);
						o=1;
					break;
				}
			}	
		}
		if(!o){
			cout<<0;
			return 0;
		}
	}
	cout<<ans;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+33;
int n,m,a[N];
int dfs(int x,int sum,int cnt){
	if(x==n+1){
		if(cnt==m)return sum;
		return 0;
	}
	return max(dfs(x+1,sum&a[x],cnt+1),dfs(x+1,sum,cnt));
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int sum=1;
	for(int i=1;i<=30;i++)sum*=2;
	sum-=1;
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=20)cout<<dfs(1,sum,0);
	else{
		if(n<=2000){
			if(m==1){
				int ans=-1;
				for(int i=1;i<=n;i++)ans=max(ans,a[i]);
				cout<<ans;
			}
			else if(m==2){
				int ans=-1;
				for(int i=1;i<=n;i++){
					for(int j=i+1;j<=n;j++){
						ans=max(ans,a[i]&a[j]);
					}
				}
				cout<<ans;
			}
			else{
				for(int i=1;i<=n;i++)sum=(sum&a[i]);
				cout<<sum;
			}
		}
		else{
			if(m==n-1){
				sort(a+1,a+n+1);
				for(int i=2;i<=n;i++)sum=(sum&a[i]);
				cout<<sum;
			} 
			else{
				
					int maxn=-1;
					for(int i=1;i<=n;i++)maxn=max(maxn,a[i]);
					int summ=1,cnt=0;
					while(summ<=maxn)summ*=2,cnt++;
					int ans=0; 
					for(int i=0;i<n;i++)ans+=pow(2,i);
					cout<<ans; 
			}
		}
	}
	return 0;
}

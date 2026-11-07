#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
long long ans;
long long maxans;
long long a[N];
void dfs(int step,int now,long long data){
	if(step==n+1){
		if(now!=m){
			return ;
		}
		else{
			ans=max(ans,data);
		}
	}
	if(now>m) return ;
	if(n+1-step+now+1<m) return ;
	if(data==0){
		dfs(step+1,now+1,a[step]);
		dfs(step+1,now,data);
	}
	else{
		dfs(step+1,now+1,data&a[step]);
		dfs(step+1,now,data);
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxans=max(a[i],maxans);
	}
	if(n<=20){
		dfs(1,0,0);
		cout<<ans;
	}
	else{
		if(m==1){
			cout<<maxans;
		}
		if(m==2){
			long long anss;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i==j) continue;
					anss=max(anss,a[i]&a[j]);
				}
			}
			cout<<ans;
		}
		if(m==n){
			long long ansss=a[1];
			for(int i=2;i<=n;i++){
				ansss=a[i]&ansss;
			}
			cout<<ansss;
		}
		else{
			cout<<maxans/2;
		} 
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

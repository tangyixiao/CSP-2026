#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long ask[200010];
long long an=0;
void dfs(long long id,long long co,long long a){
	if(a<=an&&a!=-1) return ;
	if(co==m){
		an=max(an,a);
		return ;
	}
	for(long long i=id+1;i<=n;i++){
		dfs(i,co+1,(a!=-1)?a&ask[i]:ask[i]);
	}
}
bool ae1(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>ask[i];
	}
	if(m==1){
		long long a=0;
		for(long long i=1;i<=n;i++){
			a=max(a,ask[i]);
		}
		cout<<a;
		return 0;
	}
	if(m==2){
		long long a=0;
		for(long long i=1;i<=n;i++){
			for(long long j=i+1;j<=n;j++){
				a=max(a,(ask[i]&ask[j]));
			}
		}
		cout<<a;
		return 0;
	}
	if(m==n){
		for(int i=2;i<=n;i++){
			ask[1]&=ask[i];
		}
		cout<<ask[1];
		return 0;
	}
	if(n<=20){
		dfs(0,0,-1);
		cout<<an;
		return 0;
	}
	sort(ask+1,ask+1+n,ae1);
	cout<<ask[m];
	return 0;
}

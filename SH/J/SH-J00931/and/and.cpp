#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200007];
int rec[200007];
int m;
long long ans=0;
void dfs(int cnt,long long sum){
	if(cnt>m){
		return;
	}
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if(rec[i]==1){
			continue;
		}
		rec[i]=1;
//		cout<<cnt<<" "<<sum<<endl;
		dfs(cnt+1,sum&a[i]);
		rec[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,pow(2,30)-1);
	cout<<ans<<endl;
	return 0;
}

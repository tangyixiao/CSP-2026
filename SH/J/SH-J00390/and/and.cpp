#include<bits/stdc++.h>
using namespace std;

int n,m,lev;
bool flag;
long long a[200005],v[200005][35],ans;
void dfs(int st){
	if(flag) return;
	if(st<0){
		flag=1;
		cout<<ans;
		return;
	}
	int cnt=0;
	for(int j=1;j<=n;j++){
		if(v[j][lev]){
			if((a[j] & (1<<st))){
				cnt++;
				v[j][st]=1;
			}
		}
	}
	if(cnt==m){
		flag=1;
		long long k=(1<<30)-1;
		for(int i=1;i<=n;i++){
			if(v[i][st]) k&=a[i];
		}
		cout<<k;
		return;
	}
	else if(cnt>m){
		ans+=(1<<st);
		lev=st;
		dfs(st-1);
	}
	else{
		dfs(st-1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	lev=30;
	for(int i=1;i<=n;i++) v[i][30]=1;
	dfs(29);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

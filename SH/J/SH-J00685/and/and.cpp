#include<bits/stdc++.h>
using namespace std;
int n,m,ans,cnt,cntt,cnttt;
int a[1048581],f[1048581];
void dfs(int zhi,int mm){
	if(mm==m){
		ans=max(ans,zhi);
	}
	for(long long i=1;i<=cnt;i++){
		if(a[i]>f[i]){
			f[i]++;
			dfs(zhi&i,mm+1);
			f[i]--;
		}
	}
}
void solve1(){
	cnttt=2147483647;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		cnt=max(cnt,x);
		a[x]++;
		if(m==2){
			if(a[x]>=2){
				cntt=max(cntt,x);
			}
		}
		if(m==n){
			cnttt&=x;
		}
	}
	if(m==2){
		cout<<cntt;
		return;
	}
	if(m==1){
		cout<<cnt;
		return;
	}
	if(m==n){
		cout<<cnttt;
		return;
	}
	dfs(2147483647,0);
	cout<<ans;
}
bool cmp(int a,int b){
	return a>b;
}
solve2(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int xxx=2147483647;
	for(int i=1;i<=m;i++){
		xxx&=a[i];
	}
	cout<<xxx;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n<=2000){
		solve1();
		return 0;
	}
	if(n>2000){
		solve2();
		return 0;
	}
	return 0;
}

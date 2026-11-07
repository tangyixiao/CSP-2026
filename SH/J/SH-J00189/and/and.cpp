#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],dp[2005][2005],kai[35],man,ansn;
bool flag=1;
void solve1(){
	int maxn=0;
	for(int i=1;i<=n;i++)
		maxn=max(maxn,a[i]);
	cout<<maxn;
}
void solve2(){
	int ans=2147483647;
	for(int i=1;i<=n;i++){
		ans=ans&a[i];
	}
	cout<<ans;
}
void solve3(){
	int maxn=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int sum=a[i];
			sum=sum&a[j];
			maxn=max(maxn,sum);
		}
	}
	cout<<maxn;
}
void dfs(int x,int y,int cnt){
	if(x==n+1&&y==m){
		ansn=max(ansn,cnt);
		return;
	}
	if(cnt<=ansn) return;
	if((n-x)<(m-y)) return;
	dfs(x+1,y,cnt);
	int u=cnt;
	u=u&a[x];
	dfs(x+1,y+1,u);
}
void solve4(){
	dfs(0,0,2147483647);
	cout<<ansn;
}
void solve5(){
	int ans;
	for(int i=1;i<=n;i++){
		int y=a[i],u=1;
		while(y){
			kai[u]+=(y%2);
			y=y/2;
		} 
	} 
	for(int i=1;i<=34;i++){
		if(kai[i]==n||kai[i]==n-1){
			ans+=pow(2,i);
		}
	}
	cout<<ans;
}
void solve6(){
	int sum[4]={0,0,0,0};
	for(int i=1;i<=n;i++){
		sum[a[i]]++;
	}
	if(sum[3]>=m) cout<<"3";
	else if(sum[3]+sum[2]>=m) cout<<"2";
	else cout<<"0";
}
void solve7(){
	int cnt=2147483647;
	for(int i=n;i>=n-m+1;i--){
		cnt=cnt&a[i];
	}
	cout<<cnt;
} 
void solve8(){
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1) flag=0;
		man=max(man,a[i]);
	}
    if(m==1) solve1(); //5pts ok
    else if(m==n) solve2(); //5pts ok
    else if(n<=2000&&m==2) solve3(); //15pts ok
    else if(n<=20) solve4(); //25pts ok
	else if(m==n-1) solve5(); //10pts notok
	else if(man<4) solve6(); //10pts ok
	else if(flag==1) solve7(); //10pts ok
    else solve8(); //5pts ok
    //in all 75pts
	fclose(stdin);
	fclose(stdout);
	return 0;
}

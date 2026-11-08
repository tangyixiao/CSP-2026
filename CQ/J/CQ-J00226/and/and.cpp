#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+12;
int a[N];
int n,m,maxn;
void dfs(int step,int ans,int x){
	 if(step==m){
	 	maxn=max(maxn,ans);
	 	return ;
	 } 
	 if(x+(m-step)>n) return;
	 if(step==0){
	 	dfs(step+1,a[x],x+1);
	 }
	 else{
	 	dfs(step+1,ans&a[x],x+1);
	 }
	 dfs(step,ans,x+1);
}
signed main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int unusual_ans;
	cin>>n>>m;
	int g=0;
	if(n>=1e5) g=1; 
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	maxn=max(maxn,a[i]);
	}
	if(m==1){
	   cout<<maxn;
	   return 0;
	}
	if(m==n){
		unusual_ans=a[1];
		for(int i=2;i<=n;i++){
			unusual_ans&=a[i]; 
		}
		cout<<unusual_ans;
		return 0;
	}
	if(maxn<4){
		int cnt[5]={0};
		for(int i=1;i<=n;i++){
			cnt[a[i]]++;
		}
		if(cnt[3]>=m) cout<<3;
		else if((cnt[3]+cnt[2])>=m) cout<<2;
		else if ((cnt[3]+cnt[1])>=m) cout<<1;
		else cout<<0;
		return 0;
	}
	if(g){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	maxn=-1;
    dfs(0,0,1);
	cout<<maxn;	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

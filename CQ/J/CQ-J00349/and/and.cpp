#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a,b,n,m,s,f[N],f1[N],top,op;
struct node{
	int d,val;
}arr[N],dp[N][4];
//void dfs(int x,int sum){
//	if(x==m+1){
//		s=max(s,sum);
//		return ;
//	}
//	for(int i=1;i<=n;i++){
//		if(!f1[i]){
//			f1[i]=1;
//			if(x==1)dfs(x+1,f[i]);
//			else dfs(x+1,sum&f[i]);
//			f1[i]=0;
//		}
//	}
//}
bool cmp(node x,node y){
	return x.val>y.val;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>f[i];
		for(int j=0;j<=20;j++){
			if(f[i]==(1<<j)-1){
				op++;
				break;
			}
		}
		b=max(b,f[i]);
	}
	if(b<4){
		for(int i=1;i<=n;i++){
			f1[f[i]]++;
		}
		for(int i=3;i>=0;i--){
			if(m>=f1[i]){
				s=i;
				m-=f1[i];
			}
			else m=0;
		}
		cout<<s;
		return 0;
	}
	if(op==n){
		sort(f+1,f+1+n,greater<int>());
		s=f[1];
		for(int i=2;i<=m;i++)s&=f[i];
		cout<<s;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++)s=max(s,f[i]);
		cout<<s;
		return 0;
	}
	if(m==2&&n<=2000){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++)s=max(s,f[i]&f[j]);
		}
		cout<<s;
		return 0;
	}
	if(m==n){
		s=f[1];
		for(int i=2;i<=n;i++)s&=f[i];
		cout<<s;
		return 0;
	}
	if(m==n-1){
		s=f[1];
		int s1=0;
		for(int i=2;i<=n;i++)s&=f[i];
		for(int i=1;i<=n;i++)s1=max(s1,s^=f[i]);
		cout<<s1;
		return 0;
	}
	if(n<=20){
		for(int i=0;i<(1<<n);i++){
			int x=i,sum=0;
			while(x){
				sum+=x%2;
				x>>=1;
			}
			if(sum==m)f1[++top]=i;
		}
		for(int i=1;i<=top;i++){
			int sum=0,flag=0;
			for(int j=0;j<n;j++){
				if((f1[i]>>j)&1){
					if(!flag)sum=f[j+1],flag=1;
					else sum&=f[j+1];
				}
			}
			s=max(s,sum);
		}
		cout<<s;
		return 0;
	}
//	for(int i=1;i<=n;i++)dp[i][0]=i;//以他为开头 
	dp[1][0].d=0,dp[1][0].val=0;//不选
	dp[1][1].d=1,dp[1][1].val=f[1];//选 
	dp[1][2].d=1,dp[1][2].val=f[1];//开头 
	for(int i=2;i<=n;i++){
		dp[i][2].val=f[i],dp[i][2].d=1;
		if(dp[i-1][0].val<=dp[i-1][1].val){
			dp[i][0].d=dp[i-1][1].d;
			dp[i][0].val=dp[i-1][1].val;
			if(dp[i-1][1].d<m)dp[i][1].val=(dp[i-1][1].val&f[i]),dp[i][1].d=dp[i-1][1].d+1;
		}
		if(dp[i-1][0].val>=dp[i-1][1].val){
			dp[i][0].d=dp[i-1][0].d;
			dp[i][0].val=dp[i-1][0].val;
			if(dp[i-1][0].d<m)dp[i][1].val=(dp[i-1][0].val&f[i]),dp[i][1].d=dp[i-1][0].d+1;
		}
		if(dp[i][0].val<(dp[i-1][2].val))dp[i][0].val=(dp[i-1][2].val),dp[i][0].d=1;
		if(dp[i][1].val<(dp[i-1][2].val&f[i]))dp[i][1].val=(dp[i-1][2].val&f[i]),dp[i][0].d=2;
		if(dp[i][0].d==m)s=max(dp[i][0].val,s);
		if(dp[i][1].d==m)s=max(dp[i][1].val,s);
		if(dp[i][2].d==m)s=max(s,dp[i][2].val);
	}
	cout<<s;
	return 0;
}


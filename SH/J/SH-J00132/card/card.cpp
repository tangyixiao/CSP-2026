#include<bits/stdc++.h>
using namespace std;
typedef int i32;
typedef unsigned int u32;
typedef long long i64;
typedef unsigned long long u64;
typedef __int128 i128;
typedef float f32;
typedef double f64;
typedef long double f128;
#define endl '\n'
const i32 N=5e5+10,M=3e5+10;
i32 n,m,a[N],ans[M],c[N];
bool vis[M],flag=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(i32 i=1;i<=n;i++)cin>>a[i];
	i32 t=0;
	for(i32 i=1;i<=n;i++){
		if(a[t]!=a[i])a[++t]=a[i],c[t]=1;
		else c[t]++;
	}
	n=t;
	for(i32 i=1;i<=n;i++)if(a[i]<a[i-1])flag=0;
	if(n<=5000){
		for(i32 i=1;i<=n;i++){
			for(i32 j=1;j<=m;j++)vis[j]=0;
			stack<i32> q;
			for(i32 j=i;j<=n;j++){
				if(!vis[a[j]])q.push(a[j]),vis[a[j]]=1;
				else while(!q.empty()&&q.top()!=a[j])vis[q.top()]=0,q.pop();
			}
			while(!q.empty())ans[q.top()]+=c[i],q.pop();
		}
	}else if(flag){
		for(i32 i=1,j=0;i<=n;i++){
			j+=c[i];
			ans[i]=j;
		}
	}else if(m==1){
		ans[1]=c[1];
	}else if(m==2){
		for(i32 i=1;i<=n;i++){
			ans[a[i]]+=c[i];
			if((n-i+1)%2==0)ans[a[i]^1]+=c[i];
		}
	}
	for(i32 i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}

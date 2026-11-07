#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e5+5;
const int M=3e5+5;
int n,m;
int a[maxn];
int ans[M];
bool vis[M];
stack<int> q;
inline int read(){
	int num=0,f=1;
	char ch;
	ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while('0'<=ch&&ch<='9'){
		num=num*10+(ch^48);
		ch=getchar(); 
	}
	return num*f;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	for(int op=1;op<=n;op++){
		memset(vis,0,sizeof(vis));
		for(int i=op;i<=n;i++){
			if(vis[a[i]]){
				while(q.top()!=a[i]){
					vis[q.top()]=0;
					q.pop();
				}
			}
			else{
				vis[a[i]]=1;q.push(a[i]);
			}
		}
		for(int i=1;i<=m;i++){
			if(vis[i]) ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+5;
int n,m;
int a[maxn],up,ans,sum;
bool vis[maxn][32];
vector<int> e[32];
bool cmp(int xx,int yy){
	return xx>yy;
}
vector<int> pass;
bool check[maxn];
void dfs(int pos,int siz,int cnt){
	if(cnt>siz){
		int down=pass[0];
		for(int i=1;i<pass.size();i++){
			down=down&pass[i];
		}
		ans=max(ans,down);
		return ;
	}
	for(int i=pos;i<=n-(siz-cnt);i++){
		if(check[i]) continue;
		check[i]=1;
		pass.push_back(a[i]);
		dfs(i+1,siz,cnt+1);
		pass.pop_back();
		check[i]=0;
	}
	return ;
}
int pre[maxn],bck[maxn];
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
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();ans=max(ans,a[i]);
		if(i==1) sum=a[i];
		else sum=sum&a[i];
		int num=a[i],now=1;
		while(num){
			if(num%2){
				e[now].push_back(a[i]);
				vis[i][now]=1;
			}
			num>>=1;now++;
		}
	}
	if(m==n){
		cout<<sum;return 0;
	}
	if(m==1){
		cout<<ans;return 0;
	}
	if(m==n-1){
		ans=0;
		pre[1]=a[1];
		for(int i=2;i<=n;i++){
			pre[i]=pre[i-1]&a[i];
		}
		bck[n]=a[n];
		for(int i=n-1;i>=1;i--){
			bck[i]=bck[i+1]&a[i];
		}
		for(int i=1;i<=n;i++){
			if(i==1){
				ans=max(ans,bck[2]);
			}
			if(i==n){
				ans=max(ans,pre[n-1]);
			}
			ans=max(ans,pre[i-1]&bck[i+1]);
		}
		cout<<ans;
		return 0;
	}
	if(n<=20){
		ans=0;
		dfs(1,m,1);
		cout<<ans;
		return 0;
	}
	for(int i=31;i>=0;i--){
		if(e[i].size()>=m){
			up=i;break;
		}
	}
	if(up==0){
		cout<<0;return 0;	
	}
	sort(e[up].begin(),e[up].end(),cmp);
	if(m==2){
		ans=0;
		for(int i=0;i<e[up].size();i++){
			for(int j=i+1;j<e[up].size();j++){
				ans=max(ans,e[up][i]&e[up][j]);
			}
		}
		cout<<ans;return 0;
	}
	ans=e[up][0];
	for(int i=1;i<m;i++){
		ans=ans&e[up][i];
	}
	cout<<ans;
	return 0;
}
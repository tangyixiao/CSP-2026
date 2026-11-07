#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10,L=21;
int n,m,a[N],nxtloc[N];
map<int,int> mp;
vector<int> v,G[N];
int f[N];

int dep[N];
int s[N];
bool visited[N];
long long ans[M];
int sitree[N];
void dfs(int x){
	visited[x]=1;
	sitree[x]=1;
	for(int i=0;i<G[x].size();++i){
		int to=G[x][i];
		dfs(to);
		sitree[x]+=sitree[to];
	}
	
}
inline void read(int &x){
	x=0;
	int f=1;
	
	char c=getchar();
	for(;c<'0'||c>'9';c=getchar()){
		if(c=='-')f=-1;
		
	}for(;c>='0'&&c<='9';c=getchar()){
		x=(x<<1)+(x<<3)+c-'0';
	}x*=f;
}inline void write(long long x){
	if(x<0){
		x=-x;
		putchar('-');
	}if(x>9)write(x/10);
	putchar(x%10+'0');
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	read(n);read(m);

	for(int i=1;i<=n;i++){
		read(a[i]);
	}for(int i=n;i>=1;--i){
		if(mp[a[i]])nxtloc[i]=mp[a[i]];
		else nxtloc[i]=i;
		mp[a[i]]=i;  
		if(i==n)continue;
		if(nxtloc[i]!=i)G[nxtloc[i]].push_back(i);
		else G[i+1].push_back(i); 
		
	}dfs(n);
	for(int i=1;i<=n;i++){
		if(nxtloc[i]!=i)sitree[i]=0;
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]+=sitree[i];
	}for(int i=1;i<=m;i++){
		write(ans[i]);
		putchar(' ');
	}

	
	return 0;
}
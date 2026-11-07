#include<bits/stdc++.h>
using namespace std;

const int N=3e5;
long long n,m,a[N],sum[N];

int trie[40][3],tot;

long long in(){
	char c=getchar();
	long long f=1,k=0;
	while(c<'0'||c>'9'){
		if(c=='-'){
			f=-1;
		}
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		k=k*10+c-'0';
		c=getchar();
	}
	return k*f;
	
}
void insert(string s,int x){
	int p=0,ans=0;
	for(int i=0;i<s.size();i++){
		int ch=s[i]-'0';
		if(!trie[ch][p])trie[ch][p]=++tot;
		else if(ch==1){
			ans++;
		}
		ans<<=1;
		p=trie[ch][p];
	}
	sum[x]=ans;
}

string ss[N];

string get(int x){
	string s;
	while(x){
		char tmp=(x%2+'0');
	
		s=tmp+s;
		x>>=1;
	}
	int lon=s.size();
	while(lon<31){
		s='0'+s;
		lon++;
	}

	return s;
}


long long ans=0,vis[N];

void dfs(long long sum,long long dep){
	if(sum<ans)return;
	if(dep>m){
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		vis[i]=1;
		if(sum!=0)dfs(sum&a[i],dep+1);
		else dfs(a[i],dep+1);
		vis[i]=0;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=in();m=in();
	long long maxx=0;
	for(int i=1;i<=n;i++){
		a[i]=in();
		maxx=max(maxx,a[i]);
		//insert(get(a[i]),i);
	}
	//sort(a+1,a+n+1);
	if(m==1){
		cout<<maxx;
		return 0;
	}
	dfs(0,1);
	cout<<ans;
//	for(int i=1;i<=n;i++){
//		cout<<sum[i]<<" ";
//	}
	return 0;
} 
/*
5 3
31 3 1 15 7

*/

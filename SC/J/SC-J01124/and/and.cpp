#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,line[N],ans=-1e9;
bool C=1;
bool cmp(int x,int y){
	return x>y;
}
void init(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){ 
		cin>>line[i]; 
		if(line[i]>4) C=0;
	}
}

void solve1(){
	int res=0;
	for(int i=1;i<=n;i++) res=max(res,line[i]);
	cout<<res;
}
int ans2=-1e9;
void dfs2(int cur,int res,int step){
	
	if(step==m){
		ans2=max(ans2,res);
		return ;
	}
	if(step>=m) return ;
	if(cur>n) return ;
	dfs2(cur+1,res,step);
	dfs2(cur+1,res&line[cur],step+1);
	
	return ;
}
void solve2(){
	for(int i=1;i<=n;i++){
		dfs2(i+1,line[i],1);
	}
	cout<<ans2;
}
void solve3(){
	int res=line[1];
	for(int i=1;i<=n;i++) res&=line[i];
	cout<<res;
}
void solve4(){
	sort(line+1,line+1+n,cmp);
	int res=line[1];
	for(int i=1;i<=m;i++)res&=line[i];
	cout<<res;
}
void solve5(){
	int res=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			res=max(res,line[i]&line[j]);
		}
	}
	cout<<res;
}

void solveC(){
	int cnt[5];
	memset(cnt,0,sizeof(cnt));
	for(int i=1;i<=n;i++) cnt[line[i]]++;
	if(m<=cnt[4]) cout<<4;
	else if(m<=cnt[3]) cout<<3;
	else if(m<=cnt[3]+cnt[2]) cout<<2;
	else if(m<=cnt[1]) cout<<1;
	else cout<<0;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	init();
	if(m==1) solve1();
	else if(n<=20) solve2();
	else if(m==n) solve3();
	else if(m==2) solve5();
	else if(C) solveC();
	else solve4();
	return 0;
}
/*

4 2
3 15 12 12

5 3 
31 3 1 15 7
*/
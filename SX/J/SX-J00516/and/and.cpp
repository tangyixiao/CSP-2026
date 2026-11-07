#include<iostream>
#include<algorithm>
#include<cmath>
#define int  long long
using namespace std;
const int N=2*1e5;
int n,m,a[N],num[N],mmax=-1,demax=-1,wha,demin=1e9+1,wha2;
bool v[N];
inline void dfs(int st){
	for(int i=a[st-1]+1;i<=n;i++){
		if(!v[i]){
			v[i]=true;
			a[st]=i;
			if(st==m){
				int mnum=num[a[1]];
				for(int j=2;j<=st;j++) mnum&=num[a[j]];
				mmax=max(mmax,mnum);
			}
			if(st<m) dfs(st+1);
			v[i]=false;
			a[st]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		demax=max(demax,num[i]);
		demin=min(demin,num[i]);
	}
	if(m<=20&&n<=20){
		dfs(1);
		cout<<mmax;
		return 0;
	}
	if(m==1){
		cout<<demax;
		return 0;
	}
	if(m==2){
		sort(num+1,num+n+1);
		cout<<(num[n]&num[n-1]);
		return 0;
	}
	if(m==n){
		wha=num[1];
		for(int i=2;i<=n;i++) wha&=num[i];
		cout<<wha;
		return 0;
	}
	if(m==n-1){
		wha2=num[1];
		for(int i=2;i<=n;i++) if(num[i]!=demin) wha2&=num[i];
		cout<<wha2;
		return 0;
	}
	else{
		dfs(1);
		cout<<mmax;
	}
	return 0;
}
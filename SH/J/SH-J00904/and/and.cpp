#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
int n,m;
ll a[N],ans;
void dfs(int x,int cnt,ll val){
	if(m==cnt){
		ans=max(ans,val);
		return;		
	}
	for(int i=x+1;i<=n;i++){
		dfs(i,cnt+1,val&a[i]);
	}
}
void solve1(){
	for(int i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<ans;
}
bool pw(ll x){
	while(x){
		if(x%2==1&&x!=1) return false;
		x/=2;
	}
	return true;
}
void solve2(){
	sort(a+1,a+1+n);
	ans=a[n];
	cout<<a[n-m+1];
}
void solve3(){
	ans=a[n];
	for(int i=n;i>=n-m+1;i--){
		ans=ans&a[i];
	}
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=2000){
		solve1();
		return 0;	
	}	
	bool flA=true;
	for(int i=1;i<=n;i++){
		if(!pw(a[i]+1)){
			flA=false; 
			break;
		}
	}
	if(flA){
		solve2();
		return 0;
	}
	bool flB=true;
	if(pw(n)){		
		for(int i=1;i<=n;i++){
			if(a[i]!=i-1){
				flB=false;
				break;
			}
		}
	} 
	if(flB){
		solve3();
		return 0;
	}
	return 0;
} 
/*
4 2
3 15 12 12

5 3
31 3 1 15 7

5 3
1 3 7 15 31

5 3
0 1 2 3 4
*/

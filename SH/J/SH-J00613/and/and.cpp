#include <bits/stdc++.h>
using namespace std;

int a[200007];
long long ans;
int n,m;
long long an(long long x,int y){
	string a,b;
	while(x){
		a += x%2;
		x /= 2;
	}
	while(y){
		b += y%2;
		y /= 2;
	}
	if(a.size() < b.size()){
		for(int i = 1;i <= b.size()-a.size();i ++){
			a = '0' + a;
		}
	}else if(a.size() > b.size()){
		for(int i = 1;i <= a.size()-b.size();i ++){
			b = '0' + b;
		}
	}
	string ans;
	for(int i = 0;i < a.size();i ++){
		if( a[i] == '1' && b[i] == '1'){
			ans += '1';
		}else{
			ans += '0';
		}
	}
	long long cnt = 0;
	for(int i = ans.size()-1;i <= 0;i ++){
		cnt = cnt * 2 + ans[i];
	}
	return cnt;
}
void dfs(int idx,long long cnt,int sum){
	if(idx == n){
		if(sum == m){
			ans = max(ans,cnt);
		}
	}
	int t = ;
	int x = an(cnt,a[idx+1]);
	dfs(idx+1,cnt+x,sum+1);
	dfs(idx+1,cnt,sum);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
	}
	dfs(1,a[1],0);
	cout << ans;
	
	return 0;
}

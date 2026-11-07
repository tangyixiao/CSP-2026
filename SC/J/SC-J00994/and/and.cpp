#include<bits/stdc++.h>
using namespace std;
const int Maxn = 1e6+10;
long long s[Maxn],book[Maxn];
int cmp(int c1,int c2){
	return c1 > c2;
}
int n;
int judge(){
	int h = 0;
	for(int i = 1;i <= n;i++){
		if(s[1]+1 == 1 << i){
			h = i;
		}
	}
	if(h){
		for(int i = 2;i <= n;i++){
			while(s[i]+1 <= 1 << h){
				h--;
				if(1 << h < s[i]+1){
					return 0;
				}
			} 
		}
	}
	else{
		return 0;
	}
}
long long anst = -1;
void dfs(int x,long long l){
	if(x == 0){
		anst = max(anst,l);
		return ;
	}
	for(int i = 1;i <= n;i++){
		if(book[i]){
			continue;
		}
		book[i] = 1;
		dfs(x-1,l&s[i]);
		book[i] = 0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m;cin >> n >> m;long long maxsi = -1;
	for(int i = 1;i <= n;i++){
		cin >> s[i];
		maxsi = max(maxsi,s[i]);
	}
	if(m == n){
		long long ans = s[1];
		for(int i = 2;i <= n;i++){
			ans &= s[i];
		}
		cout << ans;
	}
	else if(m == 1){
		cout << maxsi;
	}
	else if(m == 2){
		long long ans = -1;
		for(int i = 1;i <= n;i++){
			for(int j = i+1;j <= n;j++){
				ans = max(ans,s[i]&s[j]);
			}
		}
		cout << ans;
	}
	else if(maxsi < 4){
		sort(s+1,s+n+1,cmp);
		long long ans = s[1];
		for(int j = 2;j <= m;j++){
			ans &= s[j];
		}
		cout << ans;
	}
	else if(n <= 20){
		dfs(m,maxsi);
		cout << anst;
	}
	else{
		sort(s+1,s+n+1,cmp);
		if(judge()){
			cout << s[1];
		}
		else{
			long long ans = s[1];
			for(int j = 2;j <= m;j++){
				ans &= s[j];
			}
			cout << ans;
		}
	}
	return 0;
} 
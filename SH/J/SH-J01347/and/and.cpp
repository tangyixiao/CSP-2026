#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
//I AK csp-j
int n,m;
long long a[N];
long long b[N];

long long ans = 0;

void dfs(int now,int cnt){
	if(cnt > m){
		long long num = b[1];
		
		for(int i = 2;i < cnt;i++){
			num = (num & b[i]);
		
		} 
		ans = max(ans,num);
		return;
	}
	if(now > n){
		return;
	}
	
	b[cnt] = a[now];
	dfs(now+1,cnt+1);
	dfs(now+1,cnt);
	
} 

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(n <= 20){
		dfs(1,1);
		cout << ans;
		return 0;
	}else if(n <= 2000){
		if(m == 1){
			for(int i = 1;i <= n;i++){
				ans = max(ans,a[i]);
			}
			cout << ans;
			return 0;
		}
		if(m == n){
			long long num = a[1];
			for(int i = 2;i <= n;i++){
				num = (num & a[i]);
			}
			cout << num;
			return 0;
		}
		if(m==2){
			long long ans = 0;
			for(int i = 1;i <= n;i++){
				for(int j = i + 1;j <= n;j++){
					ans = max(ans,(a[i] & a[j]));
				}
			}
			cout << ans;
		}
	}else if(m == n){
			long long num = a[1];
			for(int i = 2;i <= n;i++){
				num = (num & a[i]);
			}
			cout << num;
			return 0;
		}else{
		sort(a+1,a+n+1);
		cout << a[n-m+1];
	}
	
	return 0;
}

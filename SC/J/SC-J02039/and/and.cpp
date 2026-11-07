#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010]cnt[500010];
void dfs(){
	for(int i = 1;i <= n;i ++){
		if(y == 0||x>m)return;
		else{
			if(x<m){
			for(int i = 0;i <= n;i ++){
				for(int j = i+1;j <= n;j ++){
					c[i] = a[i]&a[i];
				}
		}
	}
	else{
		for(int i = x;i <= n;i ++){
			for(int j = y;j <= y;j ++){
			}
		}
	} 
	}
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i >= n;i ++){
		cin >> a[i];
	}
	if(n <= 20){ 
		for(int i = 1;i <= n;i ++)
		{
			
		}
	}
	for(int i = 1;i <= n;i ++){
		for(int j = i + 1;j <= n;j ++){
			int t = a[i]&a[j];
			maxn = max(maxn,t);
		}
	}
	else if(m == 3){
		for(int i = 2;i <= n;i ++){
			for(int j = i;j <= n;j ++){
				for(int z = j+1;z <= n;z ++){
					int p = a[i]&a[i]
				}
			}			
			b[i] = a[i];
			}
			for(int i = 1;i <= n;i ++){
				a[i] = 1;
				
			}
		}
	}
	cout << maxn;
	
	return 0;	
}

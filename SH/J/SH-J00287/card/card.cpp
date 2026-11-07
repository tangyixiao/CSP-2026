#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int b[300005];
int c[500005];
int ans[300005];
bool flag = 1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.ans","r",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		if(a[i] < a[i - 1])flag = 0;
	}
	if(flag == 0){
		for(int i = 1;i <= n;i++){
			int now = 0;
			for(int j = i;j <= n;j++){
				if(b[a[j]] == 0){
					now++;
					b[a[j]] = now;
					c[now] = a[j];
				}
				else{
					//收走第b[a[j]]到第now张牌 
					for(int k = b[a[j]] + 1;k <= now;k++){
						b[c[k]] = 0;
						c[k] = 0;
					}
					now = b[a[j]];
				}
			}
			for(int j = 1;j <= now;j++){
				ans[c[j]]++;
			}
			memset(b,0,sizeof(b));
			memset(c,0,sizeof(c));
		}
	}
	else{
		if(n <= 5000){
			for(int i = 1;i <= n;i++){
				int now = 0;
				for(int j = i;j <= n;j++){
					if(b[a[j]] == 0){
						now++;
						b[a[j]] = now;
						c[now] = a[j];
					}
				}
				for(int j = 1;j <= now;j++){
					ans[c[j]]++;
				}
				memset(b,0,sizeof(b));
				memset(c,0,sizeof(c));
			}
		}
		else{
			for(int i = 1;i <= n;i++){
				ans[a[i]] = i;
			}
		}
	}
	for(int i = 1;i <= m - 1;i++){
		cout<<ans[i]<<" ";
	}
	cout<<ans[m];
	return 0;
}

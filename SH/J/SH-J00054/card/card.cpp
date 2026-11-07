#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;
const int MAXN = 5e5 + 10; 
const int MAXM = 3e5 + 10;

int n,m;
int a[MAXN];
stack<int>s;
bool vis[MAXM];
int ans[MAXM];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		memset(vis,false,sizeof vis);
		for(int j = i;j <= n;j++){
			if(vis[a[j]] == true){
				while(s.top() != a[j]){
					vis[s.top()] = false;
					s.pop();
				}
				s.pop();
			}
			s.push(a[j]);
			vis[a[j]] = true;
		}
		for(int j = 1;j <= m;j++){
			if(vis[j]){
				ans[j]++;
			}
		}
	}
	
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	
	return 0;
}

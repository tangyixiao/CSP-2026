#include<iostream>
#include<vector>
using namespace std;
const int N = 5e5 + 5;
int n, m;
int a[N];
int pos[N];
long long ans[N];
int jump[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int idx;
	for(int i = n; i >= 1; i--){
		if(pos[a[i]]){
			jump[i] = pos[a[i]] + 1;
		}
		if(pos[a[i]] == 0){
			pos[a[i]] = i;
			jump[i] = i + 1;
		}
		idx = i;
		while(idx <= n){
			ans[a[idx]]++;
			idx = jump[idx];
		}
	}
	for(int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
}
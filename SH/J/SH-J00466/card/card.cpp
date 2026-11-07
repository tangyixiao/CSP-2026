#include <bits/stdc++.h>
using namespace std;
int l = 1,n,m,x;
bool vis[500007];
int ans[500007],a[300007];
void check(int x){
	for(int j = 1 ; j <= l; j ++){
		if(a[j] != x && !vis[j]){
			ans[j]++;
			vis[j] = true;
		}
		if(a[j] == x){
			l = j;
			continue;
		}
	}
}
void f(){
	for(int j = 1 ; j <= l ; j ++){
		vis[j] = false;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	if(m == 1){
		if(n % 2==0){
			cout << 0;
		}else{
			cout << n;
		}
		return 0;
	}
	for(int i = 1 ; i <= m ; i++){
		cout << n << " ";
	}
}

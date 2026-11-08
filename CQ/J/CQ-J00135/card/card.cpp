#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n, m, ans[N], a[N], ans1[N], o; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	o = 1;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		ans[a[i]] = i;
		if(a[i] < a[i - 1]) o = 0;
		ans1[a[i]] ++;
	}
	if(o == 1)
	for(int i = 1; i <= m; i ++){
		cout << ans[i] << " ";
	}
	else {
		for(int i = 1; i <= m; i ++){
			cout << ans1[i] << " ";
		}
	}
} 

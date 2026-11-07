#include<bits/stdc++.h>
#define int long long
 
using namespace std;

int n, m;
int a[500010];
int ans[300010]; 

void xydy(){
	int fi = 1;
	for(int i = 2;i <= n;i ++){
		if(a[i] != a[i - 1]){
			ans [a[i - 1]] += i - 1;
		} 
	}
	ans[a[n]] += n;
}

void slove1(){
	//                 v  这里记得改 
	for(int i = 1;i <= n;i ++){
		vector<int> vis(m + 5, -1);
		for(int j = i;j <= n;j ++){
			
			if(vis[a[j]] != -1){
			//	cout << j << "新来的" << a[j] << "篡位了" << vis[a[j]] << ",修改了";
				for(int k = vis[a[j]];k < j;k ++) vis[a[k]] = -1;
				vis[a[j]] = j;
			//	cout << '\n';
				
			} else{
				vis[a[j]] = j;
			}
		//	cout << "vis[3]:" <<vis[3] << '\n';
		}
	//	cout << "第" << i <<"轮健在的有"; 
		for(int j = 1;j <= m;j ++){
			if(vis[j] != -1) ans[j] ++;
	//		if(vis[j] != -1) cout << j<< ' ';
		}
	//	cout << '\n';
	}
}

void print(){
	for(int i = 1;i <= m;i ++) cout << ans[i] << ' ';
}



signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	bool is_xydy = true;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
		if(a[i] < a[i - 1]) is_xydy = false;
	} 
	if(is_xydy){
		xydy();
		print();
		return 0;
	}
	slove1();
	print();
	return 0;
}
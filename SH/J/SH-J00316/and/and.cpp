//dfs n n - 1 1 2
#include<bits/stdc++.h>
using namespace std;
int a[200005] , m_max[200005];
int n , m;
int dfs(int d ,int no ,  int ans){
	if(no == m){
		return ans;
	}
	if(d == n){
		return ans;
	}
	if(ans != -1){
		return max(dfs(d + 1 , no , ans) , dfs(d + 1 , no + 1 , ans & a[d]));
	}else{
		return max(dfs(d + 1 , no , ans) , dfs(d + 1 , no + 1 , a[d]));
	}
}
int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	int _max = -1 , ans = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(i != 0) m_max[i] = a[0];
		_max = max(_max , a[i]);
		ans &= a[i];
	} 
	m_max[0] = a[1];
	int res = -1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(i != j) m_max[i] &= a[j];
			res = max(res , a[i] & a[j]);
		}
	}
	int k = -1;
	for(int i = 0;i < n;i++){
		k = max(m_max[i] , k);
	}
	if(n <= 20) cout << dfs(0 , 0 , -1);// dfs 12345      25
	else if(m == 1) cout << _max;//输出最大值 6     5
	else if(m == n) cout << ans;// 全部与 7    5
	else if(m == 2) cout << res;// 任意便利 8910   15
	else if(m == n - 1) cout << k;//遍历1112   10
	else{
		//拿特判 13 14  15   15 
	} 
}
//最好情况 75 


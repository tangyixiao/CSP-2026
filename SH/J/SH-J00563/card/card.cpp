//#include <bits/stdc++.h>
//using namespace std;
//const int N = 5e5 + 9;
//const int M = 3e5 + 9;
//strcut node{
//	int id , l , r , max;
//}tr[N * 4]; 
//void build(int id,int l,int r){
//	if (l == r){
//		tr[i] = (node){id,l,r,0};
//		return ;
//	}
//	int mid = l + ((r - l) >> 1);
//	tr[i] = (node){id,l,mid,0};
//	tr[i] = (node){id,mid+1,r,0};
//}
//int query(int id, int l ,int r ,int s , int t){
//	if (r < s || t < l){
//		return 0;
//	}if (s <= l && r <= t){
//		return tr[id].max;
//	}else{
//		int mid = l + ((r - l) >> 1);
//		return max(query(id*2,l,mid,s,t),query(id*2+1,mid+1,r,s,t))
//	}
//}
//void upd(int id ,int l, int r, int x ,int t){
//	if (l == r){
//		tr[id].max = t;
//		return ;
//	} 
//	int mid = l + ((r - l) >> 1);
//	if (x <= mid){
//		upd(id*2,l,mid,x,t);
//	}else{
//		upd(id*2+1,mid+1,r,x,y)
//	}
//	tr[id].max = max(tr[id*2].max,tr[id*2+1].max);
//}
//int n ,  m  , a[N];
//int last[M];
//int ans[M];
//int main(){
//	cin >> n >> m;
//	for (int i = 1;i <= n ;i ++){
//		cin >> a[i];
//		last[a[i]] = i;
//	}
//	for (int i = 1;i <= n;i ++){
//		if (i - 1 > 0){
//			upd(1,1,n,last[a[i-1]],i-1);
//		}
//		ans[a[i]] = max(ans[a[i]],i - query(1,1,n,))
//	}
//	return 0 ;
//} 
#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 9;
const int M = 3e5 + 9;
int a[N] , n ,  m, last[M];
int ans[M];
void t(int i){
	fill(last+1,last+m+1,0);
	vector <int> now;
	for (int k = i; k <= n;k++){
		if (last[a[k]]){
			now.resize(last[a[k]]-1);
		}
		now.push_back(a[k]);
		last[a[k]] = now.size();
	}
	for (auto v : now){
		ans[v] ++ ;
	}
} 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i ++){
		cin >> a[i];
//		last[a[i]] = i;
	}
	for (int i = 1;i <= n;i ++){
		t(i);		
	}
	for (int i = 1;i <= m; i ++){
		cout << ans[i] << " ";
	} 
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500009];
int mi[500009];
int ma[500009];
int k[500009]; 

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// 核暴力
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) cin >> a[i];
	
	for(int i = 1; i <= n; i ++){
		stack <int> st;
		int have[500009] = {0};
		for(int j = i; j <= n; j ++){
			if(have[a[j]]){
				while(!st.empty() && st.top() != a[j]){
					have[st.top()] --;
					st.pop();
				}
			}
			else{
				st.push(a[j]);
				have[a[j]] ++;
			}
		}
		for(int j = 1; j <= m; j ++) k[j] += have[j];
	}
	for(int i = 1; i <= m; i ++) cout << k[i] << " ";
	
	/*
	// 11:05: 根本：如果一个数字在一局中可以使得**左右部分无交集**，那么+1.
	// 因此，可能需要一种可快速判断两侧有无交集的方法，最好O(logn). 
	
	// 我给放了，骗个1-6吧
	cin >> n >> m;
	queue <int> id[300009];
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		mi[a[i]] = (mi[a[i]]) ? mi[a[i]] : i;
		ma[a[i]] = i;
		id[a[i]].push(i);
	}
	
	for(int i = 1; i <= m; i ++){
		id[a[i]].pop();
		if(mi[i] == ma[i]) k[i] = 1;
	}
	
	k[a[n]] = n;
	for(int i = 1; i <= m; i ++) cout << k[i] << " ";
	*/
	
	return 0;
}

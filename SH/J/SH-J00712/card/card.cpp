#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
const int M = 3e5+5;
int a[N];
int cnt[M];
int n,m;
void solve(int x){
	int pai[M];
	int idx = 1;
	for (int i = x; i <= n; i++){
		bool flag=1;
		for (int j = 1; j < idx; j++){
			if (pai[j]==a[i]) {
				flag=0;
				idx=j+1;
				break;
			} 
		}
		if (flag){
			pai[idx]=a[i];
			idx++;
		}
	} 
	for (int i = 1; i < idx; i++){
		cnt[pai[i]]++;
	}
	return ;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for (int i = 1; i <= n; i++){
		cin>>a[i];
	}
	for (int i = 1; i <= n; i++){
		solve(i);
	}
	for (int i = 1; i <= m; i++){
		cout<<cnt[i]<<" ";
	}
	cout<<'\n';
	return 0;
}
	


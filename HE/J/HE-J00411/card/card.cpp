#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[500010];
int b[500010];
int tong[500010];
int tong2[500010];
int tong3[500010];
int c[500010];
stack<int> stk;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	int pos = m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		tong3[a[i]]++;
	}
	if(m == 2){
		if(tong3[1] % 2 == 1){
			cout << m << ' '; 
		}
		else{
			cout << 0 << ' ';
		}
		if(tong3[2] % 2 == 1){
			cout << m << ' '; 
		}
		else{
			cout << 0 << ' ';
		}
	}
	while(m--){
		//memset(tong,0,sizeof(tong));
		for(int i = 1;i<=n;i++){
			while(tong[a[i]] != 0){
				int x = stk.top();
				stk.pop();
				tong[x]--;
			}
			if(tong[a[i]] == 0){
				stk.push(a[i]);
				tong[a[i]]++;
			}
		}
		int l = 1;
		memset(tong,0,sizeof(tong));
		while(!stk.empty()){
			int x = stk.top();
			stk.pop();
			cout << x << ' ';
			c[l] = x;
			l++;
			tong2[x]++;
			tong[x]++;
		}
		for(int i = l-1;i>=1;i--){
			stk.push(c[i]);
		}
		memset(c,0,sizeof(c));
		cout << '\n';
	}
	for(int i = 1;i<=pos;i++){
		cout << tong2[i] << ' ';
	}
	return 0;
}//AFO

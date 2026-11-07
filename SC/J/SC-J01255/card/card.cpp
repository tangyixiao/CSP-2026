#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10, M=3e5+10;
int a[N], t[M], tt[M];
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	stack<int> st;
	for(int i=1;i<=n;i++){
		for(int i=1;i<=m;i++){
			tt[i]=0;
		}
		for(int x=i;x<=n;x++){
			tt[a[x]]++;
			if(tt[a[x]]==2){
				tt[a[x]]--;
				while(st.size()>0&&st.top()!=a[x]){
					int k=st.top();
					tt[k]--;
					st.pop();
				}
			}else{
				st.push(a[x]);
			}
		}
		while(st.size()>0){
			int k=st.top();
			t[k]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout << t[i] << ' ';
	}
	cout << '\n';
	return 0;
}
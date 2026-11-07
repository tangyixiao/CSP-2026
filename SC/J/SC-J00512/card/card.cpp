#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],ans[M];
bool b[M];
stack<int> st;
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		for(int j=1;j<=m;j++){
			b[j]=0;
		}
		//cout<<1;
		for(int j=i; j<=n; j++) {
			if(b[a[j]]) {
				while(st.top()!=a[j]) {
				//	cout<<"拿走了"<<st.top()<<endl;
					st.pop();
				}
			} else {
				st.push(a[j]);
			//	cout<<"加入了"<<st.top()<<endl;
				b[a[j]]=1;
			}
		}
		while(!st.empty()) {
			ans[st.top()]++;
			st.pop();
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
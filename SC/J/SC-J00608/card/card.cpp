#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int s[500010];
int z[300010];
int n,m;

stack<int> st;
int k[300010];

void bl() {
	for (int i=1;i<=n;++i) {
		if (s[i]!=s[n]) {
			++z[s[n]];
		}
		++z[s[i]];
	}
	cout<<z[1]<<' '<<z[2];
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if (m==1) {
		cout<<n;
		return 0;
	}
	for (int i=1;i<=n;++i) {
		cin>>s[i];
	}
	if (m==2) {
		bl();
		return 0;
	}
	for (int i=1;i<=n;++i) {
		for (int j=i;j<=n;++j) {
			if (k[s[j]]) {
				while (st.size()&&st.top()!=s[j]) {
					k[st.top()]=0;
					st.pop();
				}
			}
			else {
				k[s[j]]=1;
				st.push(s[j]);
			}
		}
		while (st.size()) {
			++z[st.top()];
			st.pop();
		}
		for (int i=1;i<=m;i++) {
			k[i]=0;
		}
	}
	for (int i=1;i<=m;i++) {
		cout<<z[i]<<' ';
	}
	return 0;
}

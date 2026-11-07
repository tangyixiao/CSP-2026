#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5;
ll n,m,a[N];
vector<ll> v[N];
stack<ll> st,stb;
map<ll,ll> mp,mpb;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		for(int j=1; j<=n; j++) {
			v[j].push_back(a[i]);
		}
	}
	for(int i=2; i<=n; i++) {
		v[i].erase(v[i].begin(),v[i].begin()+i-1);
	}
	for(int i=1; i<=n; i++) {
		while(!v[i].empty()) {
			mp[v[i][0]]+=1;
			if(mp[v[i][0]]!=2) {
				st.push(v[i][0]);
			} else if(mp[v[i][0]]==2) {
				if(!st.empty()) {
					while(v[i][0]!=st.top()) {
						st.pop();
					}
				}
			}
			v[i].erase(v[i].begin());
		}
		while(!st.empty()) {
			stb.push(st.top());
			st.pop();
		}
		while(!stb.empty()) {
			v[i].push_back(stb.top());
			stb.pop();
		}
	}
	for(int i=1; i<=n; i++) {
		while(!v[i].empty()) {
			mpb[v[i][0]]+=1;
			v[i].erase(v[i].begin());
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<mpb[i]<<" ";
	}


	return 0;
}



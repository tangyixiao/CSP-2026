#include<bits/stdc++.h>
using namespace std;//Trick||Treat!
string x,y,u,v;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>x>>y>>u>>v;
	if(x!=u) cout<<"0000";
	else {
		cout<<"1";
		int f=0;
		for(int i=0; i<v.size()-1; i++) {
			if(y[i]!=v[i]) {
				f=1;
				break;
			}
		}
		if(f) cout<<"000";
		else {
			cout<<"1";
			int a=0,b=0;
			if(y[y.size()-1]=='D'||y[y.size()-1]=='F') a=1;
			if(v[v.size()-1]=='D'||v[v.size()-1]=='F') b=1;
			if(a!=b) {
				cout<<"00";
			} else {
				cout<<"1";
				if(a==1) cout<<"1";
				else {
					if(v[v.size()-1]!='B'&&y[y.size()-1]!='B') cout<<"0";
					else cout<<"1";
				}
			}
		}
	}
	return 0;
}

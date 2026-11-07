#include<bits/stdc++.h>
#define int long long
using namespace std;
bool vis[10]={1,1,1,0,0};
signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<1;
			if(vis[b[2]-'A']==vis[d[2]-'A']){
				cout<<1;
				if(abs(b[2]-d[2])==1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}

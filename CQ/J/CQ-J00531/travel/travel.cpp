#include<bits/stdc++.h>
#define int long long
using namespace std;
string a,b,c,d;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a!=c) cout<<"0000";
	else{
		if(b[0]==d[0]&&b[1]==d[1]){
			char x=b[2],y=d[2];
			bool f=(x<='C');
			bool flag=(y<='C');
			if(f==flag){
				if(f){
					if(x!='B'&&y!='B') cout<<"1110";
					else cout<<"1111";
				}
				else cout<<"1111";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	return 0;
}

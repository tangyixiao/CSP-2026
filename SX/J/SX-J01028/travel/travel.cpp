#include<bits/stdc++.h>

using namespace std;
int n,m;
string a,b;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>a>>m>>b;
	if(n!=m) cout<<"0000",exit(0);
	else{
		cout<<"1";
		if(a[0]!=b[0]||a[1]!=b[1]) cout<<"000",exit(0);
		else{
			cout<<"1";
			if((a[2]<='C'&&b[2]>='D')||(a[2]>='D'&&b[2]<='C')) cout<<"00",exit(0);
			else{
				cout<<"1";
				if(abs(a[2]-b[2])==1) cout<<"1",exit(0);
				else cout<<"0",exit(0);
			}
		}
	}
	return 0;
}
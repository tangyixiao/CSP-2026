#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define fi first
#define se second
string a, b, c, d;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin.tie(0) -> ios::sync_with_stdio(0);
	cin>>a>>b>>c>>d; 
	if(a != c){
		cout<<"0000\n";
		return 0;
	}else{
		cout<<1;
		if(b[0] == d[0] && b[1] == d[1]){
			cout<<1;
			int x = b[2] - 'A' + 1;
			int y = d[2] - 'A' + 1;
			if((x <= 3 && y <= 3) || (x > 3 && y > 3)){
				cout<<1;
				if(abs(x - y) == 1) cout<<1;
				else cout<<0;
			}else{
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}
	}
	return 0;
}


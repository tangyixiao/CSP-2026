#include <bits/stdc++.h>
//#define int long long
#define debug(x) cout<<#x<<" = "<<x<<' '
#define N 
using namespace std;

int c1,c2;
int p1,p2;
string col1,col2;

void init(){
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	
	col1=s1.substr(0,2),col2=s2.substr(0,2);
	p1=s1[2],p2=s2[2];
}

void solve(){
	if(c1 != c2) cout<<"0000";
	else{
		cout<<"1";
		if(col1 != col2) cout<<"000";
		else{
			cout<<"1";
			if((p1 <= 'C' && p2 <= 'C') || (p1 >= 'D' && p2 >= 'D')){
				cout<<"1";
				if(p1 > p2) swap(p1,p2);
				if(p2-p1 == 1) cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}
	}
}

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	init();
	solve();
	return 0;
}

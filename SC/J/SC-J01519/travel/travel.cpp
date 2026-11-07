#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN=1e5+500;
string a,b,c,d;
bool f(){
	return a==c&&b[0]==d[0]&&b[1]==d[1]&&((b[2]<='C'&&d[2]<='C')||(b[2]>'C'&&d[2]>'C'));
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> a >> b >> c >> d;
	if(a==c){
		cout << "1";
	}else{
		cout << "0";
	}
	if(a==c&&b[0]==d[0]&&b[1]==d[1]){
		cout << "1";
	}else{
		cout << "0";
	}
	if(f()){
		cout << "1";
	}else{
		cout << "0";
	}
	if(f()&&(b[2]+1==d[2]||d[2]+1==b[2])){
		cout << "1";
	}else{
		cout << "0";
	}

//	cout << (15&3);
	return 0;
}
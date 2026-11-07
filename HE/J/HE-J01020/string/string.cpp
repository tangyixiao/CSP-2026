#include <bits/stdc++.h> 
#define int long long 
using namespace std;
int n;
string s;
int ans;

signed main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	while(n--){
		int x; char y;
		cin >> x >> y;
		while(x--) s += y;
	}
	int len = s.size()+1;
	if(len % 2 == 0){
		string x = s.substr(0 , len/2-1);
		string y = s.substr(len/2 , len-1);
		reverse(y.begin() , y.end());
		for(int i = 0 ; i < len/2 ; i++) if(x[i] != y[i]) ans++; 
	}else{
		string x = s.substr(0 , len/2-1);
		string y = s.substr(len/2+1 , len-1);
		reverse(y.begin() , y.end());
		for(int i = 0 ; i < len/2 ; i++) if(x[i] != y[i]) ans++; 
	}
	cout << ans;
	return 0;
}  

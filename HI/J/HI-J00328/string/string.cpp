#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	cin >> n;

	char a;
	string s, sa;
	
	for(int i=0; i<n; i++){
		cin >> m >> a;
		for(int j=0; j<m; j++){
			s+=a;
		}
	}
	
	for(int i=s.size()-1; i>=0; i--){
		sa+=s[i];
	}
	
	if(sa == s){
		cout << 0;
	}
	
	return 0;
}

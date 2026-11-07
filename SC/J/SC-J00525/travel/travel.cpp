#include<bits/stdc++.h>
using namespace std;
int check(int x){
	if(x == 1 || x == 3 || x == 7)return 1;
	if(x == 2)return 2;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	string a,b,c,d;cin >> a >> b >> c >> d;
	if(a != c){
		cout << "0000";
	}else{
		cout << 1;
		if(b.substr(0,2) != d.substr(0,2))cout << "000";
		else{
			cout << 1;
			int k = check((b[b.size()-1]-'A')+(d[d.size()-1]-'A'));
			if(k){
				cout << 1;
				if(k==2)cout << 0;
				else cout << 1;
			}else cout << "00";			
			
		}
	}
	return 0;
}
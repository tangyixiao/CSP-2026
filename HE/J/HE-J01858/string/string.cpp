#include <bits/stdc++.h>
const int N = 1e6;
using namespace std;
long long a;
string b;string s = "";
int n,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >>a>>b;
		for(int i = 1;i <= a;i++){
			s += b;
		}
	}
	for(int i = 0,j = s.size()-1;i <= s.size()/2,j >= s.size()/2;i++,j--){
		if(s[i] != s[j]) cnt++;
	}
	
	cout << cnt;
	
	return 0;
}

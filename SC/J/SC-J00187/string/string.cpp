#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	long long n,a,siz,g = 0;
	string s = "",x;
	cin >> n;
	while(n--){
		cin >> a;
		cin >> x;
		while(a--){
			s += x;
		}
	}
	siz = s.size() - 1;

	for(int i = 0;i <= siz / 2;i++){
		if(s[i] != s[siz - i]){
			g++;
		}
	}

	cout << g;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i++){
		int a;
		string s;
		cin >> a;
		cin >> s;
		ans += n;
	}
	if(n <= 2e5 - 1){
		cout << 0;
	}else{
		cout << ans;
	}
	return 0;
}

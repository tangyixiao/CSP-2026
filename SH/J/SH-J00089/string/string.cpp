#include <bits/stdc++.h>
using namespace std;

int ans = 0,mid_a,t;
int n,a[200005],len = 0,owo = 0;
char c[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	if(n == 1){
		cout << 0;
		return 0;
	}
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		len += a[i];
	}
	int ll = len / 2;
	string s;
	for(int i = 1;i <= len;i++){
		for(int j = 1;j <= a[i];j++){
			s[s.size()+1] = c[i];
		}
	}
	for(int i = 1;i <= ll;i++){
		if(s[i] != s[len-i+1]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}

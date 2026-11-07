#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,length,ans;
struct A{
	ll geshu;
	char data;
}a[200001];
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin >> n;
	for(ll i = 1;i <= n;i ++){
		cin >> a[i].geshu >> a[i].data;	
		length += a[i].geshu;
		for(int j = 1;j <= a[i].geshu;j ++){
			s += a[i].data;
		}
	}
	s = " " + s;
	if(length % 2 == 0){
		ll base = length / 2;
		for(int i = 1;i <= base;i ++){
			if(s[i] != s[length - i + 1]){
				ans ++;
			}
		}
	}else{
		ll base = (length + 1) / 2;
		for(int i = 1;i < base;i ++){
			if(s[i] != s[length - i + 1]){
				ans ++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
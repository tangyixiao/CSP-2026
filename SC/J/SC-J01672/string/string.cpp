#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
struct node{
	int a;
	char c;
}b[N];

int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string s;
	long long m = 0;
	for(int i = 1;i <= n;i++){
		cin >> b[i].a >> b[i].c;
		m += b[i].a;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= b[i].a;j++){
			s += b[i].c;
		}
	}
	long long mid = m / 2;
	string sn = s;
	reverse(sn.begin() , sn.end());
	long long ans = 0;
	for(long long i = 0;i < mid;i++){
		if(s[i] != sn[i]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
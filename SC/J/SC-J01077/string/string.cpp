#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
char m[N];
int main(){
	freopen("string.in","r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, a;
	long long sum = 0, cnt = 0, cnt1 = 0;
	stack <char> k; 
	char b;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a >> b;
		cnt1 = 0;
		for(int j = cnt;j <= cnt + a - 1;j++){
			m[j + 1] = b;
			k.push(b);
			cnt1++;
		}
		cnt += cnt1;
	}	
	for(int i = 1;i <= cnt;i++){
		if(k.top() != m[i]) sum++;
		k.pop();
	}
	long long ans = sum / 2;
	cout << ans;
	return 0;
}
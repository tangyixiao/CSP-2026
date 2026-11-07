#include <bits/stdc++.h>
using namespace std;
int a[200005];
string s[200005], N = "000000000000000000000000000000";
string f(long long x){
	string t, k;
	int cnt = 0;
	while(x){
		cnt++;
		t += (x % 2) + '0';
		x /= 2;
	}
	while(cnt <= 30){
		cnt++;
		t += '0';
	}
	for(int i = 0;i < cnt;i++){
		k += t[30 - i - 1];
		a[i] += k[i] - '0';
	}
	return k;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, x;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> x;
		s[i] = f(x);
	}
	long long cnt = 0, sum = 0;
	for(int i = 0;i < 30;i++){
		if(a[i] < m){
			continue;
		}
		cnt = 0;
		for(int j = 0;j < n;j++){
			if(s[j][i] == '1'){
				cnt++;
			}
		}
		if(cnt >= m){
			sum += pow(2, 30 - i - 1);
			for(int j = 0;j < n;j++){
				if(s[j][i] == '0'){
					s[j] = N;
				}
			}
		}
	}
	cout << sum;
	return 0;
}

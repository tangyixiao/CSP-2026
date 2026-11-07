#include<bits/stdc++.h>
using namespace std;
unsigned long long n, m;
char a[500003];
unsigned long long d[300003];
int main(){
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		string s;
		for (int j = i;j <= n;j++){
			s += a[i];
		}
		for (int j = 0;j < s.size();j++){
			for (int k = j + 1;k < s.size();k++){
				if (s[j] == s[k]){
					for (int l = j;l < k;l++){
						int r = l + k - j;
						s[l] = s[r];
					}
				}
			}
		}
		for (int j = 0;j < s.size();j++){
			d[s[j] - '0']++;
		}
		s = "";
	}
	for (int i = 1;i <= m;i++){
		cout << d[i] << ' ';
	}
	return 0;
}
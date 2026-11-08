#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	vector<long long> ai(n);
	vector<char> ci(n);
	cin >> n;
	for(long long i = 0; i < n; i++){
		cin >> ai[i] >> ci[i];
	}
	vector<char> yuanlai;
	for(long long j = 0; j < n; j++){
		for(long long i = 0; i < ai[j]; i++){
			yuanlai.push_back(ci[j]);
		}
	}
	long long ans = 0;
	long long len = yuanlai.size();
	for(long long i = 0; i < len/2; i++) {
		if(yuanlai[i] != yuanlai[len - 1 - i]){
			ans++;
		}
	} 
	cout << ans << endl; 
	return 0;
}

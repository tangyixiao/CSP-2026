#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	long long sum = 0;
	for (int i = 0; i < n; ++i){
		int a;
		cin >> a;
		char c;
		cin >> c;
		for (int i = sum; i < a + sum; ++i){
			s[i] = c;
		}
		sum += a;
	}
	long long tot = 0;
	if (sum%2 == 1){
		long long r = sum/2 - 1;
		long long l = sum/2 + 1;
		for (int i = 0; i < sum/2; ++i){
		 	if (s[r] != s[l]){
		 		tot ++;
			}
			r--;l++;
		}
	} else {
		long long r = sum/2 - 1;
		long long l = sum/2;
		for(int i = 0; i < sum/2; ++i){
			if (s[r] != s[l]){
		 		tot ++;
			}
			r--;l++;
		}
	}




	cout << tot;



	return 0;
}

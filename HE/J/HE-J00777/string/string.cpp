#include<bits/stdc++.h>
using namespace std;
int n;
string s;
long long sum;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 0;i < n;i++){
		long long a;
		char c;
		cin >> a;
		cin >> c;
		for(int i = 1;i <= a;i++){
			s += c;
		}
		sum += a;
	}
	for(int i = 0;i < (sum+1)/2;i++){
		if(s[i] != s[sum - 1 - i]){
			ans++;
		}
	}
	cout << ans;
	
	return 0;
}

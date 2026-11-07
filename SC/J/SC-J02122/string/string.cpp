#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	string str;
	for(long long i = 0; i < n; i++){
		long long a;
		char c;
		cin >> a >> c;
		for(long long j = 0; j < a; j++){
			str += c;
		}
	}
	long long ans = 0;
	long long j = str.size()-1;
	for(long long i = 0; i <= str.size() / 2; i++){
		if(str[i] == str[j]){
			j--;
		}
		else{
			ans++;	
			j--;
		}
	}
	cout << ans;
	return 0;
} 
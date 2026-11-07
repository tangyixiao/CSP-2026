#include<bits/stdc++.h>	
using namespace std;
long long a[200009];
char c[200009];
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] >> c[i];
	}
	string s;
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		for( long long j = 0 ; j < a[i] ; j++){
			s = s + c[i];
		}
		sum += a[i];
	}
	int ans = 0;
	if(sum % 2 == 0){
		for(int i = 0 ; i < sum / 2 - 1 ; i++){
			if(s[i] == s[sum - i - 1]){
				ans += 0;
			}
			else{
				ans += 1;
			}
		}
	}
	else{
		for(int i = 0 ; i < (sum - 1) / 2 ; i++){
			if(s[i] == s[sum - i - 1]){
				ans += 0;
			}
			else{
				ans += 1;
			}
		}
	}
	cout << ans;
} 

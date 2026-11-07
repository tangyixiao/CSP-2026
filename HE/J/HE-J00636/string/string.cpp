#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int n;
int sum;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		char s[15],letter;
		int cnts = 0;
		int j = 0;
		while(cin >> s[j]){
			if(s[j] <= '9' && s[j] >= '0'){
				cnts *= 10;
				cnts += s[j];
				sum *= 10;
				sum += s[j];
			}
			else{
				letter = s[j];
			}
		}
		for(int j = 1;j <= cnts;j++){
			c[j] = letter;
		}
	}
	int ans = 0;
	int l = 1,r = sum;
	while(l <= r){
		if(c[l] != c[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout << ans;
	return 0;
}

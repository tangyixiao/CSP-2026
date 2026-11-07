#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long a[101000];
	long long cnt = 0,ans = 0;
	char c[101000];
	string s;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	for(int i = 1;i <= n;i++){
		ans += a[i];
		for(int j = 1;j <= a[i];j++){
			s += c[i];
		}
	}
	for(int i = 1;i <= n/2+1;i++){
		int j = ans - i + 1;
		if(s[i] != s[j]){
			cnt++;
		}
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}  

#include<bits/stdc++.h>
using namespace std;
int n;
string s = "";
long long a[200005];
string c[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=a[i];j++) s+=c[i];
	}
	long long ans = 0;
	long long l = 0;
	long long r = s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]) ++ans;
		++l;
		--r;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

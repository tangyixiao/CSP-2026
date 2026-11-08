#include <bits/stdc++.h>
using namespace std;

long long a[200001];
char c[200001];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	int ct = 0;
	long long ans = 0;
	for (int i = 0;i < n;i++){
		cin>>a[i]>>c[i];
		ans += a[i];
	}
	for (int i = 0;i < n-1;i++){
		if (c[i] == c[i+1]){
			ct++;
		}
	}
	if (c[n-1] == c[0]) ct++;
	if (ct == n){
		cout<<0;
		return 0;
	}
	string s;
	for (int i = 0;i < n;i++){
		for (int j = 1;j <= a[i];j++){
			s += c[i];
		}
	}
	long long cnt = 0;
	for (int i = 0;i < ans/2;i++){
		if (s[i] != s[ans-i-1]){
			cnt++; 
		}
	}
	cout<<cnt;
	return 0;
}


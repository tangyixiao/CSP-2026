#include<bits/stdc++.h>
using namespace std;
string a;
string re;
int ans;
int l, r;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	while(n--){
		long long x;
		char c;
		cin >> x >> c;
		for(int i = 1; i <= x; i++){
			a = a+c;
		}
	}
	//cout << a << "\n" << a.size() << "\n";
	for(int i = 0; i < a.size(); i++){
		re[a.size()-i-1] = a[i];
	}
	bool fl = 1;
	for(int i = 0; i < a.size(); i++){
		if(a[i] != re[i]){
			fl = 0;
		}
	}
	if(fl){
		cout << ans;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	l = 0, r = a.size()-1;
	while(1){
		if(a[l] != a[r]){
			a[r] = a[l];
			l++;
			r--;
			ans++;
		}
		for(int i = 0; i < a.size(); i++){
			re[a.size()-i-1] = a[i];
		}
		fl = 1;
		for(int i = 0; i < a.size(); i++){
			if(a[i] != re[i]){
				fl = 0;
			}
		}
		if(fl){
			break;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

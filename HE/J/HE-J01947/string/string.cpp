#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
long long a[N];
char c[N];
string s;

bool hui(string s){
	string s2;
	int j = s.size()-1;
	for (int i = 0;i < s.size();i++){
		s2 += s[j];
		j--;
	}
	if (s == s2){
		return 1;
	}
	
	return 0;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	int len = 0;
	int mx = 0;
	char mxc;
	int sum;
	int flag = 0;
	for (int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		if (a[i] < N-100){
			flag = 1;
			for (int j = 1;j <= a[i];j++){
				s += c[i];
			}
		}
		len += a[i];
	}
	
	sum = mx - len;
	if (hui(s)){
		sum = 0;
	}
	
	cout << sum;
	
	return 0;
}

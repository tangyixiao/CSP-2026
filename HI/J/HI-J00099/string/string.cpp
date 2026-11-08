#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s1;
		int b;
		cin >> b;
		cin >> s1;
		for(int j = 1;j <= b;j++){
			s += s1;
		}
	}
	long long a = s.size();
	long long cnt = 0;
	for(long long i= 0;i < a;i++){
		if(s[i] !=s[a-i-1]){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	string s = "";
	string t;
	int n;
	cin >> n;
	for (int i = 0;i < n;i++){
		int a;
		char c;
		cin >> a >> c;
		for (int j = 0;j < a;j++) s = s + c;
	}
	int half = (s.size() + 1) / 2;
	t = s;
	for (int i = 0;i < half;i++){
		t[s.size() - 1 - i] = s[i];
	}
	int cnt = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] != t[i]) cnt++;
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

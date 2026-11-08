#include <iostream>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out", "w",stdout);
	
	string s = "";
	long long a;  cin >> a;
	for (long long i = 0; i < a; i++){
		long long b;  cin >> b;
		string c;  cin >> c;
		for (long long j = 0; j < b; j++){
			s += c;
		}
	}
	
	string t = "";
	long long d;
	d = s.size() / 2;
	if (s.size() % 2 == 1){
		for (long long i = 0; i <= d; i++){
			t += s[i];
		}
		long long j = d;
		for (long long i = s.size()-1; i > d; i--){
			j--;
			t += s[j];
		}
	}else{
		for (long long i = 0; i < d; i++){
			t += s[i];
		}
		int j = d;
		for (long long i = s.size(); i > d; i--){
			j--;
			t += s[j];
		}
	}
	
	long long j = 0;
	for (long long i = 0; i < t.size(); i++){
		if (t[i] != s[i]){
			j++;
		}
	}
	
	cout << j;
	return 0;
}

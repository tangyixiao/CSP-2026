#include <iostream>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long sum = 0, ans = 0;
	string s;
	cin >> n;
	for (int i = 0;i < n;++ i){
		int a;
		string x;
		cin >> a >> x;
		for (int j = 0;j < a;++ j){
			s += x;
		}
		sum += a;
	}
	for(int i = 0;i < sum / 2;++ i){
		if (s[i] != s[sum - i - 1]){
			++ ans;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}